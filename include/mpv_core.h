// ImPlay-Slint. Copyright (c) 2026 Skonester.
// Based on ImPlay, Copyright (c) 2022-2025 tsl0922 (https://github.com/tsl0922/ImPlay).
// SPDX-License-Identifier: GPL-2.0-only

// C ABI of the Zig mpv core (source/zig/mpv_core.zig). All libmpv calls go through it;
// <mpv/client.h> is included only for its types and constants. Layouts must match the
// extern structs in source/zig/mpv_parse.zig and mpv_core.zig.

#pragma once
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <mpv/client.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct implay_mpv implay_mpv;

typedef enum implay_mpv_status {
  IMPLAY_MPV_OK = 0,
  IMPLAY_MPV_CREATE_FAILED,
  IMPLAY_MPV_CLIENT_FAILED,
  IMPLAY_MPV_SET_WID_FAILED,
  IMPLAY_MPV_INIT_FAILED,
  IMPLAY_MPV_RENDER_INIT_FAILED,
  IMPLAY_MPV_THREAD_FAILED,
  IMPLAY_MPV_OPTION_FAILED,
} implay_mpv_status;

// Items passed to the list callbacks. Strings may be null and are only valid for the
// duration of the callback.
typedef struct implay_mpv_play_item {
  int64_t id;
  const char *title;
  const char *filename;
} implay_mpv_play_item;

typedef struct implay_mpv_chapter_item {
  int64_t id;
  const char *title;
  double time;
} implay_mpv_chapter_item;

typedef struct implay_mpv_track_item {
  int64_t id;
  const char *type;
  const char *title;
  const char *lang;
  bool selected;
} implay_mpv_track_item;

typedef struct implay_mpv_audio_device {
  const char *name;
  const char *description;
} implay_mpv_audio_device;

typedef struct implay_mpv_binding_item {
  const char *section;
  const char *key;
  const char *cmd;
  const char *comment;
  int64_t priority;
  bool weak;
} implay_mpv_binding_item;

// wakeup runs on an mpv thread and render_update on mpv's render thread; the rest run
// inside implay_mpv_pump on the caller's thread. Any callback may be null.
typedef struct implay_mpv_callbacks {
  void *userdata;
  void (*wakeup)(void *userdata);
  void (*render_update)(void *userdata);
  void (*event)(void *userdata, mpv_event_id id, void *data);
  void (*property)(void *userdata, const char *name, mpv_format format, void *data);
  void (*log)(void *userdata, const char *prefix, const char *level, const char *text);
  void (*playlist)(void *userdata, const implay_mpv_play_item *items, size_t count);
  void (*chapters)(void *userdata, const implay_mpv_chapter_item *items, size_t count);
  void (*tracks)(void *userdata, const implay_mpv_track_item *items, size_t count);
  void (*audio_devices)(void *userdata, const implay_mpv_audio_device *items, size_t count);
  void (*bindings)(void *userdata, const implay_mpv_binding_item *items, size_t count);
  void (*profiles)(void *userdata, const char *const *names, size_t count);
} implay_mpv_callbacks;

typedef struct implay_mpv_option {
  const char *name;
  const char *value;
} implay_mpv_option;

typedef void *(*implay_mpv_gl_load)(const char *name);

implay_mpv *implay_mpv_create(const implay_mpv_callbacks *callbacks, implay_mpv_status *status);
void implay_mpv_destroy(implay_mpv *core);
// With wid == 0, creates an OpenGL render context that loads GL symbols through gl_load.
implay_mpv_status implay_mpv_init(implay_mpv *core, implay_mpv_gl_load gl_load, int64_t wid);
// Drains queued client events, waiting up to timeout seconds for the first one.
void implay_mpv_pump(implay_mpv *core, double timeout);

// Queues simple whitespace-delimited commands (prefixed with osd-auto); quoted, escaped,
// chained or expanded commands run synchronously through mpv's own parser.
int implay_mpv_command(implay_mpv *core, const char *args);
int implay_mpv_command_string(implay_mpv *core, const char *args);
int implay_mpv_command_async(implay_mpv *core, const char **args);

int implay_mpv_get_property(implay_mpv *core, const char *name, mpv_format format, void *data);
// Returns an mpv-owned string to release with implay_mpv_free, or null.
char *implay_mpv_get_property_string(implay_mpv *core, const char *name);
void implay_mpv_free(void *data);
int implay_mpv_set_property_async(implay_mpv *core, const char *name, mpv_format format, void *data);
int implay_mpv_set_option(implay_mpv *core, const char *name, mpv_format format, void *data);
int implay_mpv_set_option_string(implay_mpv *core, const char *name, const char *value);
int implay_mpv_observe_property(implay_mpv *core, const char *name, mpv_format format);
int implay_mpv_request_log_messages(implay_mpv *core, const char *level);
int implay_mpv_load_config_file(implay_mpv *core, const char *path);

void implay_mpv_render(implay_mpv *core, int w, int h, int fbo, bool flip);
bool implay_mpv_want_render(implay_mpv *core);
void implay_mpv_report_swap(implay_mpv *core);

const char *implay_mpv_error_string(int error);
const char *implay_mpv_status_string(implay_mpv_status status);

// Plays without a window or render context (--o=, --no-video). On IMPLAY_MPV_OPTION_FAILED,
// *failed_option is the index of the rejected option and *mpv_error its mpv error code.
implay_mpv_status implay_mpv_run_headless(const implay_mpv_option *options, size_t option_count,
                                          const char *const *paths, size_t path_count, size_t *failed_option,
                                          int *mpv_error);

#ifdef __cplusplus
}
#endif
