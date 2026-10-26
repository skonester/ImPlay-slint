// ImPlay-Slint. Copyright (c) 2026 Skonester.
// SPDX-License-Identifier: GPL-2.0-only

#include "video_renderer.h"

#include <cstdio>
#include <stdexcept>
#include <string_view>
#include <utility>
#include <vector>

#include <GLES3/gl3.h>

namespace ImPlay {
namespace {

#ifdef _WIN32
constexpr int WGL_CONTEXT_MAJOR_VERSION_ARB = 0x2091;
constexpr int WGL_CONTEXT_MINOR_VERSION_ARB = 0x2092;
constexpr int WGL_CONTEXT_PROFILE_MASK_ARB = 0x9126;
constexpr int WGL_CONTEXT_ES2_PROFILE_BIT_EXT = 0x0004;
constexpr GLenum GL_CONTEXT_PROFILE_MASK_QUERY = 0x9126;
using CreateContextAttribs = HGLRC(WINAPI*)(HDC, HGLRC, const int*);
#endif

GLsync toSync(void* fence) { return static_cast<GLsync>(fence); }

// Keeps Slint's framebuffer and texture bindings intact around our UI-context GL calls.
class SavedBindings {
 public:
  SavedBindings() {
    glGetIntegerv(split ? GL_READ_FRAMEBUFFER_BINDING : GL_FRAMEBUFFER_BINDING, &read);
    glGetIntegerv(split ? GL_DRAW_FRAMEBUFFER_BINDING : GL_FRAMEBUFFER_BINDING, &draw);
    glGetIntegerv(GL_TEXTURE_BINDING_2D, &texture);
    scissor = glIsEnabled(GL_SCISSOR_TEST);
    if (scissor) glDisable(GL_SCISSOR_TEST);
  }
  ~SavedBindings() {
    if (split) {
      glBindFramebuffer(GL_READ_FRAMEBUFFER, static_cast<GLuint>(read));
      glBindFramebuffer(GL_DRAW_FRAMEBUFFER, static_cast<GLuint>(draw));
    } else {
      glBindFramebuffer(GL_FRAMEBUFFER, static_cast<GLuint>(draw));
    }
    glBindTexture(GL_TEXTURE_2D, static_cast<GLuint>(texture));
    if (scissor) glEnable(GL_SCISSOR_TEST);
  }
  SavedBindings(const SavedBindings&) = delete;
  SavedBindings& operator=(const SavedBindings&) = delete;

 private:
  // OpenGL ES 2 contexts (where glad loads no ES 3 functions) have one framebuffer binding.
  const bool split = glBlitFramebuffer != nullptr;
  GLint read = 0;
  GLint draw = 0;
  GLint texture = 0;
  GLboolean scissor = GL_FALSE;
};

void allocateTexture(GLuint texture, int width, int height) {
  glBindTexture(GL_TEXTURE_2D, texture);
  // Unsized GL_RGBA (8 bits per channel) is also valid on OpenGL ES 2.
  glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
}

}  // namespace

VideoRenderer::VideoRenderer(Mpv& mpv, GLAddrLoadFunc load) : mpv(mpv), load(load) {
  glGenFramebuffers(1, &displayFramebuffer);
#ifdef _WIN32
  if (!createSharedContext()) destroySharedContext();
#endif
  if (threaded()) glGenFramebuffers(1, &readFramebuffer);
}

VideoRenderer::~VideoRenderer() {
  stop();
#ifdef _WIN32
  destroySharedContext();
#endif
}

void VideoRenderer::start(FrameReady ready) {
  frameReady = std::move(ready);
  if (threaded()) {
    std::promise<void> promise;
    auto future = promise.get_future();
    thread = std::thread(&VideoRenderer::renderLoop, this, &promise);
    try {
      future.get();
      started = true;
      return;
    } catch (const std::exception& e) {
      thread.join();
      std::fprintf(stderr, "ImPlay: video render thread unavailable (%s); rendering on the UI thread\n", e.what());
#ifdef _WIN32
      destroySharedContext();
#endif
    }
  }

  // The UI thread can't wait for each frame's display time, so have mpv not render early.
  mpv.property("video-timing-offset", "0");
  mpv.initRender(load);
  started = true;
}

void VideoRenderer::notifyUpdate() {
  if (!threaded()) {
    if (frameReady) frameReady();
    return;
  }
  {
    std::lock_guard lock(mutex);
    updatePending = true;
  }
  wake.notify_one();
}

bool VideoRenderer::beforeRendering(int width, int height) {
  if (!started) return false;

  if (!threaded()) {
    SavedBindings saved;
    const bool resized = allocateDisplay(width, height);
    // Reallocating the texture discards the last picture. mpv can redraw its
    // previous frame even when paused and no new-frame update is pending.
    if (mpv.wantRender() || resized) {
      glBindFramebuffer(GL_FRAMEBUFFER, displayFramebuffer);
      // The borrowed GL texture is sampled with GL texture coordinates, unlike a
      // window backbuffer, so the frame must not be flipped.
      mpv.render(width, height, static_cast<int>(displayFramebuffer), false, false);
      mpv.reportSwap();
    }
    return resized;
  }

  Slot* slot = nullptr;
  bool resize = false;
  {
    std::lock_guard lock(mutex);
    if (width != targetWidth || height != targetHeight) {
      targetWidth = width;
      targetHeight = height;
      sizeChanged = resize = true;
    }
    if (readySlot >= 0) {
      copyingSlot = std::exchange(readySlot, -1);
      slot = &slots[copyingSlot];
    }
  }
  if (resize) wake.notify_one();
  if (slot == nullptr) return false;

  // Until the render thread catches up with a resize, keep showing frames at their own
  // size; Slint scales the image into place.
  bool reallocated = false;
  {
    SavedBindings saved;
    reallocated = allocateDisplay(slot->width, slot->height);
    glWaitSync(toSync(slot->readyFence), 0, GL_TIMEOUT_IGNORED);
    glDeleteSync(toSync(slot->readyFence));
    slot->readyFence = nullptr;
    blit(*slot);
  }
  void* release = glFenceSync(GL_SYNC_GPU_COMMANDS_COMPLETE, 0);
  // Another context waits on this fence, so it must reach the GPU.
  glFlush();
  {
    std::lock_guard lock(mutex);
    slot->releaseFence = release;
    copyingSlot = -1;
  }
  return reallocated;
}

void VideoRenderer::release() {
  stop();
  if (started && !threaded()) mpv.freeRender();
  started = false;
  if (displayTexture != 0) glDeleteTextures(1, &displayTexture);
  if (displayFramebuffer != 0) glDeleteFramebuffers(1, &displayFramebuffer);
  if (readFramebuffer != 0) glDeleteFramebuffers(1, &readFramebuffer);
  displayTexture = displayFramebuffer = readFramebuffer = 0;
  displayWidth = displayHeight = 0;
#ifdef _WIN32
  destroySharedContext();
#endif
}

void VideoRenderer::stop() {
  if (!thread.joinable()) return;
  {
    std::lock_guard lock(mutex);
    stopping = true;
  }
  wake.notify_all();
  thread.join();
}

bool VideoRenderer::allocateDisplay(int width, int height) {
  if (displayTexture != 0 && width == displayWidth && height == displayHeight) return false;
  if (displayTexture == 0) glGenTextures(1, &displayTexture);
  allocateTexture(displayTexture, width, height);
  glBindFramebuffer(GL_FRAMEBUFFER, displayFramebuffer);
  glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, displayTexture, 0);
  displayWidth = width;
  displayHeight = height;
  return true;
}

void VideoRenderer::blit(Slot& slot) {
  glBindFramebuffer(GL_READ_FRAMEBUFFER, readFramebuffer);
  glFramebufferTexture2D(GL_READ_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, slot.texture, 0);
  glBindFramebuffer(GL_DRAW_FRAMEBUFFER, displayFramebuffer);
  glBlitFramebuffer(0, 0, slot.width, slot.height, 0, 0, displayWidth, displayHeight, GL_COLOR_BUFFER_BIT,
                    GL_NEAREST);
}

// Render thread

void VideoRenderer::renderLoop(std::promise<void>* startup) {
#ifdef _WIN32
  if (!wglMakeCurrent(contextDc, context)) {
    startup->set_exception(std::make_exception_ptr(std::runtime_error("could not activate the shared GL context")));
    return;
  }
#endif
  try {
    mpv.initRender(load);
  } catch (...) {
#ifdef _WIN32
    wglMakeCurrent(nullptr, nullptr);
#endif
    startup->set_exception(std::current_exception());
    return;
  }
  startup->set_value();

  while (true) {
    bool update = false;
    bool resized = false;
    int width = 0;
    int height = 0;
    {
      std::unique_lock lock(mutex);
      wake.wait(lock, [this] { return stopping || updatePending || sizeChanged; });
      if (stopping) break;
      update = std::exchange(updatePending, false);
      resized = std::exchange(sizeChanged, false);
      width = targetWidth;
      height = targetHeight;
    }
    // mpv expects an update() after each update callback, even if nothing gets drawn.
    const bool frame = update && mpv.wantRender();
    if ((!frame && !resized) || width <= 0 || height <= 0) continue;

    // With one slot ready and one being copied by the UI, a third is always free.
    int index = 0;
    {
      std::lock_guard lock(mutex);
      while (index == readySlot || index == copyingSlot) ++index;
    }
    renderSlot(slots[index], width, height);

    void* dropped = nullptr;
    {
      std::lock_guard lock(mutex);
      // A frame the UI never picked up is simply replaced by the newer one.
      if (readySlot >= 0) dropped = std::exchange(slots[readySlot].readyFence, nullptr);
      readySlot = index;
    }
    if (dropped != nullptr) glDeleteSync(toSync(dropped));
    mpv.reportSwap();
    if (frameReady) frameReady();
  }

  for (auto& slot : slots) {
    if (slot.readyFence != nullptr) glDeleteSync(toSync(slot.readyFence));
    if (slot.releaseFence != nullptr) glDeleteSync(toSync(slot.releaseFence));
    if (slot.framebuffer != 0) glDeleteFramebuffers(1, &slot.framebuffer);
    if (slot.texture != 0) glDeleteTextures(1, &slot.texture);
    slot = {};
  }
  {
    std::lock_guard lock(mutex);
    readySlot = copyingSlot = -1;
  }
  mpv.freeRender();
#ifdef _WIN32
  wglMakeCurrent(nullptr, nullptr);
#endif
}

void VideoRenderer::renderSlot(Slot& slot, int width, int height) {
  if (slot.releaseFence != nullptr) {
    // The UI's copy of this texture must finish before mpv draws over it.
    glWaitSync(toSync(slot.releaseFence), 0, GL_TIMEOUT_IGNORED);
    glDeleteSync(toSync(slot.releaseFence));
    slot.releaseFence = nullptr;
  }
  if (slot.texture == 0) {
    glGenTextures(1, &slot.texture);
    glGenFramebuffers(1, &slot.framebuffer);
  }
  if (slot.width != width || slot.height != height) {
    allocateTexture(slot.texture, width, height);
    glBindTexture(GL_TEXTURE_2D, 0);
    glBindFramebuffer(GL_FRAMEBUFFER, slot.framebuffer);
    glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, slot.texture, 0);
    slot.width = width;
    slot.height = height;
  }
  // Off the UI thread, mpv may wait here for the frame's display time.
  mpv.render(width, height, static_cast<int>(slot.framebuffer), false, true);
  slot.readyFence = glFenceSync(GL_SYNC_GPU_COMMANDS_COMPLETE, 0);
  // The UI context waits on this fence, so it must reach the GPU.
  glFlush();
}

#ifdef _WIN32
bool VideoRenderer::createSharedContext() {
  const HGLRC shared = wglGetCurrentContext();
  const HDC sharedDc = wglGetCurrentDC();
  // Slint on EGL (ANGLE) has no WGL context to share; render on the UI thread instead.
  if (shared == nullptr || sharedDc == nullptr) return false;
  if (glFenceSync == nullptr || glWaitSync == nullptr || glDeleteSync == nullptr || glBlitFramebuffer == nullptr)
    return false;
  const auto create = reinterpret_cast<CreateContextAttribs>(wglGetProcAddress("wglCreateContextAttribsARB"));
  if (create == nullptr) return false;

  // The render thread needs a drawable with Slint's pixel format to make its context current.
  const int format = GetPixelFormat(sharedDc);
  PIXELFORMATDESCRIPTOR descriptor{};
  if (format == 0 || DescribePixelFormat(sharedDc, format, sizeof(descriptor), &descriptor) == 0) return false;
  WNDCLASSW windowClass{};
  windowClass.style = CS_OWNDC;
  windowClass.lpfnWndProc = DefWindowProcW;
  windowClass.hInstance = GetModuleHandleW(nullptr);
  windowClass.lpszClassName = L"ImPlay.VideoContext";
  RegisterClassW(&windowClass);
  contextWindow = CreateWindowExW(0, windowClass.lpszClassName, L"", WS_POPUP, 0, 0, 1, 1, nullptr, nullptr,
                                  windowClass.hInstance, nullptr);
  if (contextWindow == nullptr) return false;
  contextDc = GetDC(contextWindow);
  if (contextDc == nullptr || !SetPixelFormat(contextDc, format, &descriptor)) return false;

  // Match Slint's context, usually an OpenGL ES profile created through WGL, so the two
  // can share textures and fences.
  const auto* version = reinterpret_cast<const char*>(glGetString(GL_VERSION));
  const bool es = version != nullptr && std::string_view(version).starts_with("OpenGL ES");
  GLint major = 0;
  GLint minor = 0;
  GLint profile = 0;
  glGetIntegerv(GL_MAJOR_VERSION, &major);
  glGetIntegerv(GL_MINOR_VERSION, &minor);
  if (!es && major >= 3) glGetIntegerv(GL_CONTEXT_PROFILE_MASK_QUERY, &profile);
  while (glGetError() != GL_NO_ERROR) {
  }

  std::vector<int> attributes;
  if (major > 0) {
    attributes.insert(attributes.end(), {WGL_CONTEXT_MAJOR_VERSION_ARB, major, WGL_CONTEXT_MINOR_VERSION_ARB, minor});
  }
  if (es || profile != 0) {
    attributes.insert(attributes.end(), {WGL_CONTEXT_PROFILE_MASK_ARB, es ? WGL_CONTEXT_ES2_PROFILE_BIT_EXT : profile});
  }
  attributes.push_back(0);
  context = create(contextDc, shared, attributes.data());
  return context != nullptr;
}

void VideoRenderer::destroySharedContext() {
  if (context != nullptr) wglDeleteContext(context);
  if (contextDc != nullptr) ReleaseDC(contextWindow, contextDc);
  if (contextWindow != nullptr) DestroyWindow(contextWindow);
  context = nullptr;
  contextDc = nullptr;
  contextWindow = nullptr;
}
#endif

}  // namespace ImPlay
