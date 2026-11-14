// ImPlay-Slint. Copyright (c) 2026 Skonester.
// SPDX-License-Identifier: GPL-2.0-only

#pragma once

#include <functional>

#include "mpv.h"

namespace ImPlay {

// mpv draws directly into the texture Slint samples, in BeforeRendering.
// All GL objects and render API calls belong to Slint's current GL context.
class VideoRenderer {
 public:
  using FrameReady = std::function<void()>;

  VideoRenderer(Mpv& mpv, GLAddrLoadFunc load);
  VideoRenderer(const VideoRenderer&) = delete;
  VideoRenderer& operator=(const VideoRenderer&) = delete;

  void start(FrameReady frameReady);
  // Called by mpv on another thread; only schedules a UI redraw.
  void notifyUpdate();
  // True when the texture contains a newly rendered picture or was resized.
  bool beforeRendering(int width, int height);
  // Called with Slint's GL context current, before the window is destroyed.
  void release();

  unsigned int texture() const { return displayTexture; }
  int width() const { return displayWidth; }
  int height() const { return displayHeight; }

 private:
  bool allocateDisplay(int width, int height);

  Mpv& mpv;
  GLAddrLoadFunc load;
  FrameReady frameReady;
  bool started = false;
  unsigned int displayTexture = 0;
  unsigned int displayFramebuffer = 0;
  int displayWidth = 0;
  int displayHeight = 0;
};

}  // namespace ImPlay
