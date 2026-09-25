// ImPlay-Slint. Copyright (c) 2026 Skonester.
// SPDX-License-Identifier: GPL-2.0-only

//! Builds the Zig mpv core (source/zig) as a static library. CMake is still the
//! top-level build and runs this for you; direct use:
//!
//!   zig build -Dtarget=x86_64-windows-msvc -Dmpv-include=<dir containing mpv/client.h>
//!   zig build test -Dmpv-include=<dir>

const std = @import("std");

pub fn build(b: *std.Build) void {
    const target = b.standardTargetOptions(.{});
    const optimize = b.standardOptimizeOption(.{});
    const mpv_include = b.option([]const u8, "mpv-include", "Directory containing mpv/client.h (default: system include path)");

    const mpv_c = b.addTranslateC(.{
        .root_source_file = b.path("source/zig/mpv_c.h"),
        .target = target,
        .optimize = optimize,
    });
    if (mpv_include) |dir| mpv_c.addIncludePath(.{ .cwd_relative = dir });
    const imports: []const std.Build.Module.Import = &.{.{ .name = "c", .module = mpv_c.createModule() }};

    const lib = b.addLibrary(.{
        .name = "implay_mpv",
        .linkage = .static,
        .root_module = b.createModule(.{
            .root_source_file = b.path("source/zig/mpv_core.zig"),
            .target = target,
            .optimize = optimize,
            .link_libc = true,
            .imports = imports,
        }),
    });
    // The C++ toolchain doesn't supply Zig's runtime helpers (e.g. 128-bit arithmetic).
    lib.bundle_compiler_rt = true;
    b.installArtifact(lib);

    const tests = b.addTest(.{
        .root_module = b.createModule(.{
            .root_source_file = b.path("source/zig/mpv_parse.zig"),
            .target = target,
            .optimize = optimize,
            .link_libc = true,
            .imports = imports,
        }),
    });
    b.step("test", "Run the mpv core unit tests").dependOn(&b.addRunArtifact(tests).step);
}
