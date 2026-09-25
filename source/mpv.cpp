// Copyright (c) 2022-2025 tsl0922. Libraries updated, fixes by Skonester 2026. All rights reserved.
// SPDX-License-Identifier: GPL-2.0-only

// C++ face of the Zig mpv core (source/zig/mpv_core.zig), which makes every libmpv call,
// runs the core event thread and parses the list properties handed back here.

#include <cstdarg>
#include <stdexcept>
#include <string>
#include <vector>
#include "mpv.h"

namespace ImPlay {
namespace {
std::string str(const char *s) { return s != nullptr ? s : ""; }
}  // namespace

Mpv::Mpv() {
  implay_mpv_callbacks callbacks{};
  callbacks.userdata = this;
  callbacks.wakeup = [](void *ctx) {
    auto *self = static_cast<Mpv *>(ctx);
    if (self->wakeupCb_) self->wakeupCb_(self);
  };
  callbacks.render_update = [](void *ctx) {
    auto *self = static_cast<Mpv *>(ctx);
    if (self->updateCb_) self->updateCb_(self);
  };
  callbacks.event = onEvent;
  callbacks.property = onProperty;
  callbacks.log = onLog;
  callbacks.playlist = onPlaylist;
  callbacks.chapters = onChapters;
  callbacks.tracks = onTracks;
  callbacks.audio_devices = onAudioDevices;
  callbacks.bindings = onBindings;
  callbacks.profiles = onProfiles;

  implay_mpv_status status = IMPLAY_MPV_OK;
  core = implay_mpv_create(&callbacks, &status);
  if (core == nullptr) throw std::runtime_error(implay_mpv_status_string(status));
}

Mpv::~Mpv() { implay_mpv_destroy(core); }

int Mpv::command(const std::string &args) { return implay_mpv_command(core, args.c_str()); }

int Mpv::commandv(const char *arg, ...) {
  std::vector<const char *> args;
  va_list ap;
  va_start(ap, arg);
  for (const char *s = arg; s != nullptr; s = va_arg(ap, const char *)) args.push_back(s);
  va_end(ap);
  args.push_back(nullptr);
  return implay_mpv_command_async(core, args.data());
}

void Mpv::waitEvent(double timeout) { implay_mpv_pump(core, timeout); }

void Mpv::requestLog(const char *level, LogHandler handler) {
  this->logHandler = handler;
  implay_mpv_request_log_messages(core, level);
}

int Mpv::loadConfig(const char *path) { return implay_mpv_load_config_file(core, path); }

void Mpv::render(int w, int h, int fbo, bool flip) { implay_mpv_render(core, w, h, fbo, flip); }

bool Mpv::wantRender() { return implay_mpv_want_render(core); }

void Mpv::reportSwap() { implay_mpv_report_swap(core); }

void Mpv::init(GLAddrLoadFunc load, int64_t wid) {
  if (auto status = implay_mpv_init(core, load, wid); status != IMPLAY_MPV_OK)
    throw std::runtime_error(implay_mpv_status_string(status));
  observeProperties();
}

void Mpv::onEvent(void *userdata, mpv_event_id id, void *data) {
  auto *self = static_cast<Mpv *>(userdata);
  for (const auto &[event_id, handler] : self->events)
    if (event_id == id) handler(data);
}

void Mpv::onProperty(void *userdata, const char *name, mpv_format format, void *data) {
  auto *self = static_cast<Mpv *>(userdata);
  for (const auto &[prop, propFormat, handler] : self->propertyEvents)
    if (prop == name && propFormat == format) handler(data);
}

void Mpv::onLog(void *userdata, const char *prefix, const char *level, const char *text) {
  auto *self = static_cast<Mpv *>(userdata);
  if (self->logHandler) self->logHandler(prefix, level, text);
}

void Mpv::onPlaylist(void *userdata, const implay_mpv_play_item *items, size_t count) {
  auto &playlist = static_cast<Mpv *>(userdata)->playlist;
  playlist.clear();
  for (size_t i = 0; i < count; i++) {
    PlayItem t;
    t.id = items[i].id;
    t.title = str(items[i].title);
    if (items[i].filename != nullptr) t.path = reinterpret_cast<const char8_t *>(items[i].filename);
    playlist.emplace_back(t);
  }
}

void Mpv::onChapters(void *userdata, const implay_mpv_chapter_item *items, size_t count) {
  auto &chapters = static_cast<Mpv *>(userdata)->chapters;
  chapters.clear();
  for (size_t i = 0; i < count; i++) chapters.push_back({items[i].id, str(items[i].title), items[i].time});
}

void Mpv::onTracks(void *userdata, const implay_mpv_track_item *items, size_t count) {
  auto &tracks = static_cast<Mpv *>(userdata)->tracks;
  tracks.clear();
  for (size_t i = 0; i < count; i++) {
    const auto &t = items[i];
    tracks.push_back({t.id, str(t.type), str(t.title), str(t.lang), t.selected});
  }
}

void Mpv::onAudioDevices(void *userdata, const implay_mpv_audio_device *items, size_t count) {
  auto &audioDevices = static_cast<Mpv *>(userdata)->audioDevices;
  audioDevices.clear();
  for (size_t i = 0; i < count; i++) audioDevices.push_back({str(items[i].name), str(items[i].description)});
}

void Mpv::onBindings(void *userdata, const implay_mpv_binding_item *items, size_t count) {
  auto &bindings = static_cast<Mpv *>(userdata)->bindings;
  bindings.clear();
  for (size_t i = 0; i < count; i++) {
    const auto &b = items[i];
    bindings.push_back({str(b.section), str(b.key), str(b.cmd), str(b.comment), b.priority, b.weak});
  }
}

void Mpv::onProfiles(void *userdata, const char *const *names, size_t count) {
  auto &profiles = static_cast<Mpv *>(userdata)->profiles;
  profiles.assign(names, names + count);
}

void Mpv::observeProperties() {
  // The list properties (playlist, chapter-list, track-list, audio-device-list,
  // input-bindings, profile-list) are observed and parsed by the Zig core.
  observeProperty<char *, MPV_FORMAT_STRING>("aid", [this](char *data) { aid = data; });
  observeProperty<char *, MPV_FORMAT_STRING>("vid", [this](char *data) { vid = data; });
  observeProperty<char *, MPV_FORMAT_STRING>("sid", [this](char *data) { sid = data; });
  observeProperty<char *, MPV_FORMAT_STRING>("secondary-sid", [this](char *data) { sid2 = data; });
  observeProperty<char *, MPV_FORMAT_STRING>("audio-device", [this](char *data) { audioDevice = data; });
  observeProperty<char *, MPV_FORMAT_STRING>("cursor-autohide", [this](char *data) { cursorAutohide = data; });

  observeProperty<int, MPV_FORMAT_FLAG>("pause", [this](int flag) { pause = flag; });
  observeProperty<int, MPV_FORMAT_FLAG>("mute", [this](int flag) { mute = flag; });
  observeProperty<int, MPV_FORMAT_FLAG>("fullscreen", [this](int flag) { fullscreen = flag; });
  observeProperty<int, MPV_FORMAT_FLAG>("sub-visibility", [this](int flag) { sidv = flag; });
  observeProperty<int, MPV_FORMAT_FLAG>("secondary-sub-visibility", [this](int flag) { sidv2 = flag; });
  observeProperty<int, MPV_FORMAT_FLAG>("window-dragging", [this](int flag) { windowDragging = flag; });
  observeProperty<int, MPV_FORMAT_FLAG>("keepaspect", [this](int flag) { keepaspect = flag; });
  observeProperty<int, MPV_FORMAT_FLAG>("ontop", [this](int flag) { ontop = flag; });
  observeProperty<int, MPV_FORMAT_FLAG>("keepaspect-window", [this](int flag) { keepaspectWindow = flag; });
  observeProperty<int, MPV_FORMAT_FLAG>("auto-window-resize", [this](int flag) { autoResize = flag; });

  observeProperty<int64_t, MPV_FORMAT_INT64>("volume", [this](int64_t val) { volume = val; });
  observeProperty<int64_t, MPV_FORMAT_INT64>("chapter", [this](int64_t val) { chapter = val; });
  observeProperty<int64_t, MPV_FORMAT_INT64>("playlist-pos", [this](int64_t val) { playlistPos = val; });
  observeProperty<int64_t, MPV_FORMAT_INT64>("playlist-playing-pos", [this](int64_t val) { playlistPlayingPos = val; });
  observeProperty<int64_t, MPV_FORMAT_INT64>("time-pos", [this](int64_t val) { timePos = val; });

  observeProperty<int64_t, MPV_FORMAT_INT64>("brightness", [this](int64_t val) { brightness = val; });
  observeProperty<int64_t, MPV_FORMAT_INT64>("contrast", [this](int64_t val) { contrast = val; });
  observeProperty<int64_t, MPV_FORMAT_INT64>("saturation", [this](int64_t val) { saturation = val; });
  observeProperty<int64_t, MPV_FORMAT_INT64>("gamma", [this](int64_t val) { gamma = val; });
  observeProperty<int64_t, MPV_FORMAT_INT64>("hue", [this](int64_t val) { hue = val; });

  observeProperty<double, MPV_FORMAT_DOUBLE>("audio-delay", [this](double val) { audioDelay = val; });
  observeProperty<double, MPV_FORMAT_DOUBLE>("sub-delay", [this](double val) { subDelay = val; });
  observeProperty<double, MPV_FORMAT_DOUBLE>("sub-scale", [this](double val) { subScale = val; });
}
}  // namespace ImPlay
