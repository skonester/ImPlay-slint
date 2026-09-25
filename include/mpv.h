// Copyright (c) 2022-2025 tsl0922. Libraries updated, fixes by Skonester 2026. All rights reserved.
// SPDX-License-Identifier: GPL-2.0-only

#pragma once
#include <string>
#include <vector>
#include <functional>
#include <filesystem>
#include "mpv_core.h"

namespace ImPlay {
typedef void *(*GLAddrLoadFunc)(const char *name);
class Mpv {
 public:
  Mpv();
  ~Mpv();

  using EventHandler = std::function<void(void *)>;
  using LogHandler = std::function<void(const char *, const char *, const char *)>;
  using Callback = std::function<void(Mpv *)>;

  void init(GLAddrLoadFunc load, int64_t wid = 0);
  void render(int w, int h, int fbo = 0, bool flip = true);
  bool wantRender();
  void reportSwap();
  void waitEvent(double timeout = 0);
  void requestLog(const char *level, LogHandler handler);
  int loadConfig(const char *path);

  bool playing() { return playlistPlayingPos != -1; }
  bool allowDrag() { return windowDragging && !fullscreen; }

  Callback &wakeupCb() { return wakeupCb_; }
  Callback &updateCb() { return updateCb_; }

  int command(const std::string &args);
  int command(const char *args) { return command(std::string(args)); }
  int commandSync(const char *args) { return implay_mpv_command_string(core, args); }
  inline int command(const char *args[]) { return implay_mpv_command_async(core, args); }
  int commandv(const char *arg, ...);

  std::string property(const char *name) {
    char *data = implay_mpv_get_property_string(core, name);
    std::string ret = data ? data : "";
    implay_mpv_free(data);
    return ret;
  }
  int property(const char *name, const char *data) {
    return implay_mpv_set_property_async(core, name, MPV_FORMAT_STRING, &data);
  }
  template <typename T, mpv_format format>
  T property(const char *name) {
    T data{0};
    implay_mpv_get_property(core, name, format, &data);
    return data;
  }
  template <typename T, mpv_format format>
  int property(const char *name, T data) {
    return implay_mpv_set_property_async(core, name, format, static_cast<void *>(&data));
  }

  int option(const char *name, const char *data) { return implay_mpv_set_option_string(core, name, data); }
  template <typename T, mpv_format format>
  int option(const char *name, T data) {
    return implay_mpv_set_option(core, name, format, static_cast<void *>(&data));
  }

  void observeEvent(mpv_event_id event, const EventHandler &handler) { events.emplace_back(event, handler); }
  template <typename T, mpv_format format>
  void observeProperty(const std::string &name, const std::function<void(T data)> &handler) {
    propertyEvents.emplace_back(name, format, [=](void *data) { handler(*(T *)data); });
    implay_mpv_observe_property(core, name.c_str(), format);
  }

  static const char *errorString(int error) { return implay_mpv_error_string(error); }

  struct TrackItem {
    int64_t id = -1;
    std::string type;
    std::string title;
    std::string lang;
    bool selected;
  };

  struct PlayItem {
    int64_t id = -1;
    std::string title;
    std::filesystem::path path;

    inline std::string filename() const { return path.filename().string(); }
  };

  struct ChapterItem {
    int64_t id = -1;
    std::string title;
    double time;
  };

  struct BindingItem {
    std::string section;
    std::string key;
    std::string cmd;
    std::string comment;
    int64_t priority;
    bool weak;
  };

  struct AudioDevice {
    std::string name;
    std::string description;
  };

  // cached mpv properties
  std::vector<PlayItem> playlist;
  std::vector<ChapterItem> chapters;
  std::vector<TrackItem> tracks;
  std::vector<AudioDevice> audioDevices;
  std::vector<BindingItem> bindings;
  std::vector<std::string> profiles;
  std::string aid, vid, sid, sid2, audioDevice, cursorAutohide;
  int64_t chapter = -1, volume = 100, playlistPos = -1, playlistPlayingPos = -1, timePos = 0;
  int64_t brightness = 0, contrast = 0, saturation = 0, gamma = 0, hue = 0;
  double audioDelay = 0, subDelay = 0, subScale = 1;
  bool pause = false, mute = false, fullscreen = false, sidv = true, sidv2 = true, ontop = false;
  bool keepaspect = true, keepaspectWindow = true, windowDragging = true, autoResize = false;

 private:
  void observeProperties();

  // Callbacks from the Zig core (include/mpv_core.h); userdata is this Mpv.
  static void onEvent(void *userdata, mpv_event_id id, void *data);
  static void onProperty(void *userdata, const char *name, mpv_format format, void *data);
  static void onLog(void *userdata, const char *prefix, const char *level, const char *text);
  static void onPlaylist(void *userdata, const implay_mpv_play_item *items, size_t count);
  static void onChapters(void *userdata, const implay_mpv_chapter_item *items, size_t count);
  static void onTracks(void *userdata, const implay_mpv_track_item *items, size_t count);
  static void onAudioDevices(void *userdata, const implay_mpv_audio_device *items, size_t count);
  static void onBindings(void *userdata, const implay_mpv_binding_item *items, size_t count);
  static void onProfiles(void *userdata, const char *const *names, size_t count);

  implay_mpv *core = nullptr;
  LogHandler logHandler = nullptr;
  Callback wakeupCb_, updateCb_;

  std::vector<std::tuple<mpv_event_id, EventHandler>> events;
  std::vector<std::tuple<std::string, mpv_format, EventHandler>> propertyEvents;
};
}  // namespace ImPlay
