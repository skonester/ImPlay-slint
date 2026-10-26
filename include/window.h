// ImPlay-Slint. Copyright (c) 2026 Skonester.
// Based on ImPlay, Copyright (c) 2022-2025 tsl0922 (https://github.com/tsl0922/ImPlay).
// SPDX-License-Identifier: GPL-2.0-only

#pragma once

#include <array>
#include <atomic>
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
#include "video_renderer.h"

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
  void applyPendingTime();
  void recordRecentFile();
  void initCallbacks();
  void scheduleCollectionsSync();
  void syncCollections();
  void renderFrame();
  void releaseRenderer();
  void writeMpvConf();
#ifdef _WIN32
  void installNativeWindowHooks();
  static LRESULT CALLBACK nativeWindowProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);
#endif

  void execute(const std::string& command);
  void toggleOscControls();
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
  // Between mpv and app: destroying app runs Slint's RenderingTeardown, which still
  // needs the renderer, and the renderer must stop before mpv is destroyed.
  std::unique_ptr<VideoRenderer> renderer;
  slint::ComponentHandle<AppWindow> app;
  std::map<std::string, std::string> options;
  std::vector<std::string> initialPaths;
  std::string currentPath;
  std::string currentTitle;
  bool recentPending = false;
  bool collectionsSyncPending = false;
  // Latest time-pos and duration not yet shown, or -1.
  double pendingTime = -1;
  double pendingDuration = -1;

  // Bound to the UI once; syncCollections() patches them in place.
  std::shared_ptr<slint::VectorModel<PlaylistRow>> playlistModel = std::make_shared<slint::VectorModel<PlaylistRow>>();
  std::shared_ptr<slint::VectorModel<TrackRow>> audioTrackModel = std::make_shared<slint::VectorModel<TrackRow>>();
  std::shared_ptr<slint::VectorModel<TrackRow>> subTrackModel = std::make_shared<slint::VectorModel<TrackRow>>();
  std::shared_ptr<slint::VectorModel<TrackRow>> videoTrackModel = std::make_shared<slint::VectorModel<TrackRow>>();
  std::shared_ptr<slint::VectorModel<ChapterRow>> chapterModel = std::make_shared<slint::VectorModel<ChapterRow>>();
  std::shared_ptr<slint::VectorModel<ChoiceRow>> audioDeviceModel = std::make_shared<slint::VectorModel<ChoiceRow>>();
  std::shared_ptr<slint::VectorModel<ChoiceRow>> profileModel = std::make_shared<slint::VectorModel<ChoiceRow>>();
  std::shared_ptr<slint::VectorModel<ChoiceRow>> recentModel = std::make_shared<slint::VectorModel<ChoiceRow>>();

  bool mpvInitialized = false;
  std::atomic_bool shuttingDown = false;
  std::atomic_bool eventWakePending = false;
  std::atomic_bool renderWakePending = false;
  bool windowMaximized = false;
  bool windowFullscreen = false;
  bool idleActive = true;
  bool paused = false;
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
