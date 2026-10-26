// ImPlay-Slint. Copyright (c) 2026 Skonester.
// SPDX-License-Identifier: GPL-2.0-only

#pragma once

#include <array>
#include <atomic>
#include <condition_variable>
#include <functional>
#include <future>
#include <mutex>
#include <thread>

#ifdef _WIN32
#include <windows.h>
#endif

#include "mpv.h"

namespace ImPlay {

// Draws mpv's video into an OpenGL texture that Slint shows.
//
// When Slint renders through WGL, mpv gets its own render thread and a GL context shared
// with Slint's: it renders into a ring of textures there, and the UI thread only blits
// the newest finished one into the displayed texture. The UI thread then never waits
// for mpv, and mpv can keep its normal frame timing. Otherwise (e.g. EGL/ANGLE) mpv
// renders on the UI thread inside Slint's frame, without waiting for the frame's time.
//
// Construct, start() and release() with Slint's GL context current on the UI thread.
class VideoRenderer {
 public:
  using FrameReady = std::function<void()>;

  VideoRenderer(Mpv& mpv, GLAddrLoadFunc load);
  ~VideoRenderer();
  VideoRenderer(const VideoRenderer&) = delete;
  VideoRenderer& operator=(const VideoRenderer&) = delete;

  bool threaded() const { return context != nullptr; }
  // Creates mpv's render context (after mpv init, before loading files) and starts
  // rendering. frameReady runs on any thread when Slint should draw a new frame.
  void start(FrameReady frameReady);
  // mpv's render-update callback; runs on an mpv thread.
  void notifyUpdate();
  // Slint's BeforeRendering. Returns true when the displayed texture was (re)allocated,
  // so the UI must be handed a new image of texture() at width() x height().
  bool beforeRendering(int targetWidth, int targetHeight);
  // Slint's RenderingTeardown: stops rendering and frees mpv's and our GL objects.
  void release();

  unsigned int texture() const { return displayTexture; }
  int width() const { return displayWidth; }
  int height() const { return displayHeight; }

 private:
  struct Slot {
    unsigned int texture = 0;
    unsigned int framebuffer = 0;
    int width = 0;
    int height = 0;
    void* readyFence = nullptr;    // signalled when mpv finished drawing this frame
    void* releaseFence = nullptr;  // signalled when the UI finished copying it
  };

  void renderLoop(std::promise<void>* startup);
  void renderSlot(Slot& slot, int width, int height);
  void stop();
  bool allocateDisplay(int width, int height);
  void blit(Slot& slot);
#ifdef _WIN32
  bool createSharedContext();
  void destroySharedContext();
#endif

  Mpv& mpv;
  GLAddrLoadFunc load;
  FrameReady frameReady;
  bool started = false;

  // UI context objects.
  unsigned int displayTexture = 0;
  unsigned int displayFramebuffer = 0;
  unsigned int readFramebuffer = 0;
  int displayWidth = 0;
  int displayHeight = 0;

  // Render thread state; indices into slots are guarded by mutex.
  std::thread thread;
  std::mutex mutex;
  std::condition_variable wake;
  std::array<Slot, 3> slots{};
  int readySlot = -1;
  int copyingSlot = -1;
  int targetWidth = 0;
  int targetHeight = 0;
  bool sizeChanged = false;
  bool updatePending = false;
  bool stopping = false;

#ifdef _WIN32
  HWND contextWindow = nullptr;
  HDC contextDc = nullptr;
  HGLRC context = nullptr;
#else
  void* context = nullptr;
#endif
};

}  // namespace ImPlay
