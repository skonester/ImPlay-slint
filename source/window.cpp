// ImPlay-Slint. Copyright (c) 2026 Skonester.
// Based on ImPlay, Copyright (c) 2022-2025 tsl0922 (https://github.com/tsl0922/ImPlay).
// SPDX-License-Identifier: GPL-2.0-only

#include "window.h"

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <stdexcept>
#include <string_view>
#include <utility>

#include <fmt/format.h>
#include <romfs/romfs.hpp>
#include <strnatcmp.h>

#include <GLES3/gl3.h>

#ifdef _WIN32
#include <shellapi.h>
#include <windows.h>
#include <windowsx.h>
#else
#include <dlfcn.h>
#endif

#include "helpers/utils.h"

namespace {

void* loadGlSymbol(const char* name) {
#ifdef _WIN32
  static HMODULE gles = LoadLibraryW(L"libGLESv2.dll");
  if (gles != nullptr) {
    if (auto symbol = GetProcAddress(gles, name)) return reinterpret_cast<void*>(symbol);
  }

  static HMODULE opengl = LoadLibraryW(L"opengl32.dll");
  if (auto symbol = wglGetProcAddress(name)) return reinterpret_cast<void*>(symbol);
  return opengl != nullptr ? reinterpret_cast<void*>(GetProcAddress(opengl, name)) : nullptr;
#else
  static void* gles = dlopen("libGLESv2.so.2", RTLD_LAZY | RTLD_LOCAL);
  if (gles != nullptr) {
    if (auto symbol = dlsym(gles, name)) return symbol;
  }
  return dlsym(RTLD_DEFAULT, name);
#endif
}

std::string displayName(const ImPlay::Mpv::PlayItem& item) {
  if (!item.title.empty()) return item.title;
  auto filename = item.filename();
  return filename.empty() ? item.path.string() : filename;
}

slint::ComponentHandle<AppWindow> createSlintApp() {
  if (std::getenv("SLINT_BACKEND") == nullptr) {
#ifdef _WIN32
    _putenv_s("SLINT_BACKEND", "winit-femtovg");
#else
    setenv("SLINT_BACKEND", "winit-femtovg", 0);
#endif
  }
  return AppWindow::create();
}

}  // namespace

namespace ImPlay {

Window::Window(Config* config) : config(config), mpv(std::make_unique<Mpv>()), app(createSlintApp()) {
  app->set_volume(static_cast<float>(config->Data.Mpv.Volume));
  app->set_def_volume(static_cast<float>(config->Data.Mpv.Volume));
  app->set_app_version(APP_VERSION);
  app->set_cfg_window_save(config->Data.Window.Save);
  app->set_cfg_window_single(config->Data.Window.Single);
  app->set_cfg_use_config(config->Data.Mpv.UseConfig);
  app->set_cfg_watch_later(config->Data.Mpv.WatchLater);
  app->set_cfg_space_play_last(config->Data.Recent.SpaceToPlayLast);
  app->set_cfg_recent_limit(config->Data.Recent.Limit);
  app->set_cfg_language(config->Data.Interface.Lang.c_str());
  app->set_cfg_theme(config->Data.Interface.Theme.c_str());
  app->set_theme_name(config->Data.Interface.Theme.c_str());
  app->set_theme_rounding(config->Data.Interface.Rounding);
  app->set_theme_shadows(config->Data.Interface.Shadow);
  app->set_cfg_scale(config->Data.Interface.Scale > 0 ? config->Data.Interface.Scale : 1.0F);
  app->set_cfg_fps(config->Data.Interface.Fps);
  app->set_cfg_rounding(config->Data.Interface.Rounding);
  app->set_cfg_shadow(config->Data.Interface.Shadow);
  app->set_cfg_font_path(config->Data.Font.Path.c_str());
  app->set_cfg_font_size(config->Data.Font.Size);
  app->set_cfg_glyph_range(config->Data.Font.GlyphRange);
  app->set_cfg_log_level(config->Data.Debug.LogLevel.c_str());
  app->set_cfg_log_limit(config->Data.Debug.LogLimit);
  nativeScaleFactor = app->window().scale_factor();
  if (config->Data.Interface.Scale > 0)
    app->window().window_handle().set_scale_factor(nativeScaleFactor * config->Data.Interface.Scale);
  if (!config->Data.Font.Path.empty()) {
    if (auto error = app->window().window_handle().register_font_from_path(config->Data.Font.Path.c_str()); error)
      showError(error->data());
  }
  initCallbacks();
}

Window::~Window() {
  shuttingDown = true;
#ifdef _WIN32
  if (nativeWindow != nullptr && originalWindowProc != nullptr && IsWindow(nativeWindow)) {
    SetWindowLongPtrW(nativeWindow, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(originalWindowProc));
    RemovePropW(nativeWindow, L"ImPlay.Window");
    DragAcceptFiles(nativeWindow, FALSE);
    nativeWindow = nullptr;
    originalWindowProc = nullptr;
  }
#endif
  if (mpvInitialized) mpv->command(config->Data.Mpv.WatchLater ? "quit-watch-later" : "quit");
}

bool Window::init(OptionParser& parser) {
  options = parser.options;
  initialPaths = parser.paths;
  configureMpv();

  mpv->wakeupCb() = [this](Mpv*) {
    postToUi([this] {
      if (!shuttingDown && mpvInitialized) mpv->waitEvent();
    });
  };
  mpv->updateCb() = [this](Mpv*) {
    postToUi([this] {
      if (!shuttingDown) app->window().request_redraw();
    });
  };

  auto error = app->window().set_rendering_notifier(
      [this](slint::RenderingState state, slint::GraphicsAPI) {
        try {
          switch (state) {
            case slint::RenderingState::RenderingSetup:
              initMpv();
              break;
            case slint::RenderingState::BeforeRendering:
              renderFrame();
              break;
            case slint::RenderingState::RenderingTeardown:
              releaseRenderer();
              break;
            case slint::RenderingState::AfterRendering:
              break;
          }
        } catch (const std::exception& e) {
          showError(e.what());
        }
      });

  if (error.has_value()) {
    fmt::print(stderr, "Slint's OpenGL renderer is required (set SLINT_BACKEND=winit-femtovg).\n");
    return false;
  }
  return true;
}

void Window::run() {
  app->run();
  shuttingDown = true;

  if (config->Data.Window.Save) {
    const auto size = app->window().size();
    config->Data.Window.W = static_cast<int>(size.width);
    config->Data.Window.H = static_cast<int>(size.height);
  }
  config->Data.Mpv.Volume = mpv->volume;
  config->save();
}

void Window::configureMpv() {
  mpv->option("config", "yes");
  // Keep the application alive after the last playlist item reaches EOF.
  // This matches the C# PlaybackService and is required for a media player
  // window to accept another open/drop after playback finishes.
  mpv->option("idle", "yes");
  mpv->option("terminal", "no");
  mpv->option("input-default-bindings", "yes");
  mpv->option("input-vo-keyboard", "yes");
  mpv->option("load-osd-console", "no");
  mpv->option("osd-playing-msg", "${media-title}");
  mpv->option("screenshot-directory", "~~desktop/");
  mpv->option("vo", "libmpv");

  int64_t refreshRate = 60;
  mpv->option<int64_t, MPV_FORMAT_INT64>("override-display-fps", refreshRate);
  mpv->option<int64_t, MPV_FORMAT_INT64>("display-fps-override", refreshRate);

  if (!config->Data.Mpv.UseConfig) {
    writeMpvConf();
    mpv->option("osc", "no");
    mpv->option("config-dir", config->dir().c_str());
  }
  if (config->Data.Window.Single) mpv->option("input-ipc-server", config->ipcSocket().c_str());

  for (const auto& [key, value] : options) {
    if (int result = mpv->option(key.c_str(), value.c_str()); result < 0) {
      throw std::runtime_error(fmt::format("mpv: {} [{}={}]", mpv_error_string(result), key, value));
    }
  }
}

void Window::initMpv() {
  if (mpvInitialized) return;
  if (!gladLoadGLES2(reinterpret_cast<GLADloadfunc>(loadGlSymbol)))
    throw std::runtime_error("Unable to load the OpenGL ES functions used by Slint");

  glGenFramebuffers(1, &framebuffer);
  glGenTextures(1, &texture);
  glBindTexture(GL_TEXTURE_2D, texture);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
  glBindFramebuffer(GL_FRAMEBUFFER, framebuffer);
  glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, texture, 0);
  glBindFramebuffer(GL_FRAMEBUFFER, 0);
  glBindTexture(GL_TEXTURE_2D, 0);

  mpv->init(reinterpret_cast<GLAddrLoadFunc>(loadGlSymbol));
  mpvInitialized = true;
#ifdef _WIN32
  installNativeWindowHooks();
#endif
  mpv->property<int64_t, MPV_FORMAT_INT64>("volume", config->Data.Mpv.Volume);
  initObservers();

  for (const auto& path : initialPaths) {
    if (path == "-") mpv->property("input-terminal", "yes");
    mpv->commandv("loadfile", path.c_str(), "append-play", nullptr);
  }
}

void Window::initObservers() {
  // A synchronous mpv property read here can deadlock when the core waits for
  // this UI thread to render a frame. Use property-change payloads instead.
  mpv->observeEvent(MPV_EVENT_SHUTDOWN, [this](void*) {
    postToUi([this] {
      if (!shuttingDown) app->hide();
    });
  });
  mpv->observeEvent(MPV_EVENT_START_FILE, [this](void*) {
    currentPath.clear();
    currentTitle.clear();
    recentPending = false;
  });
  mpv->observeEvent(MPV_EVENT_FILE_LOADED, [this](void*) {
    recentPending = true;
    recordRecentFile();
    syncCollections();
  });
  mpv->observeProperty<char*, MPV_FORMAT_STRING>("path", [this](char* path) {
    currentPath = path != nullptr ? path : "";
    recordRecentFile();
  });
  mpv->observeProperty<int, MPV_FORMAT_FLAG>("idle-active", [this](int flag) {
    idleActive = flag != 0;
    app->set_has_file(!idleActive);
    app->set_playing(!idleActive && !paused);
  });
  mpv->observeProperty<int, MPV_FORMAT_FLAG>("pause", [this](int flag) {
    paused = flag != 0;
    app->set_playing(!idleActive && !paused);
  });
  mpv->observeProperty<int, MPV_FORMAT_FLAG>("mute", [this](int flag) {
    app->set_muted(flag != 0);
  });
  mpv->observeProperty<int, MPV_FORMAT_FLAG>("fullscreen", [this](int flag) {
    const bool fullscreen = flag != 0;
    windowFullscreen = fullscreen;
    app->set_fullscreen(fullscreen);
    if (fullscreen) {
      windowMaximized = app->window().is_maximized();
      if (windowMaximized) app->window().set_maximized(false);
      app->window().set_fullscreen(true);
    } else {
      app->window().set_fullscreen(false);
      if (windowMaximized) app->window().set_maximized(true);
    }
  });
  mpv->observeProperty<int64_t, MPV_FORMAT_INT64>("volume", [this](int64_t value) {
    app->set_volume(static_cast<float>(value));
  });
  mpv->observeProperty<double, MPV_FORMAT_DOUBLE>("speed", [this](double value) {
    app->set_speed(static_cast<float>(value));
  });
  mpv->observeProperty<int, MPV_FORMAT_FLAG>("ontop", [this](int flag) {
    app->set_pinned(flag != 0);
  });
  mpv->observeProperty<char*, MPV_FORMAT_STRING>("video-aspect-override", [this](char* value) {
    app->set_current_aspect(value != nullptr && *value != '\0' ? value : "-1");
  });
  mpv->observeProperty<double, MPV_FORMAT_DOUBLE>("time-pos", [this](double value) {
    app->set_current_time(static_cast<float>(std::max(0.0, value)));
  });
  mpv->observeProperty<double, MPV_FORMAT_DOUBLE>("duration", [this](double value) {
    app->set_duration(static_cast<float>(std::max(0.0, value)));
  });
  mpv->observeProperty<char*, MPV_FORMAT_STRING>("media-title", [this](char* title) {
    currentTitle = title != nullptr ? title : "";
    app->set_media_title(currentTitle.empty() ? "ImPlay" : currentTitle.c_str());
    recordRecentFile();
  });
  mpv->observeProperty<mpv_node, MPV_FORMAT_NODE>("playlist", [this](mpv_node) { syncCollections(); });
  mpv->observeProperty<mpv_node, MPV_FORMAT_NODE>("track-list", [this](mpv_node) { syncCollections(); });
  mpv->observeProperty<mpv_node, MPV_FORMAT_NODE>("chapter-list", [this](mpv_node) { syncCollections(); });
  mpv->observeProperty<mpv_node, MPV_FORMAT_NODE>("audio-device-list", [this](mpv_node) { syncCollections(); });
  mpv->observeProperty<char*, MPV_FORMAT_STRING>("profile-list", [this](char*) { syncCollections(); });
  mpv->observeProperty<char*, MPV_FORMAT_STRING>("audio-device", [this](char*) { syncCollections(); });
  mpv->observeProperty<int64_t, MPV_FORMAT_INT64>("chapter", [this](int64_t) { syncCollections(); });
  mpv->observeProperty<int, MPV_FORMAT_FLAG>("sub-visibility", [this](int value) {
    app->set_sub_visible(value != 0);
  });
  mpv->observeProperty<double, MPV_FORMAT_DOUBLE>("audio-delay", [this](double value) {
    app->set_audio_delay(static_cast<float>(value));
  });
  mpv->observeProperty<double, MPV_FORMAT_DOUBLE>("sub-delay", [this](double value) {
    app->set_sub_delay(static_cast<float>(value));
  });
  mpv->observeProperty<double, MPV_FORMAT_DOUBLE>("sub-scale", [this](double value) {
    app->set_sub_scale(static_cast<float>(value));
  });
  mpv->observeProperty<int64_t, MPV_FORMAT_INT64>("sub-pos", [this](int64_t value) {
    app->set_sub_position(static_cast<int>(value));
  });
  mpv->observeProperty<int64_t, MPV_FORMAT_INT64>("brightness", [this](int64_t value) {
    app->set_brightness(static_cast<int>(value));
  });
  mpv->observeProperty<int64_t, MPV_FORMAT_INT64>("contrast", [this](int64_t value) {
    app->set_contrast(static_cast<int>(value));
  });
  mpv->observeProperty<int64_t, MPV_FORMAT_INT64>("saturation", [this](int64_t value) {
    app->set_saturation(static_cast<int>(value));
  });
  mpv->observeProperty<double, MPV_FORMAT_DOUBLE>("video-zoom", [this](double value) {
    app->set_vid_zoom(static_cast<float>(value));
  });
  mpv->observeProperty<int, MPV_FORMAT_FLAG>("deinterlace", [this](int value) {
    app->set_deinterlace(value != 0);
  });
}

void Window::recordRecentFile() {
  if (!recentPending || currentPath.empty()) return;
  recentPending = false;
  if (currentPath == "bd://" || currentPath == "dvd://") return;
  config->addRecentFile(currentPath, currentTitle);
  syncCollections();
}

void Window::initCallbacks() {
  app->on_open_file([this] { openFiles(); });
  app->on_open_folder([this] { openFolder(); });
  app->on_open_url([this] { app->set_url_show(true); });
  app->on_open_clipboard([this] { openClipboard(); });
  app->on_open_disc([this] { openDisc(); });
  app->on_open_iso([this] { openIso(); });
  app->on_open_recent([this](slint::SharedString path) {
    if (!mpvInitialized || path.empty()) return;
    mpv->commandv("loadfile", path.data(), nullptr);
  });
  app->on_clear_recent([this] {
    config->clearRecentFiles();
    config->save();
    syncCollections();
  });
  app->on_command([this](slint::SharedString command) {
    if (command == "implay-open-config") {
      ::ImPlay::openUrl(config->dir());
      return;
    }
    if (!mpvInitialized || command.empty()) return;
    if (command == "script-binding osc/visibility")
      toggleOscControls();
    else if (command == "quit")
      mpv->command(config->Data.Mpv.WatchLater ? "quit-watch-later" : "quit");
    else if (std::string_view(command.data()).starts_with("seek "))
      mpv->command(fmt::format("osd-auto {}", command.data()));
    else
      mpv->command(command.data());
  });
  app->on_submit_url([this](slint::SharedString url) {
    if (mpvInitialized && !url.empty()) mpv->commandv("loadfile", url.data(), nullptr);
    app->set_url_show(false);
  });

  app->on_toggle_pause([this] { execute("play-pause"); });
  app->on_toggle_fullscreen([this] { execute("fullscreen"); });
  app->on_toggle_mute([this] { execute("mute"); });
  app->on_seek_fraction([this](float fraction, bool exact) {
    if (!mpvInitialized) return;
    const auto percent = fmt::format("{}", std::clamp<double>(fraction, 0.0, 1.0) * 100.0);
    mpv->commandv("osd-auto", "seek", percent.c_str(),
                  exact ? "absolute-percent+exact" : "absolute-percent", nullptr);
  });
  app->on_osc_pointer([this](float x, float y, slint::SharedString action) {
    if (!mpvInitialized || !app->get_osc_controls_active()) return;
    const auto mouseX = fmt::format("{}", std::lround(x));
    const auto mouseY = fmt::format("{}", std::lround(y));
    mpv->commandv("mouse", mouseX.c_str(), mouseY.c_str(), nullptr);
    if (action == "down") mpv->commandv("keydown", "MBTN_LEFT", nullptr);
    if (action == "up") mpv->commandv("keyup", "MBTN_LEFT", nullptr);
  });
  app->on_adjust_volume([this](float delta) {
    if (!mpvInitialized) return;
    const auto volume = mpv->property<int64_t, MPV_FORMAT_INT64>("volume");
    mpv->property<int64_t, MPV_FORMAT_INT64>("volume", std::clamp<int64_t>(volume + std::lround(delta), 0, 200));
  });
  app->on_set_volume([this](float value) {
    if (mpvInitialized)
      mpv->property<int64_t, MPV_FORMAT_INT64>("volume", std::clamp<int64_t>(std::lround(value), 0, 200));
  });
  app->on_prev_file([this] {
    if (mpvInitialized) mpv->command("playlist-prev");
  });
  app->on_next_file([this] {
    if (mpvInitialized) mpv->command("playlist-next");
  });
  app->on_pick_speed([this](float speed) {
    if (mpvInitialized) mpv->property<double, MPV_FORMAT_DOUBLE>("speed", std::clamp<double>(speed, 0.25, 4.0));
  });

  app->on_playlist_play([this](int index) {
    if (mpvInitialized && index >= 0)
      mpv->commandv("playlist-play-index", std::to_string(index).c_str(), nullptr);
  });
  app->on_playlist_remove([this](int index) {
    if (!mpvInitialized) return;
    const auto value = std::to_string(index);
    mpv->commandv("playlist-remove", value.c_str(), nullptr);
  });
  app->on_playlist_add_files([this] { openFiles(true); });
  app->on_playlist_add_folder([this] { openFolder(true); });
  app->on_playlist_clear([this] {
    if (mpvInitialized) mpv->command("playlist-clear");
  });
  app->on_toggle_shuffle([this] {
    if (!mpvInitialized) return;
    const bool enabled = !app->get_shuffle();
    app->set_shuffle(enabled);
    mpv->command(enabled ? "playlist-shuffle" : "playlist-unshuffle");
  });
  app->on_cycle_repeat([this] {
    if (!mpvInitialized) return;
    const std::string current = app->get_repeat_mode().data();
    const std::string next = current == "off" ? "all" : current == "all" ? "one" : "off";
    app->set_repeat_mode(next.c_str());
    mpv->property("loop-playlist", next == "all" ? "inf" : "no");
    mpv->property("loop-file", next == "one" ? "inf" : "no");
  });

  app->on_select_audio([this](int id) {
    if (mpvInitialized) mpv->property("aid", id < 0 ? "no" : std::to_string(id).c_str());
  });
  app->on_select_video([this](int id) {
    if (mpvInitialized) mpv->property("vid", id < 0 ? "no" : std::to_string(id).c_str());
  });
  app->on_select_sub([this](int id) {
    if (mpvInitialized) mpv->property("sid", id < 0 ? "no" : std::to_string(id).c_str());
  });
  app->on_select_audio_device([this](slint::SharedString device) {
    if (mpvInitialized) mpv->property("audio-device", device.data());
  });
  app->on_apply_profile([this](slint::SharedString profile) {
    if (!mpvInitialized || profile.empty()) return;
    mpv->command(fmt::format("show-text {}; apply-profile {}", profile.data(), profile.data()));
  });
  app->on_seek_chapter([this](int index) {
    if (!mpvInitialized || index < 0 || static_cast<size_t>(index) >= mpv->chapters.size()) return;
    const auto position = fmt::format("{}", mpv->chapters[index].time);
    mpv->commandv("osd-auto", "seek", position.c_str(), "absolute+exact", nullptr);
  });
  app->on_load_external_sub([this] { openSubtitle(); });
  app->on_set_sub_delay([this](float delay) {
    if (mpvInitialized) mpv->property<double, MPV_FORMAT_DOUBLE>("sub-delay", delay);
  });
  app->on_set_audio_delay([this](float delay) {
    if (mpvInitialized) mpv->property<double, MPV_FORMAT_DOUBLE>("audio-delay", delay);
  });
  app->on_toggle_audio_eq([this] {
    audioEqEnabled = !audioEqEnabled;
    app->set_audio_eq_enabled(audioEqEnabled);
    applyAudioEq(true);
  });
  app->on_set_audio_eq([this](int index, int gain) {
    if (index < 0 || index >= static_cast<int>(audioEqBands.size())) return;
    audioEqBands[index] = std::clamp(gain, -12, 12);
    publishAudioEq();
    applyAudioEq();
  });
  app->on_audio_eq_preset([this](slint::SharedString preset) {
    if (preset == "bass")
      audioEqBands = {4, 4, 4, 2, 0, -2, -4, -5, -5, -5};
    else if (preset == "rock")
      audioEqBands = {4, 2, 2, -4, -1, 2, 4, 5, 5, 5};
    else
      audioEqBands.fill(0);
    audioEqEnabled = true;
    app->set_audio_eq_enabled(true);
    publishAudioEq();
    applyAudioEq(true);
  });
  app->on_set_aspect([this](slint::SharedString aspect) {
    if (mpvInitialized) mpv->property("video-aspect-override", aspect.data());
    app->set_current_aspect(aspect);
  });
  app->on_request_context_menu([this](float x, float y) {
    app->set_ctx_x(x);
    app->set_ctx_y(y);
    app->set_ctx_page("main");
    app->set_ctx_show(true);
  });
  app->on_panel_opened([this](slint::SharedString) {
    if (mpvInitialized) syncCollections();
  });
  app->on_win_minimize([this] { app->window().set_minimized(true); });
  app->on_win_maximize([this] {
    windowMaximized = !app->window().is_maximized();
    app->window().set_maximized(windowMaximized);
  });
  app->on_win_close([this] { app->hide(); });
#ifdef _WIN32
  app->on_start_window_drag([this] {
    if (HWND window = nativeWindow != nullptr ? nativeWindow : GetActiveWindow(); window != nullptr) {
      ReleaseCapture();
      SendMessageW(window, WM_NCLBUTTONDOWN, HTCAPTION, 0);
    }
  });
  app->on_set_always_on_top([this](bool enabled) {
    if (HWND window = nativeWindow != nullptr ? nativeWindow : GetActiveWindow(); window != nullptr)
      SetWindowPos(window, enabled ? HWND_TOPMOST : HWND_NOTOPMOST, 0, 0, 0, 0,
                   SWP_NOMOVE | SWP_NOSIZE | SWP_NOACTIVATE);
    app->set_pinned(enabled);
  });
#endif

  app->on_key([this](slint::SharedString key, bool control, bool shift, bool alt) {
    const std::string value = key.data();
    if (value == "o" || value == "O") {
      openFiles();
    } else if (value == "Space") {
      execute("play-pause");
    } else if (value == "Delete" || value == "Del") {
      toggleOscControls();
    } else if (value == "ArrowLeft") {
      mpv->command(control ? "osd-auto seek -30 relative exact" : "osd-auto seek -10 relative exact");
    } else if (value == "ArrowRight") {
      mpv->command(control ? "osd-auto seek 30 relative exact" : "osd-auto seek 10 relative exact");
    } else if (value == "ArrowUp") {
      const auto volume = mpv->property<int64_t, MPV_FORMAT_INT64>("volume");
      mpv->property<int64_t, MPV_FORMAT_INT64>("volume", std::clamp<int64_t>(volume + 5, 0, 150));
    } else if (value == "ArrowDown") {
      const auto volume = mpv->property<int64_t, MPV_FORMAT_INT64>("volume");
      mpv->property<int64_t, MPV_FORMAT_INT64>("volume", std::clamp<int64_t>(volume - 5, 0, 150));
    } else if (value == "." || value == ">") {
      mpv->command("frame-step");
    } else if (value == "," || value == "<") {
      mpv->command("frame-back-step");
    } else if (value == "PageUp") {
      mpv->command("add chapter -1");
    } else if (value == "PageDown") {
      mpv->command("add chapter 1");
    } else if (value == "f" || value == "F" || value == "F11") {
      execute("fullscreen");
    } else if (value == "Escape" && app->get_fullscreen()) {
      execute("fullscreen");
    } else if (value == "m" || value == "M") {
      execute("mute");
    } else if (value == "[" || value == "]" ||
               (value.size() == 1 && value[0] == static_cast<char>(92))) {
      static constexpr std::array<double, 11> speeds = {
          0.25, 0.50, 0.75, 0.90, 1.00, 1.10, 1.25, 1.50, 2.00, 3.00, 4.00};
      if (value.size() == 1 && value[0] == static_cast<char>(92)) {
        mpv->property<double, MPV_FORMAT_DOUBLE>("speed", 1.0);
      } else {
        const double current = mpv->property<double, MPV_FORMAT_DOUBLE>("speed");
        const auto nearest = std::min_element(speeds.begin(), speeds.end(), [current](double left, double right) {
          return std::abs(left - current) < std::abs(right - current);
        });
        auto index = static_cast<int>(std::distance(speeds.begin(), nearest));
        index = std::clamp(index + (value == "]" ? 1 : -1), 0, static_cast<int>(speeds.size()) - 1);
        mpv->property<double, MPV_FORMAT_DOUBLE>("speed", speeds[index]);
      }
    } else if (value == "l" || value == "L") {
      mpv->command("cycle-values loop-file inf no");
    } else if (value == "a" || value == "A") {
      mpv->command("cycle aid");
    } else if (value == "v" || value == "V") {
      mpv->command("cycle sid");
    } else if (value == "s" || value == "S") {
      openSubtitle();
    } else if (alt && (value == "i" || value == "I")) {
      mpv->command("async screenshot");
    } else if (value == "n" || value == "N") {
      mpv->command("playlist-next");
    } else if (value == "p" || value == "P") {
      mpv->command("playlist-prev");
    } else if (value == "q" || value == "Q") {
      app->set_active_panel(app->get_active_panel() == "playlist" ? "" : "playlist");
    } else if (value == "t" || value == "T") {
      const bool enabled = !app->get_pinned();
#ifdef _WIN32
      if (HWND window = nativeWindow != nullptr ? nativeWindow : GetActiveWindow(); window != nullptr)
        SetWindowPos(window, enabled ? HWND_TOPMOST : HWND_NOTOPMOST, 0, 0, 0, 0,
                     SWP_NOMOVE | SWP_NOSIZE | SWP_NOACTIVATE);
#endif
      app->set_pinned(enabled);
    }
  });

  app->on_set_brightness([this](int value) {
    if (mpvInitialized) mpv->property<int64_t, MPV_FORMAT_INT64>("brightness", value);
  });
  app->on_set_contrast([this](int value) {
    if (mpvInitialized) mpv->property<int64_t, MPV_FORMAT_INT64>("contrast", value);
  });
  app->on_set_saturation([this](int value) {
    if (mpvInitialized) mpv->property<int64_t, MPV_FORMAT_INT64>("saturation", value);
  });
  app->on_set_vid_zoom([this](float value) {
    if (mpvInitialized) mpv->property<double, MPV_FORMAT_DOUBLE>("video-zoom", value);
  });
  app->on_toggle_deinterlace([this] {
    if (mpvInitialized) mpv->command("cycle deinterlace");
  });
  app->on_update_setting([this](slint::SharedString key, slint::SharedString value) {
    updateSetting(key.data(), value.data());
  });
  app->on_pick_font([this] { pickFont(); });
  app->on_open_config([this] { ::ImPlay::openUrl(config->dir()); });
  app->on_open_project([] { ::ImPlay::openUrl("https://github.com/skonester/implay-clang"); });
  app->on_reset_video([this] {
    if (!mpvInitialized) return;
    mpv->property<int64_t, MPV_FORMAT_INT64>("brightness", 0);
    mpv->property<int64_t, MPV_FORMAT_INT64>("contrast", 0);
    mpv->property<int64_t, MPV_FORMAT_INT64>("saturation", 0);
    mpv->property<double, MPV_FORMAT_DOUBLE>("video-zoom", 0.0);
    app->set_brightness(0);
    app->set_contrast(0);
    app->set_saturation(0);
    app->set_vid_zoom(0.0F);
  });
}

void Window::syncCollections() {
  std::vector<PlaylistRow> playlist;
  playlist.reserve(mpv->playlist.size());
  for (size_t index = 0; index < mpv->playlist.size(); ++index) {
    const auto& item = mpv->playlist[index];
    PlaylistRow entry;
    entry.index = static_cast<int>(index);
    entry.title = displayName(item);
    entry.current = item.id == mpv->playlistPlayingPos;
    playlist.emplace_back(std::move(entry));
  }
  app->set_playlist_items(std::make_shared<slint::VectorModel<PlaylistRow>>(std::move(playlist)));

  std::vector<TrackRow> audioTracks;
  std::vector<TrackRow> subtitleTracks;
  std::vector<TrackRow> videoTracks;
  for (const auto& item : mpv->tracks) {
    if (item.type != "audio" && item.type != "sub" && item.type != "video") continue;
    TrackRow entry;
    entry.id = static_cast<int>(item.id);
    entry.selected = item.selected;
    entry.label = item.title.empty()
                      ? fmt::format("{} {}{}", item.type, item.id, item.lang.empty() ? "" : fmt::format(" · {}", item.lang))
                      : item.title;
    if (item.type == "audio")
      audioTracks.emplace_back(std::move(entry));
    else if (item.type == "sub")
      subtitleTracks.emplace_back(std::move(entry));
    else
      videoTracks.emplace_back(std::move(entry));
  }
  auto audioModel = std::make_shared<slint::VectorModel<TrackRow>>(std::move(audioTracks));
  auto subtitleModel = std::make_shared<slint::VectorModel<TrackRow>>(std::move(subtitleTracks));
  auto videoModel = std::make_shared<slint::VectorModel<TrackRow>>(std::move(videoTracks));
  app->set_panel_audio_tracks(audioModel);
  app->set_ctx_audio_tracks(audioModel);
  app->set_panel_sub_tracks(subtitleModel);
  app->set_ctx_sub_tracks(subtitleModel);
  app->set_ctx_video_tracks(videoModel);
  app->set_sub_active(mpv->sid != "no" && !mpv->sid.empty());

  std::vector<ChapterRow> chapters;
  chapters.reserve(mpv->chapters.size());
  for (const auto& item : mpv->chapters) {
    ChapterRow entry;
    entry.time = static_cast<float>(item.time);
    entry.title = item.title.empty() ? fmt::format("Chapter {}", item.id + 1) : item.title;
    entry.current = item.id == mpv->chapter;
    chapters.emplace_back(std::move(entry));
  }
  app->set_chapters(std::make_shared<slint::VectorModel<ChapterRow>>(std::move(chapters)));

  std::vector<ChoiceRow> devices;
  devices.reserve(mpv->audioDevices.size());
  for (const auto& item : mpv->audioDevices) {
    ChoiceRow entry;
    entry.value = item.name;
    entry.label = item.description.empty() ? item.name : fmt::format("{} [{}]", item.description, item.name);
    entry.selected = item.name == mpv->audioDevice;
    devices.emplace_back(std::move(entry));
  }
  app->set_audio_devices(std::make_shared<slint::VectorModel<ChoiceRow>>(std::move(devices)));

  std::vector<ChoiceRow> profiles;
  profiles.reserve(mpv->profiles.size());
  for (const auto& name : mpv->profiles) {
    ChoiceRow entry;
    entry.value = name;
    entry.label = name;
    entry.selected = false;
    profiles.emplace_back(std::move(entry));
  }
  app->set_profiles(std::make_shared<slint::VectorModel<ChoiceRow>>(std::move(profiles)));

  std::vector<ChoiceRow> recent;
  recent.reserve(config->getRecentFiles().size());
  for (const auto& item : config->getRecentFiles()) {
    ChoiceRow entry;
    entry.value = item.path;
    entry.label = item.title.empty() ? item.path : item.title;
    entry.selected = false;
    recent.emplace_back(std::move(entry));
  }
  app->set_recent_items(std::make_shared<slint::VectorModel<ChoiceRow>>(std::move(recent)));
}

void Window::renderFrame() {
  if (!mpvInitialized || texture == 0) return;

  const int width = std::max(1, app->get_video_width());
  const int height = std::max(1, app->get_video_height());
  const bool resized = width != textureWidth || height != textureHeight;
  if (resized) {
    textureWidth = width;
    textureHeight = height;
    glBindTexture(GL_TEXTURE_2D, texture);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);
    glBindTexture(GL_TEXTURE_2D, 0);
  }

  // Reallocating the texture discards the last picture. mpv can redraw its
  // previous frame even when paused and no new-frame update is pending.
  if (mpv->wantRender() || resized) {
    glBindFramebuffer(GL_FRAMEBUFFER, framebuffer);
    // The borrowed GL texture is sampled with GL texture coordinates, unlike a
    // window backbuffer. Flipping here inverted the frame a second time.
    mpv->render(width, height, framebuffer, false);
    glBindFramebuffer(GL_FRAMEBUFFER, 0);
    mpv->reportSwap();
  }

  app->set_video_frame(slint::Image::create_from_borrowed_gl_2d_rgba_texture(
      texture, {static_cast<uint32_t>(width), static_cast<uint32_t>(height)}));
}

void Window::releaseRenderer() {
  if (texture != 0) glDeleteTextures(1, &texture);
  if (framebuffer != 0) glDeleteFramebuffers(1, &framebuffer);
  texture = 0;
  framebuffer = 0;
}

#ifdef _WIN32
void Window::installNativeWindowHooks() {
  if (nativeWindow != nullptr) return;
  const DWORD processId = GetCurrentProcessId();
  auto belongsToThisProcess = [processId](HWND window) {
    DWORD windowProcessId = 0;
    GetWindowThreadProcessId(window, &windowProcessId);
    return windowProcessId == processId;
  };

  nativeWindow = GetActiveWindow();
  if (nativeWindow != nullptr && !belongsToThisProcess(nativeWindow)) nativeWindow = nullptr;
  if (nativeWindow == nullptr) {
    auto foreground = GetForegroundWindow();
    if (foreground != nullptr && belongsToThisProcess(foreground)) nativeWindow = foreground;
  }
  if (nativeWindow == nullptr) {
    EnumWindows(
        [](HWND window, LPARAM output) {
          DWORD windowProcessId = 0;
          GetWindowThreadProcessId(window, &windowProcessId);
          if (windowProcessId == GetCurrentProcessId() && IsWindowVisible(window) &&
              GetWindow(window, GW_OWNER) == nullptr) {
            *reinterpret_cast<HWND*>(output) = window;
            return FALSE;
          }
          return TRUE;
        },
        reinterpret_cast<LPARAM>(&nativeWindow));
  }
  if (nativeWindow == nullptr) return;

  SetPropW(nativeWindow, L"ImPlay.Window", this);
  DragAcceptFiles(nativeWindow, TRUE);
  originalWindowProc = reinterpret_cast<WNDPROC>(
      SetWindowLongPtrW(nativeWindow, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(&Window::nativeWindowProc)));
  if (originalWindowProc == nullptr) {
    DragAcceptFiles(nativeWindow, FALSE);
    RemovePropW(nativeWindow, L"ImPlay.Window");
    nativeWindow = nullptr;
  }
}

LRESULT CALLBACK Window::nativeWindowProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam) {
  auto* self = static_cast<Window*>(GetPropW(hwnd, L"ImPlay.Window"));
  if (self == nullptr || self->originalWindowProc == nullptr)
    return DefWindowProcW(hwnd, message, wParam, lParam);

  if (message == WM_DROPFILES) {
    const auto drop = reinterpret_cast<HDROP>(wParam);
    const UINT count = DragQueryFileW(drop, 0xFFFFFFFF, nullptr, 0);
    std::vector<std::filesystem::path> paths;
    paths.reserve(count);
    for (UINT index = 0; index < count; ++index) {
      const UINT length = DragQueryFileW(drop, index, nullptr, 0);
      std::wstring path(length + 1, L'\0');
      DragQueryFileW(drop, index, path.data(), length + 1);
      path.resize(length);
      paths.emplace_back(std::move(path));
    }
    DragFinish(drop);
    if (!paths.empty()) self->load(paths, false);
    return 0;
  }

  // Never call back into Slint/winit from a Win32 window procedure. Those APIs
  // can re-enter the event loop and make Windows create a hung-window ghost.
  if (message == WM_NCHITTEST && !self->windowFullscreen && !IsZoomed(hwnd)) {
    POINT cursor { GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam) };
    RECT bounds {};
    GetWindowRect(hwnd, &bounds);
    const int border = std::max(6, GetSystemMetricsForDpi(SM_CXSIZEFRAME, GetDpiForWindow(hwnd)));
    const bool left = cursor.x >= bounds.left && cursor.x < bounds.left + border;
    const bool right = cursor.x <= bounds.right && cursor.x > bounds.right - border;
    const bool top = cursor.y >= bounds.top && cursor.y < bounds.top + border;
    const bool bottom = cursor.y <= bounds.bottom && cursor.y > bounds.bottom - border;
    if (top && left) return HTTOPLEFT;
    if (top && right) return HTTOPRIGHT;
    if (bottom && left) return HTBOTTOMLEFT;
    if (bottom && right) return HTBOTTOMRIGHT;
    if (left) return HTLEFT;
    if (right) return HTRIGHT;
    if (top) return HTTOP;
    if (bottom) return HTBOTTOM;
  }

  if (message == WM_NCDESTROY) {
    RemovePropW(hwnd, L"ImPlay.Window");
    const auto original = self->originalWindowProc;
    self->nativeWindow = nullptr;
    self->originalWindowProc = nullptr;
    return CallWindowProcW(original, hwnd, message, wParam, lParam);
  }
  return CallWindowProcW(self->originalWindowProc, hwnd, message, wParam, lParam);
}
#endif

void Window::toggleOscControls() {
  if (!mpvInitialized) return;
  const bool enabled = !app->get_osc_controls_active();
  mpv->commandv("script-message-to", "osc", "osc-visibility", enabled ? "always" : "never", nullptr);
  app->set_osc_controls_active(enabled);
}

void Window::execute(const std::string& command) {
  if (!mpvInitialized) return;
  if (command == "play-pause") {
    if (idleActive && !mpv->playlist.empty()) {
      const auto pos = mpv->playlistPos >= 0 && mpv->playlistPos < static_cast<int64_t>(mpv->playlist.size())
                           ? mpv->playlistPos : 0;
      mpv->commandv("playlist-play-index", std::to_string(pos).c_str(), nullptr);
    } else if (!idleActive) {
      mpv->commandv("cycle", "pause", nullptr);
    } else if (config->Data.Recent.SpaceToPlayLast) {
      for (const auto& recent : config->getRecentFiles()) {
        if (fileExists(recent.path) || recent.path.find("://") != std::string::npos) {
          mpv->commandv("loadfile", recent.path.c_str(), nullptr);
          break;
        }
      }
    }
  } else if (command == "mute") {
    mpv->command("cycle mute");
  } else if (command == "fullscreen") {
    mpv->command("cycle fullscreen");
  } else if (command == "seek-backward") {
    mpv->command("osd-auto seek -10 relative exact");
  } else if (command == "seek-forward") {
    mpv->command("osd-auto seek 10 relative exact");
  } else if (command == "playlist-add-files") {
    openFiles(true);
  } else if (command == "playlist-clear") {
    mpv->command("playlist-clear");
  }
}

void Window::openFiles(bool append) {
  try {
    mpv->command("set pause yes");
    if (auto files = NFD::openFiles(mediaFilters)) load(*files, append);
    mpv->command("set pause no");
  } catch (const std::exception& e) {
    showError(e.what());
  }
}

void Window::openFolder(bool append) {
  try {
    mpv->command("set pause yes");
    if (auto folder = NFD::openFolder()) load({*folder}, append);
    mpv->command("set pause no");
  } catch (const std::exception& e) {
    showError(e.what());
  }
}

void Window::openDisc() {
  try {
    if (auto folder = NFD::openFolder()) {
      const bool bluray = std::filesystem::exists(*folder / "BDMV");
      mpv->property(bluray ? "bluray-device" : "dvd-device", folder->string().c_str());
      mpv->commandv("loadfile", bluray ? "bd://" : "dvd://", nullptr);
    }
  } catch (const std::exception& e) {
    showError(e.what());
  }
}

void Window::openIso() {
  try {
    if (auto file = NFD::openFile(isoFilters)) {
      const bool bluray = std::filesystem::file_size(*file) > 4700000000ULL;
      mpv->property(bluray ? "bluray-device" : "dvd-device", file->string().c_str());
      mpv->commandv("loadfile", bluray ? "bd://" : "dvd://", nullptr);
    }
  } catch (const std::exception& e) {
    showError(e.what());
  }
}

void Window::openClipboard() {
#ifdef _WIN32
  if (!OpenClipboard(nullptr)) return;
  const HANDLE handle = GetClipboardData(CF_UNICODETEXT);
  if (handle != nullptr) {
    if (const auto* text = static_cast<const wchar_t*>(GlobalLock(handle)); text != nullptr) {
      const auto value = trim(WideToUTF8(text));
      GlobalUnlock(handle);
      if (!value.empty()) {
        mpv->commandv("loadfile", value.c_str(), nullptr);
        mpv->commandv("show-text", value.c_str(), nullptr);
      }
    }
  }
  CloseClipboard();
#endif
}

void Window::pickFont() {
  try {
    if (auto file = NFD::openFile(fontFilters)) {
      const auto path = file->string();
      if (auto error = app->window().window_handle().register_font_from_path(path.c_str()); error) {
        showError(error->data());
        return;
      }
      config->Data.Font.Path = path;
      app->set_cfg_font_path(path.c_str());
      config->save();
    }
  } catch (const std::exception& e) {
    showError(e.what());
  }
}

void Window::updateSetting(const std::string& key, const std::string& value) {
  try {
    const bool flag = value == "true" || value == "1";
    if (key == "mpv.watch-later") {
      config->Data.Mpv.WatchLater = flag;
    } else if (key == "mpv.volume") {
      config->Data.Mpv.Volume = std::clamp(std::stoi(value), 0, 200);
    } else if (key == "mpv.config") {
      config->Data.Mpv.UseConfig = flag;
    } else if (key == "window.save") {
      config->Data.Window.Save = flag;
    } else if (key == "window.single") {
      config->Data.Window.Single = flag;
    } else if (key == "recent.space-to-play-last") {
      config->Data.Recent.SpaceToPlayLast = flag;
    } else if (key == "recent.limit") {
      config->Data.Recent.Limit = std::clamp(std::stoi(value), 0, 50);
    } else if (key == "interface.lang") {
      config->Data.Interface.Lang = value;
      getLang() = value;
    } else if (key == "interface.theme") {
      config->Data.Interface.Theme = value;
      app->set_theme_name(value.c_str());
    } else if (key == "interface.scale") {
      config->Data.Interface.Scale = std::clamp(std::stof(value), 0.5F, 2.0F);
      app->window().window_handle().set_scale_factor(nativeScaleFactor * config->Data.Interface.Scale);
    } else if (key == "interface.fps") {
      config->Data.Interface.Fps = std::clamp(std::stoi(value), 10, 120);
    } else if (key == "interface.rounding") {
      config->Data.Interface.Rounding = flag;
      app->set_theme_rounding(flag);
    } else if (key == "interface.shadow") {
      config->Data.Interface.Shadow = flag;
      app->set_theme_shadows(flag);
    } else if (key == "font.size") {
      config->Data.Font.Size = std::clamp(std::stoi(value), 8, 36);
    } else if (key == "font.glyph-range") {
      config->Data.Font.GlyphRange = std::clamp(std::stoi(value), 0, 32);
    } else if (key == "debug.log-level") {
      config->Data.Debug.LogLevel = value;
    } else if (key == "debug.log-limit") {
      config->Data.Debug.LogLimit = std::clamp(std::stoi(value), 100, 5000);
    }
    config->save();
  } catch (const std::exception& e) {
    showError(fmt::format("Unable to save {}: {}", key, e.what()));
  }
}

void Window::publishAudioEq() {
  std::vector<int> values(audioEqBands.begin(), audioEqBands.end());
  app->set_audio_eq_bands(std::make_shared<slint::VectorModel<int>>(std::move(values)));
}

void Window::applyAudioEq(bool showMessage) {
  if (!mpvInitialized) return;
  mpv->command("no-osd af remove @aeq");
  if (audioEqEnabled) {
    std::string settings;
    for (int channel = 0; channel < 2; ++channel) {
      double frequency = 31.25;
      for (const int gain : audioEqBands) {
        settings += fmt::format("c{} f={} w=1000 g={}|", channel, frequency, gain);
        frequency *= 2.0;
      }
    }
    const auto filter = fmt::format("@aeq:lavfi=[anequalizer={}]", settings);
    mpv->commandv("af", "add", filter.c_str(), nullptr);
  }
  if (showMessage)
    mpv->commandv("show-text", audioEqEnabled ? "Audio equalizer enabled" : "Audio equalizer disabled", nullptr);
}

void Window::openSubtitle() {
  try {
    if (auto files = NFD::openFiles(subtitleFilters)) load(*files, true);
  } catch (const std::exception& e) {
    showError(e.what());
  }
}

void Window::load(const std::vector<std::filesystem::path>& files, bool append) {
  if (!mpvInitialized) return;

  // Match the C# player path: expand dropped folders, build one naturally
  // sorted media queue, load that queue first, then attach any subtitles.
  // Loading subtitles after media is important for mixed file drops.
  std::vector<std::filesystem::path> media;
  std::vector<std::filesystem::path> subtitles;
  for (const auto& file : files) {
    if (std::filesystem::is_directory(file)) {
      std::vector<std::filesystem::path> nested;
      for (const auto& entry : std::filesystem::directory_iterator(file)) {
        if (entry.is_regular_file() && isMediaFile(entry.path().string())) nested.push_back(entry.path());
      }
      std::sort(nested.begin(), nested.end(), [](const auto& left, const auto& right) {
        return strnatcasecmp(left.string().c_str(), right.string().c_str()) < 0;
      });
      media.insert(media.end(), nested.begin(), nested.end());
      continue;
    }

    if (isSubtitleFile(file.string())) {
      subtitles.push_back(file);
    } else {
      media.push_back(file);
    }
  }

  if (media.size() > 1) {
    std::sort(media.begin(), media.end(), [](const auto& left, const auto& right) {
      return strnatcasecmp(left.filename().string().c_str(), right.filename().string().c_str()) < 0;
    });
  }

  bool first = true;
  for (const auto& file : media) {
    const char* action = append ? "append-play" : (first ? "replace" : "append-play");
    mpv->commandv("loadfile", file.string().c_str(), action, nullptr);
    first = false;
  }

  if (!media.empty() || mpv->property<int64_t, MPV_FORMAT_INT64>("playlist-count") > 0) {
    for (const auto& subtitle : subtitles)
      mpv->commandv("sub-add", subtitle.string().c_str(), "select", nullptr);
  }
}

bool Window::isMediaFile(const std::string& file) const {
  static const std::vector<std::string> extensions = {
      "yuv", "y4m", "m2ts", "mts", "ts", "mpeg", "mpg", "m4v", "mp4", "h264", "hevc", "h265",
      "ogv", "mkv", "webm", "avi", "wmv", "flv", "mov", "mp3", "m4a", "aac", "flac", "ogg",
      "opus", "mka", "wma", "wav", "aiff", "ape", "jpg", "jpeg", "bmp", "png", "gif", "webp"};
  auto extension = tolower(std::filesystem::path(file).extension().string());
  if (extension.starts_with('.')) extension.erase(0, 1);
  return std::find(extensions.begin(), extensions.end(), extension) != extensions.end();
}

bool Window::isSubtitleFile(const std::string& file) const {
  static const std::vector<std::string> extensions = {
      "srt", "ass", "idx", "sub", "sup", "ttxt", "txt", "ssa", "smi", "mks"};
  auto extension = tolower(std::filesystem::path(file).extension().string());
  if (extension.starts_with('.')) extension.erase(0, 1);
  return std::find(extensions.begin(), extensions.end(), extension) != extensions.end();
}

void Window::postToUi(std::function<void()> callback) {
  if (!shuttingDown) slint::invoke_from_event_loop(std::move(callback));
}

void Window::showError(const std::string& message) {
  fmt::print(stderr, "ImPlay: {}\n", message);
  app->set_toast(slint::SharedString(message));
}

void Window::writeMpvConf() {
  const auto path = dataPath();
  const auto mpvConf = path / "mpv.conf";
  const auto inputConf = path / "input.conf";
  std::filesystem::create_directories(path);

  if (!std::filesystem::exists(mpvConf)) {
    std::ofstream file(mpvConf, std::ios::binary);
    const auto content = romfs::get("mpv/mpv.conf");
    file.write(reinterpret_cast<const char*>(content.data()), content.size()) << "\n";
    file << "profile=gpu-hq\ndeband=no\nhwdec=auto-safe\n";
  }
  if (!std::filesystem::exists(inputConf)) {
    std::ofstream file(inputConf, std::ios::binary);
    const auto content = romfs::get("mpv/input.conf");
    file.write(reinterpret_cast<const char*>(content.data()), content.size()) << "\n";
  }

  const auto scripts = path / "scripts";
  std::filesystem::create_directories(scripts);
  const auto osc = scripts / "osc.lua";
  if (!std::filesystem::exists(osc)) {
    std::ofstream file(osc, std::ios::binary);
    const auto content = romfs::get("mpv/osc.lua").span<char>();
    file.write(content.data(), content.size());
  }
}

}  // namespace ImPlay
