// ImPlay-Slint. Copyright (c) 2026 Skonester.
// Based on ImPlay, Copyright (c) 2022-2025 tsl0922 (https://github.com/tsl0922/ImPlay).
// SPDX-License-Identifier: GPL-2.0-only

//! Every libmpv call made by ImPlay goes through this module. It owns the mpv handles,
//! the render context and the core event thread, pumps client events and parses the
//! list properties. The C ABI is declared in include/mpv_core.h and wrapped for the
//! rest of the app by ImPlay::Mpv (source/mpv.cpp).

const std = @import("std");
const c = @import("c");
const parse = @import("mpv_parse.zig");

const allocator = std.heap.c_allocator;

pub const Status = enum(c_int) {
    ok = 0,
    create_failed,
    client_failed,
    set_wid_failed,
    init_failed,
    render_init_failed,
    thread_failed,
    option_failed,
};

const GlLoadFn = *const fn (name: [*:0]const u8) callconv(.c) ?*anyopaque;

fn Sink(comptime T: type) type {
    return ?*const fn (userdata: ?*anyopaque, items: [*]const T, count: usize) callconv(.c) void;
}

/// Mirrors implay_mpv_callbacks. `wakeup` runs on an mpv thread and `render_update` on the
/// render thread; everything else runs inside implay_mpv_pump on the caller's thread.
pub const Callbacks = extern struct {
    userdata: ?*anyopaque = null,
    wakeup: ?*const fn (userdata: ?*anyopaque) callconv(.c) void = null,
    render_update: ?*const fn (userdata: ?*anyopaque) callconv(.c) void = null,
    event: ?*const fn (userdata: ?*anyopaque, id: c.mpv_event_id, data: ?*anyopaque) callconv(.c) void = null,
    property: ?*const fn (userdata: ?*anyopaque, name: [*:0]const u8, format: c.mpv_format, data: ?*anyopaque) callconv(.c) void = null,
    log: ?*const fn (userdata: ?*anyopaque, prefix: [*:0]const u8, level: [*:0]const u8, text: [*:0]const u8) callconv(.c) void = null,
    playlist: Sink(parse.PlayItem) = null,
    chapters: Sink(parse.ChapterItem) = null,
    tracks: Sink(parse.TrackItem) = null,
    audio_devices: Sink(parse.AudioDevice) = null,
    bindings: Sink(parse.BindingItem) = null,
    profiles: Sink([*:0]const u8) = null,
};

pub const Option = extern struct {
    name: [*:0]const u8,
    value: [*:0]const u8,
};

/// List properties the core parses itself. The tag is the observation's reply_userdata;
/// caller observations use 0, so the two never mix. Order matches the original C++ so
/// the cached lists are updated before the UI's own observers of the same property run.
const Collection = enum(u64) {
    playlist = 1,
    chapters,
    tracks,
    audio_devices,
    bindings,
    profiles,

    fn property(collection: Collection) [:0]const u8 {
        return switch (collection) {
            .playlist => "playlist",
            .chapters => "chapter-list",
            .tracks => "track-list",
            .audio_devices => "audio-device-list",
            .bindings => "input-bindings",
            .profiles => "profile-list",
        };
    }

    fn format(collection: Collection) c.mpv_format {
        return if (collection == .profiles) c.MPV_FORMAT_STRING else c.MPV_FORMAT_NODE;
    }
};

const Core = struct {
    main: *c.mpv_handle,
    client: *c.mpv_handle,
    render_ctx: ?*c.mpv_render_context = null,
    event_thread: ?std.Thread = null,
    gl_load: ?GlLoadFn = null,
    callbacks: Callbacks,
    scratch: std.heap.ArenaAllocator,

    fn dispatch(core: *Core, event: *const c.mpv_event) void {
        const cb = core.callbacks;
        switch (event.event_id) {
            c.MPV_EVENT_PROPERTY_CHANGE => {
                const prop: *const c.mpv_event_property = @ptrCast(@alignCast(event.data));
                if (std.enums.fromInt(Collection, event.reply_userdata)) |collection| {
                    if (prop.format == collection.format()) core.publish(collection, prop.data);
                } else if (cb.property) |f| {
                    f(cb.userdata, prop.name, prop.format, prop.data);
                }
            },
            c.MPV_EVENT_LOG_MESSAGE => if (cb.log) |f| {
                const msg: *const c.mpv_event_log_message = @ptrCast(@alignCast(event.data));
                f(cb.userdata, msg.prefix, msg.level, msg.text);
            },
            else => if (cb.event) |f| f(cb.userdata, event.event_id, event.data),
        }
    }

    fn publish(core: *Core, collection: Collection, data: ?*anyopaque) void {
        defer _ = core.scratch.reset(.retain_capacity);
        const arena = core.scratch.allocator();
        const cb = core.callbacks;
        if (collection == .profiles) {
            const json: *const ?[*:0]const u8 = @ptrCast(@alignCast(data));
            // A malformed list keeps the previous profiles, like a missing one does.
            const names = parse.parseProfiles(arena, std.mem.span(json.* orelse return)) catch return;
            if (cb.profiles) |f| f(cb.userdata, names.ptr, names.len);
            return;
        }
        const node: *const c.mpv_node = @ptrCast(@alignCast(data));
        switch (collection) {
            .playlist => send(cb.playlist, cb.userdata, parse.parsePlaylist(arena, node)),
            .chapters => send(cb.chapters, cb.userdata, parse.parseChapters(arena, node)),
            .tracks => send(cb.tracks, cb.userdata, parse.parseTracks(arena, node)),
            .audio_devices => send(cb.audio_devices, cb.userdata, parse.parseAudioDevices(arena, node)),
            .bindings => send(cb.bindings, cb.userdata, parse.parseBindings(arena, node)),
            .profiles => unreachable,
        }
    }
};

fn send(sink: anytype, userdata: ?*anyopaque, parsed: anytype) void {
    const f = sink orelse return;
    const items = (parsed catch return) orelse return;
    f(userdata, items.ptr, items.len);
}

fn eventLoop(main: *c.mpv_handle) void {
    while (c.mpv_wait_event(main, -1).*.event_id != c.MPV_EVENT_SHUTDOWN) {}
}

fn onWakeup(ctx: ?*anyopaque) callconv(.c) void {
    const core: *Core = @ptrCast(@alignCast(ctx));
    if (core.callbacks.wakeup) |f| f(core.callbacks.userdata);
}

fn onRenderUpdate(ctx: ?*anyopaque) callconv(.c) void {
    const core: *Core = @ptrCast(@alignCast(ctx));
    if (core.callbacks.render_update) |f| f(core.callbacks.userdata);
}

fn getProcAddress(ctx: ?*anyopaque, name: [*c]const u8) callconv(.c) ?*anyopaque {
    const core: *Core = @ptrCast(@alignCast(ctx));
    const load = core.gl_load orelse return null;
    return load(name);
}

// Lifecycle

export fn implay_mpv_create(callbacks: *const Callbacks, status: *Status) ?*Core {
    const main = c.mpv_create() orelse {
        status.* = .create_failed;
        return null;
    };
    const client = c.mpv_create_client(main, "implay") orelse {
        c.mpv_terminate_destroy(main);
        status.* = .client_failed;
        return null;
    };
    const core = allocator.create(Core) catch {
        c.mpv_destroy(client);
        c.mpv_terminate_destroy(main);
        status.* = .create_failed;
        return null;
    };
    core.* = .{ .main = main, .client = client, .callbacks = callbacks.*, .scratch = .init(allocator) };
    status.* = .ok;
    return core;
}

export fn implay_mpv_destroy(core: *Core) void {
    if (core.render_ctx) |ctx| c.mpv_render_context_free(ctx);
    if (core.event_thread) |thread| {
        var quit = [_:null]?[*:0]const u8{"quit"};
        _ = c.mpv_command_async(core.client, 0, @ptrCast(&quit));
        thread.join();
    }
    c.mpv_destroy(core.client);
    c.mpv_terminate_destroy(core.main);
    core.scratch.deinit();
    allocator.destroy(core);
}

/// With wid == 0, creates an OpenGL render context that loads GL symbols through gl_load.
export fn implay_mpv_init(core: *Core, gl_load: ?GlLoadFn, wid: i64) Status {
    var window_id = wid;
    if (c.mpv_set_property(core.client, "wid", c.MPV_FORMAT_INT64, &window_id) < 0) return .set_wid_failed;
    if (c.mpv_initialize(core.client) < 0) return .init_failed;
    if (wid == 0) {
        core.gl_load = gl_load;
        var gl_init: c.mpv_opengl_init_params = .{ .get_proc_address = getProcAddress, .get_proc_address_ctx = core };
        // Slint calls render on the UI thread. Advanced control would require that thread to
        // never wait on the mpv core; otherwise libmpv can deadlock permanently.
        var params = [_]c.mpv_render_param{
            .{ .type = c.MPV_RENDER_PARAM_API_TYPE, .data = @ptrCast(@constCast(c.MPV_RENDER_API_TYPE_OPENGL)) },
            .{ .type = c.MPV_RENDER_PARAM_OPENGL_INIT_PARAMS, .data = &gl_init },
            .{ .type = c.MPV_RENDER_PARAM_INVALID, .data = null },
        };
        if (c.mpv_render_context_create(&core.render_ctx, core.client, &params) < 0) return .render_init_failed;
        c.mpv_render_context_set_update_callback(core.render_ctx, onRenderUpdate, core);
    }

    _ = c.mpv_request_log_messages(core.main, "no");
    c.mpv_set_wakeup_callback(core.client, onWakeup, core);
    core.event_thread = std.Thread.spawn(.{ .stack_size = 1024 * 1024 }, eventLoop, .{core.main}) catch
        return .thread_failed;

    for (std.meta.tags(Collection)) |collection| {
        _ = c.mpv_observe_property(core.client, @intFromEnum(collection), collection.property(), collection.format());
    }
    return .ok;
}

/// Drains queued client events, invoking the callbacks for each. Waits up to `timeout`
/// seconds for the first one (0 = don't wait).
export fn implay_mpv_pump(core: *Core, timeout: f64) void {
    while (true) {
        const event = c.mpv_wait_event(core.client, timeout);
        if (event.*.event_id == c.MPV_EVENT_NONE) break;
        core.dispatch(event);
    }
}

// Commands

/// Queues simple whitespace-delimited commands without waiting for the core (this can be
/// called on Slint's render thread). Quoted, escaped, chained or expanded commands are run
/// synchronously through mpv's own parser.
export fn implay_mpv_command(core: *Core, args: [*:0]const u8) c_int {
    var arena: std.heap.ArenaAllocator = .init(allocator);
    defer arena.deinit();
    const split = parse.splitCommand(arena.allocator(), std.mem.span(args)) catch |err| return switch (err) {
        error.Empty => c.MPV_ERROR_INVALID_PARAMETER,
        error.OutOfMemory => c.MPV_ERROR_NOMEM,
    };
    const argv = split orelse return c.mpv_command_string(core.client, args);
    return c.mpv_command_async(core.client, 0, @ptrCast(argv.ptr));
}

export fn implay_mpv_command_string(core: *Core, args: [*:0]const u8) c_int {
    return c.mpv_command_string(core.client, args);
}

export fn implay_mpv_command_async(core: *Core, args: [*c][*c]const u8) c_int {
    return c.mpv_command_async(core.client, 0, args);
}

// Properties and options

export fn implay_mpv_get_property(core: *Core, name: [*:0]const u8, format: c.mpv_format, data: ?*anyopaque) c_int {
    return c.mpv_get_property(core.client, name, format, data);
}

/// Returns an mpv-owned string (release it with implay_mpv_free) or null.
export fn implay_mpv_get_property_string(core: *Core, name: [*:0]const u8) [*c]u8 {
    return c.mpv_get_property_string(core.client, name);
}

export fn implay_mpv_free(data: ?*anyopaque) void {
    c.mpv_free(data);
}

export fn implay_mpv_set_property_async(core: *Core, name: [*:0]const u8, format: c.mpv_format, data: ?*anyopaque) c_int {
    return c.mpv_set_property_async(core.client, 0, name, format, data);
}

export fn implay_mpv_set_option(core: *Core, name: [*:0]const u8, format: c.mpv_format, data: ?*anyopaque) c_int {
    return c.mpv_set_option(core.client, name, format, data);
}

export fn implay_mpv_set_option_string(core: *Core, name: [*:0]const u8, value: [*:0]const u8) c_int {
    return c.mpv_set_option_string(core.client, name, value);
}

export fn implay_mpv_observe_property(core: *Core, name: [*:0]const u8, format: c.mpv_format) c_int {
    return c.mpv_observe_property(core.client, 0, name, format);
}

export fn implay_mpv_request_log_messages(core: *Core, level: [*:0]const u8) c_int {
    return c.mpv_request_log_messages(core.client, level);
}

export fn implay_mpv_load_config_file(core: *Core, path: [*:0]const u8) c_int {
    return c.mpv_load_config_file(core.client, path);
}

// Rendering

export fn implay_mpv_render(core: *Core, w: c_int, h: c_int, fbo: c_int, flip: bool) void {
    const ctx = core.render_ctx orelse return;
    var flip_y: c_int = @intFromBool(flip);
    var target: c.mpv_opengl_fbo = .{ .fbo = fbo, .w = w, .h = h, .internal_format = 0 };
    var params = [_]c.mpv_render_param{
        .{ .type = c.MPV_RENDER_PARAM_OPENGL_FBO, .data = &target },
        .{ .type = c.MPV_RENDER_PARAM_FLIP_Y, .data = &flip_y },
        .{ .type = c.MPV_RENDER_PARAM_INVALID, .data = null },
    };
    _ = c.mpv_render_context_render(ctx, &params);
}

export fn implay_mpv_want_render(core: *Core) bool {
    const ctx = core.render_ctx orelse return false;
    return (c.mpv_render_context_update(ctx) & c.MPV_RENDER_UPDATE_FRAME) != 0;
}

export fn implay_mpv_report_swap(core: *Core) void {
    if (core.render_ctx) |ctx| c.mpv_render_context_report_swap(ctx);
}

// Errors

export fn implay_mpv_error_string(error_code: c_int) [*:0]const u8 {
    return c.mpv_error_string(error_code);
}

export fn implay_mpv_status_string(status: Status) [*:0]const u8 {
    return switch (status) {
        .ok => "success",
        .create_failed => "could not create mpv handle",
        .client_failed => "could not create mpv client",
        .set_wid_failed => "could not set mpv wid",
        .init_failed => "could not initialize mpv context",
        .render_init_failed => "failed to initialize mpv GL context",
        .thread_failed => "could not start mpv event thread",
        .option_failed => "could not set mpv option",
    };
}

// Headless playback (--o=, --no-video): no window, no render context.

export fn implay_mpv_run_headless(
    options: ?[*]const Option,
    option_count: usize,
    paths: ?[*]const [*:0]const u8,
    path_count: usize,
    failed_option: *usize,
    mpv_error: *c_int,
) Status {
    const ctx = c.mpv_create() orelse return .create_failed;
    defer c.mpv_terminate_destroy(ctx);

    if (options) |opts| for (opts[0..option_count], 0..) |option, i| {
        const err = c.mpv_set_option_string(ctx, option.name, option.value);
        if (err < 0) {
            failed_option.* = i;
            mpv_error.* = err;
            return .option_failed;
        }
    };
    if (c.mpv_initialize(ctx) < 0) return .init_failed;

    if (paths) |files| for (files[0..path_count]) |path| {
        var cmd = [_:null]?[*:0]const u8{ "loadfile", path, "append-play" };
        _ = c.mpv_command(ctx, @ptrCast(&cmd));
    };
    while (c.mpv_wait_event(ctx, -1).*.event_id != c.MPV_EVENT_SHUTDOWN) {}
    return .ok;
}
