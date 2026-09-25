// ImPlay-Slint. Copyright (c) 2026 Skonester.
// Based on ImPlay, Copyright (c) 2022-2025 tsl0922 (https://github.com/tsl0922/ImPlay).
// SPDX-License-Identifier: GPL-2.0-only

//! Pure helpers for the mpv core: command splitting and mpv_node / profile-list parsing.
//! Nothing here calls into libmpv, so it is unit-testable without the library.
//! Parsed items borrow strings from the mpv event (or the arena) and are only valid
//! until the next mpv_wait_event call; the C++ side copies them immediately.

const std = @import("std");
const c = @import("c");

const Allocator = std.mem.Allocator;

// Layouts mirror the implay_mpv_* item structs in include/mpv_core.h.

pub const PlayItem = extern struct {
    id: i64 = -1,
    title: ?[*:0]const u8 = null,
    filename: ?[*:0]const u8 = null,
};

pub const ChapterItem = extern struct {
    id: i64 = -1,
    title: ?[*:0]const u8 = null,
    time: f64 = 0,
};

pub const TrackItem = extern struct {
    id: i64 = -1,
    type: ?[*:0]const u8 = null,
    title: ?[*:0]const u8 = null,
    lang: ?[*:0]const u8 = null,
    selected: bool = false,
};

pub const AudioDevice = extern struct {
    name: ?[*:0]const u8 = null,
    description: ?[*:0]const u8 = null,
};

pub const BindingItem = extern struct {
    section: ?[*:0]const u8 = null,
    key: ?[*:0]const u8 = null,
    cmd: ?[*:0]const u8 = null,
    comment: ?[*:0]const u8 = null,
    priority: i64 = 0,
    weak: bool = false,
};

/// Same characters std::istringstream treats as whitespace in the "C" locale.
const whitespace = " \t\n\x0b\x0c\r";
const osd_prefixes = [_][]const u8{ "osd-auto", "no-osd", "osd-bar", "osd-msg" };
const hidden_profiles = [_][]const u8{ "builtin-pseudo-gui", "encoding", "libmpv", "pseudo-gui" };

/// Splits a simple menu/hotkey command into a null-terminated argv for mpv_command_async,
/// prefixing `osd-auto` unless the command already starts with an OSD prefix.
/// Returns null when the command needs mpv's own parser (quotes, escapes, chaining or
/// property expansion) and error.Empty when there are no words.
pub fn splitCommand(arena: Allocator, args: []const u8) error{ Empty, OutOfMemory }!?[:null]?[*:0]const u8 {
    if (std.mem.indexOfAny(u8, args, "\"'\\;$") != null) return null;

    var words: std.ArrayList(?[*:0]const u8) = .empty;
    var it = std.mem.tokenizeAny(u8, args, whitespace);
    while (it.next()) |word| {
        if (words.items.len == 0 and !isOneOf(word, &osd_prefixes)) try words.append(arena, "osd-auto");
        try words.append(arena, try arena.dupeZ(u8, word));
    }
    if (words.items.len == 0) return error.Empty;
    return try words.toOwnedSliceSentinel(arena, null);
}

pub fn parsePlaylist(arena: Allocator, node: *const c.mpv_node) Allocator.Error!?[]PlayItem {
    const entries = array(node) orelse return null;
    const items = try arena.alloc(PlayItem, entries.len);
    for (items, entries, 0..) |*item, *entry, i| {
        item.* = .{ .id = @intCast(i) };
        var fields = mapFields(entry);
        while (fields.next()) |field| {
            if (field.is("title")) {
                item.title = string(field.value);
            } else if (field.is("filename")) {
                item.filename = string(field.value);
            }
        }
    }
    return items;
}

pub fn parseChapters(arena: Allocator, node: *const c.mpv_node) Allocator.Error!?[]ChapterItem {
    const entries = array(node) orelse return null;
    const items = try arena.alloc(ChapterItem, entries.len);
    for (items, entries, 0..) |*item, *entry, i| {
        item.* = .{ .id = @intCast(i) };
        var fields = mapFields(entry);
        while (fields.next()) |field| {
            if (field.is("title")) {
                item.title = string(field.value);
            } else if (field.is("time")) {
                item.time = double(field.value) orelse item.time;
            }
        }
    }
    return items;
}

pub fn parseTracks(arena: Allocator, node: *const c.mpv_node) Allocator.Error!?[]TrackItem {
    const entries = array(node) orelse return null;
    const items = try arena.alloc(TrackItem, entries.len);
    for (items, entries) |*item, *entry| {
        item.* = .{};
        var fields = mapFields(entry);
        while (fields.next()) |field| {
            if (field.is("id")) {
                item.id = int64(field.value) orelse item.id;
            } else if (field.is("type")) {
                item.type = string(field.value);
            } else if (field.is("title")) {
                item.title = string(field.value);
            } else if (field.is("lang")) {
                item.lang = string(field.value);
            } else if (field.is("selected")) {
                item.selected = flag(field.value) orelse item.selected;
            }
        }
    }
    return items;
}

pub fn parseAudioDevices(arena: Allocator, node: *const c.mpv_node) Allocator.Error!?[]AudioDevice {
    const entries = array(node) orelse return null;
    const items = try arena.alloc(AudioDevice, entries.len);
    for (items, entries) |*item, *entry| {
        item.* = .{};
        var fields = mapFields(entry);
        while (fields.next()) |field| {
            if (field.is("name")) {
                item.name = string(field.value);
            } else if (field.is("description")) {
                item.description = string(field.value);
            }
        }
    }
    return items;
}

pub fn parseBindings(arena: Allocator, node: *const c.mpv_node) Allocator.Error!?[]BindingItem {
    const entries = array(node) orelse return null;
    const items = try arena.alloc(BindingItem, entries.len);
    for (items, entries) |*item, *entry| {
        item.* = .{};
        var fields = mapFields(entry);
        while (fields.next()) |field| {
            if (field.is("section")) {
                item.section = string(field.value);
            } else if (field.is("key")) {
                item.key = string(field.value);
            } else if (field.is("cmd")) {
                item.cmd = string(field.value);
            } else if (field.is("comment")) {
                item.comment = string(field.value);
            } else if (field.is("priority")) {
                item.priority = int64(field.value) orelse item.priority;
            } else if (field.is("is_weak")) {
                item.weak = flag(field.value) orelse item.weak;
            }
        }
    }
    return items;
}

/// Parses the JSON `profile-list` property, dropping mpv's internal profiles.
pub fn parseProfiles(arena: Allocator, json: []const u8) ![][*:0]const u8 {
    const Profile = struct { name: []const u8 };
    const profiles = try std.json.parseFromSliceLeaky([]const Profile, arena, json, .{
        .ignore_unknown_fields = true,
    });
    var names: std.ArrayList([*:0]const u8) = .empty;
    for (profiles) |profile| {
        if (isOneOf(profile.name, &hidden_profiles)) continue;
        try names.append(arena, try arena.dupeZ(u8, profile.name));
    }
    return names.items;
}

fn isOneOf(word: []const u8, comptime set: []const []const u8) bool {
    inline for (set) |candidate| {
        if (std.mem.eql(u8, word, candidate)) return true;
    }
    return false;
}

fn nodeList(node: *const c.mpv_node, format: c.mpv_format) ?*const c.mpv_node_list {
    if (node.format != format) return null;
    return node.u.list;
}

fn array(node: *const c.mpv_node) ?[]const c.mpv_node {
    const list = nodeList(node, c.MPV_FORMAT_NODE_ARRAY) orelse return null;
    if (list.num <= 0) return &.{};
    return list.values[0..@intCast(list.num)];
}

const Field = struct {
    key: [:0]const u8,
    value: *const c.mpv_node,

    fn is(field: Field, key: []const u8) bool {
        return std.mem.eql(u8, field.key, key);
    }
};

const FieldIterator = struct {
    keys: []const [*c]u8 = &.{},
    values: []const c.mpv_node = &.{},
    index: usize = 0,

    fn next(it: *FieldIterator) ?Field {
        if (it.index >= it.keys.len) return null;
        defer it.index += 1;
        return .{ .key = std.mem.span(it.keys[it.index]), .value = &it.values[it.index] };
    }
};

/// Entries that aren't maps simply yield no fields, leaving the item at its defaults.
fn mapFields(node: *const c.mpv_node) FieldIterator {
    const list = nodeList(node, c.MPV_FORMAT_NODE_MAP) orelse return .{};
    if (list.num <= 0) return .{};
    const len: usize = @intCast(list.num);
    return .{ .keys = list.keys[0..len], .values = list.values[0..len] };
}

fn string(node: *const c.mpv_node) ?[*:0]const u8 {
    if (node.format != c.MPV_FORMAT_STRING) return null;
    return @ptrCast(node.u.string);
}

fn int64(node: *const c.mpv_node) ?i64 {
    return if (node.format == c.MPV_FORMAT_INT64) node.u.int64 else null;
}

fn double(node: *const c.mpv_node) ?f64 {
    return if (node.format == c.MPV_FORMAT_DOUBLE) node.u.double_ else null;
}

fn flag(node: *const c.mpv_node) ?bool {
    return if (node.format == c.MPV_FORMAT_FLAG) node.u.flag != 0 else null;
}

// Tests

const testing = std.testing;

fn expectArgv(expected: []const []const u8, actual: [:null]const ?[*:0]const u8) !void {
    try testing.expectEqual(expected.len, actual.len);
    for (expected, actual) |want, got| try testing.expectEqualStrings(want, std.mem.span(got.?));
}

test "splitCommand prefixes osd-auto and splits on whitespace" {
    var arena: std.heap.ArenaAllocator = .init(testing.allocator);
    defer arena.deinit();
    try expectArgv(&.{ "osd-auto", "seek", "10", "relative", "exact" }, (try splitCommand(arena.allocator(), " seek\t10  relative\nexact ")).?);
    try expectArgv(&.{ "no-osd", "cycle", "pause" }, (try splitCommand(arena.allocator(), "no-osd cycle pause")).?);
    try expectArgv(&.{ "osd-auto", "osd-msg-bar" }, (try splitCommand(arena.allocator(), "osd-msg-bar")).?);
}

test "splitCommand defers quoted, escaped, chained and expanded commands to mpv" {
    var arena: std.heap.ArenaAllocator = .init(testing.allocator);
    defer arena.deinit();
    for ([_][]const u8{ "show-text \"hi\"", "show-text 'hi'", "a\\ b", "cycle pause; cycle mute", "show-text ${path}" }) |cmd| {
        try testing.expectEqual(null, try splitCommand(arena.allocator(), cmd));
    }
    try testing.expectError(error.Empty, splitCommand(arena.allocator(), " \t\r\n"));
}

fn testMap(keys: [][*c]u8, values: []c.mpv_node) c.mpv_node_list {
    return .{ .num = @intCast(keys.len), .values = values.ptr, .keys = keys.ptr };
}

fn testString(s: [:0]const u8) c.mpv_node {
    var node = std.mem.zeroes(c.mpv_node);
    node.format = c.MPV_FORMAT_STRING;
    node.u.string = @constCast(s.ptr);
    return node;
}

test "parseTracks reads typed fields and ignores mistyped ones" {
    var id = std.mem.zeroes(c.mpv_node);
    id.format = c.MPV_FORMAT_INT64;
    id.u.int64 = 3;
    var selected = std.mem.zeroes(c.mpv_node);
    selected.format = c.MPV_FORMAT_FLAG;
    selected.u.flag = 1;
    var keys = [_][*c]u8{ @constCast("id"), @constCast("type"), @constCast("title"), @constCast("selected"), @constCast("lang") };
    // "lang" holds an int here: it must be skipped rather than read as a string pointer.
    var values = [_]c.mpv_node{ id, testString("sub"), testString("English"), selected, id };
    var map_list = testMap(&keys, &values);
    var track = std.mem.zeroes(c.mpv_node);
    track.format = c.MPV_FORMAT_NODE_MAP;
    track.u.list = &map_list;
    var not_a_map = testString("bogus");
    var entries = [_]c.mpv_node{ track, not_a_map };
    _ = &not_a_map;
    var array_list: c.mpv_node_list = .{ .num = entries.len, .values = &entries, .keys = null };
    var root = std.mem.zeroes(c.mpv_node);
    root.format = c.MPV_FORMAT_NODE_ARRAY;
    root.u.list = &array_list;

    var arena: std.heap.ArenaAllocator = .init(testing.allocator);
    defer arena.deinit();
    const tracks = (try parseTracks(arena.allocator(), &root)).?;
    try testing.expectEqual(2, tracks.len);
    try testing.expectEqual(3, tracks[0].id);
    try testing.expectEqualStrings("sub", std.mem.span(tracks[0].type.?));
    try testing.expectEqualStrings("English", std.mem.span(tracks[0].title.?));
    try testing.expect(tracks[0].selected);
    try testing.expectEqual(null, tracks[0].lang);
    try testing.expectEqual(-1, tracks[1].id);

    try testing.expectEqual(null, try parseTracks(arena.allocator(), &track));
}

test "parseProfiles drops internal profiles and extra fields" {
    var arena: std.heap.ArenaAllocator = .init(testing.allocator);
    defer arena.deinit();
    const json =
        \\[{"name":"builtin-pseudo-gui","options":[]},{"name":"fast","profile-desc":"x","options":[{"key":"a","value":"b"}]},
        \\ {"name":"libmpv"},{"name":"low-latency"},{"name":"encoding"},{"name":"pseudo-gui"}]
    ;
    const names = try parseProfiles(arena.allocator(), json);
    try testing.expectEqual(2, names.len);
    try testing.expectEqualStrings("fast", std.mem.span(names[0]));
    try testing.expectEqualStrings("low-latency", std.mem.span(names[1]));
    try testing.expectError(error.SyntaxError, parseProfiles(arena.allocator(), "[{]"));
}
