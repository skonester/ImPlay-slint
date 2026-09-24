// ImPlay-Slint. Copyright (c) 2026 Skonester.
// Based on ImPlay, Copyright (c) 2022-2025 tsl0922 (https://github.com/tsl0922/ImPlay).
// SPDX-License-Identifier: GPL-2.0-only

#pragma once

#include <array>
#include <filesystem>
#include <map>
#include <memory>
#include <string>
#include <vector>

#include <slint.h>
#ifdef _WIN32
#include <windows.h>
#endif

#include "app-window.h"
#include "config.h"
#include "helpers/nfd.h"
#include "helpers/utils.h"
#include "mpv.h"

namespace ImPlay {

class Window {
 public:
  explicit Window(Config* config);
  ~Window();

  bool init(OptionParser& parser);
  void run();

 private:
  void configureMpv();
  void initMpv();
  void initObservers();
  void initCallbacks();
  void syncUi();
  void syncCollections();
  void renderFrame();
  void releaseRenderer();
  void writeMpvConf();
#ifdef _WIN32
  void installNativeWindowHooks();
  static LRESULT CALLBACK nativeWindowProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);
#endif

  void execute(const std::string& command);
  void openFiles(bool append = false);
  void openFolder(bool append = false);
  void openDisc();
  void openIso();
  void openClipboard();
  void pickFont();
  void updateSetting(const std::string& key, const std::string& value);
  void applyAudioEq(bool showMessage = false);
  void publishAudioEq();
  void openSubtitle();
  void load(const std::vector<std::filesystem::path>& files, bool append = false);
  bool isMediaFile(const std::string& file) const;
  bool isSubtitleFile(const std::string& file) const;
  void postToUi(std::function<void()> callback);
  void showError(const std::string& message);

  Config* config = nullptr;
  std::unique_ptr<Mpv> mpv;
  slint::ComponentHandle<AppWindow> app;
  std::map<std::string, std::string> options;
  std::vector<std::string> initialPaths;

  unsigned int texture = 0;
  unsigned int framebuffer = 0;
  int textureWidth = 0;
  int textureHeight = 0;
  bool mpvInitialized = false;
  bool shuttingDown = false;
  bool windowMaximized = false;
  bool windowFullscreen = false;
  float nativeScaleFactor = 1.0F;
  bool audioEqEnabled = false;
  std::array<int, 10> audioEqBands{};
#ifdef _WIN32
  HWND nativeWindow = nullptr;
  WNDPROC originalWindowProc = nullptr;
#endif

  const NFD::Filters mediaFilters = {
      {"Video files", "yuv,y4m,m2ts,m2t,mts,ts,mpeg,mpg,m4v,mp4,h264,hevc,h265,ogv,mkv,webm,avi,wmv,flv,mov"},
      {"Audio files", "ac3,dts,wav,aiff,ape,mp3,m4a,aac,flac,ogg,opus,mka,wma"},
      {"Image files", "jpg,jpeg,bmp,png,gif,webp"},
  };
  const NFD::Filters subtitleFilters = {
      {"Subtitle files", "srt,ass,idx,sub,sup,ttxt,txt,ssa,smi,mks"},
  };
  const NFD::Filters isoFilters = {
      {"Disc images", "iso,img,bin"},
  };
  const NFD::Filters fontFilters = {
      {"Font files", "ttf,otf,ttc"},
  };
};

}  // namespace ImPlay
