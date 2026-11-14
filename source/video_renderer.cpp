// ImPlay-Slint. Copyright (c) 2026 Skonester.
// SPDX-License-Identifier: GPL-2.0-only

#include "video_renderer.h"

#include <stdexcept>
#include <utility>

#include <GLES3/gl3.h>

namespace ImPlay {
namespace {

// Preserve the window's render target around mpv's offscreen draw. The remaining
// state is reset to GL defaults for mpv; FemtoVG binds its own state afterwards.
class SavedTarget {
 public:
  SavedTarget() {
    glGetIntegerv(GL_FRAMEBUFFER_BINDING, &framebuffer);
    glGetIntegerv(GL_VIEWPORT, viewport);
  }
  ~SavedTarget() {
    glBindFramebuffer(GL_FRAMEBUFFER, static_cast<GLuint>(framebuffer));
    glViewport(viewport[0], viewport[1], viewport[2], viewport[3]);
  }

 private:
  GLint framebuffer = 0;
  GLint viewport[4]{};
};

void prepareTarget(GLuint framebuffer, int width, int height) {
  glBindFramebuffer(GL_FRAMEBUFFER, framebuffer);
  glViewport(0, 0, width, height);
  glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
  for (const auto capability : {GL_SCISSOR_TEST, GL_DEPTH_TEST, GL_STENCIL_TEST, GL_CULL_FACE, GL_BLEND})
    glDisable(capability);
  glActiveTexture(GL_TEXTURE0);
  glBindTexture(GL_TEXTURE_2D, 0);
  glUseProgram(0);
  glBindBuffer(GL_ARRAY_BUFFER, 0);
  if (glBindVertexArray != nullptr) {
    glBindVertexArray(0);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
    glBindBuffer(GL_PIXEL_UNPACK_BUFFER, 0);
    glPixelStorei(GL_UNPACK_ROW_LENGTH, 0);
  }
  glPixelStorei(GL_UNPACK_ALIGNMENT, 4);
  glPixelStorei(GL_PACK_ALIGNMENT, 4);
}

}  // namespace

VideoRenderer::VideoRenderer(Mpv& mpv, GLAddrLoadFunc load) : mpv(mpv), load(load) {}

void VideoRenderer::start(FrameReady ready) {
  frameReady = std::move(ready);
  // UI rendering must not sleep until a future video timestamp. mpv schedules
  // callbacks when frames are due, and Slint's normal presentation paces draws.
  mpv.initRender(load);
  started = true;
}

void VideoRenderer::notifyUpdate() {
  if (frameReady) frameReady();
}

bool VideoRenderer::beforeRendering(int width, int height) {
  if (!started || width < 1 || height < 1) return false;
  const bool pending = mpv.wantRender();
  if (!pending && width == displayWidth && height == displayHeight) return false;

  SavedTarget saved;
  // Image uploads by the UI can leave a pixel unpack buffer bound. Reset it
  // before allocating as well as before rendering into the shared context.
  prepareTarget(0, width, height);
  const bool resized = allocateDisplay(width, height);
  prepareTarget(displayFramebuffer, width, height);
  if (resized) {
    glClearColor(0, 0, 0, 1);
    glClear(GL_COLOR_BUFFER_BIT);
  }
  // The texture uses Slint's top-left origin, so it must not be flipped.
  if (const int result = mpv.render(width, height, static_cast<int>(displayFramebuffer), false, false); result < 0)
    throw std::runtime_error(Mpv::errorString(result));
  return true;
}

bool VideoRenderer::allocateDisplay(int width, int height) {
  if (displayTexture != 0 && width == displayWidth && height == displayHeight) return false;
  if (displayTexture == 0) glGenTextures(1, &displayTexture);
  if (displayFramebuffer == 0) glGenFramebuffers(1, &displayFramebuffer);
  glBindTexture(GL_TEXTURE_2D, displayTexture);
  glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
  glBindTexture(GL_TEXTURE_2D, 0);
  glBindFramebuffer(GL_FRAMEBUFFER, displayFramebuffer);
  glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, displayTexture, 0);
  if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE)
    throw std::runtime_error("Unable to create the video framebuffer");
  displayWidth = width;
  displayHeight = height;
  return true;
}

void VideoRenderer::release() {
  if (started) mpv.freeRender();
  started = false;
  frameReady = {};
  if (displayTexture != 0) glDeleteTextures(1, &displayTexture);
  if (displayFramebuffer != 0) glDeleteFramebuffers(1, &displayFramebuffer);
  displayTexture = displayFramebuffer = 0;
  displayWidth = displayHeight = 0;
}

}  // namespace ImPlay
