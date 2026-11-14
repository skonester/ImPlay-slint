<p align="center">
  <img src="resources/icon.png" alt="ImPlay icon" width="96">
</p>

<h1 align="center">ImPlay-Slint</h1>

<p align="center">
  A fast, modern desktop video player built on <a href="https://mpv.io/">mpv</a>, with an interface made in <a href="https://slint.dev/">Slint</a>.
</p>

<p align="center">
  <a href="https://github.com/skonester/ImPlay-slint/releases"><img alt="Latest release" src="https://img.shields.io/github/v/release/skonester/ImPlay-slint?include_prereleases&label=release"></a>
  <a href="https://github.com/skonester/ImPlay-slint/actions/workflows/release-slint.yml"><img alt="Release build" src="https://github.com/skonester/ImPlay-slint/actions/workflows/release-slint.yml/badge.svg"></a>
  <a href="LICENSE.txt"><img alt="License: GPL-2.0-only" src="https://img.shields.io/badge/license-GPL--2.0--only-blue"></a>
  <img alt="Platform: Windows x64" src="https://img.shields.io/badge/platform-Windows%20x64-0078D6?logo=windows">
  <br>
  <img alt="C++20" src="https://img.shields.io/badge/C%2B%2B-20-00599C?logo=cplusplus">
  <img alt="Zig 0.16" src="https://img.shields.io/badge/Zig-0.16-F7A41D?logo=zig&logoColor=white">
  <img alt="Slint 1.17.1" src="https://img.shields.io/badge/Slint-1.17.1-2379F4">
  <img alt="Powered by libmpv" src="https://img.shields.io/badge/powered%20by-libmpv-691F69">
  <img alt="OpenGL" src="https://img.shields.io/badge/rendering-OpenGL-5586A4?logo=opengl&logoColor=white">
</p>

---

ImPlay-Slint is a Slint rewrite of the [ImPlay](https://github.com/tsl0922/ImPlay)
media player. mpv does the playback work: it plays almost any video or audio
file, stream or disc. ImPlay puts a clean desktop interface on top: menus,
panels and controls that float over the video and stay responsive while it
plays.

## Download

Get the latest build from the
**[Releases page](https://github.com/skonester/ImPlay-slint/releases)**. Builds
are marked as pre-releases for now.

| File | What it is |
| --- | --- |
| `ImPlay-Slint-<version>-win64-setup.exe` | Installer |
| `ImPlay-Slint-<version>-win64.zip` | Portable: unzip anywhere and run `ImPlay.exe` |

Both include everything needed to run, plus `yt-dlp` and `deno` so that
YouTube and other web links play directly.

## Features

**Playback**
- Plays anything mpv plays: local files, folders, URLs, DVD/Blu-ray discs and ISOs
- Playlist with shuffle, reordering, loop file / loop playlist and A-B loop
- Chapters, frame stepping, speed control and quick seeking
- Resume where you left off (optional)

**Picture and sound**
- Video, audio and subtitle track selection, with subtitle and audio delay
- Brightness, contrast, gamma, hue and saturation
- Aspect ratio, rotation, zoom, pan and scan
- 10-band audio equalizer with presets, and audio output device selection
- Hardware decoding, on by default (see [below](#how-it-works))
- Deinterlacing and screenshots

**Interface**
- Right-click menu, command palette and quick-view panels for playlist, video, audio and subtitles
- Light and dark themes, UI scaling, and custom fonts
- English, Italian, Ukrainian and Simplified Chinese
- Drag and drop, recent files, and open from clipboard
- Always on top, borderless window, window scale presets
- Single-instance mode: opening a file sends it to the window that's already open
- Debug console with the live mpv log and a command line

**For mpv users**
- Takes mpv command-line options (`ImPlay --fs --sub-file=subs.srt movie.mkv`)
- Can use your own `mpv.conf`, `input.conf` and mpv profiles
- Runs without a window for audio-only or output-only jobs (`--no-video`, `--o=`)

## How it works

### Drawing the picture: OpenGL

All drawing goes through **OpenGL**. Slint draws the interface with OpenGL,
and mpv draws each video frame into an OpenGL texture that Slint displays
underneath the controls. This integration uses libmpv's OpenGL render API.

mpv draws directly into that texture during Slint's `BeforeRendering` callback,
using the same GL context as the interface. There is one video texture, with no
intermediate frame queue, cross-context fence waits, or extra GPU copy. Frame
callbacks request a redraw; mpv's render call does not wait for a future timestamp.
Scaling uses mpv's normal defaults, with hardware decoding enabled when supported.

### Decoding the video: your GPU's video chip

Decoding is a separate step that happens before drawing. A video file stores
compressed data (H.264, HEVC, AV1 and so on) that has to be unpacked into
plain pictures before anything can be shown.

- **Software decoding:** the CPU unpacks every frame. It works everywhere,
  but 4K or HDR video can use a lot of CPU time.
- **Hardware decoding:** the GPU's built-in video decoder does the work. On
  NVIDIA cards that chip is called **NVDEC**; Intel has Quick Sync and AMD has
  VCN. It is separate from the part of the GPU that runs games, so it barely
  loads the CPU or the rest of the GPU.

ImPlay starts with `hwdec=auto-safe`. mpv tries the hardware methods it knows
to be reliable on your system, such as `d3d11va`, `dxva2` or NVIDIA's `nvdec`,
and quietly falls back to the CPU when a file or GPU isn't supported. The
decoded frames are then handed to OpenGL for drawing, either straight from GPU
memory or through a copy (the `-copy` methods).

To see which method a video is using, open **Tools > Debug console** and look
for the line `Using hardware decoding (...)`, or turn on **Show statistics**.
To switch hardware decoding on or off, press `Ctrl+H` or use **Toggle hardware
decoding** in the right-click menu. To force a method, add it to the
`mpv.conf` in the configuration folder (**Settings > Open configuration
folder**), for example:

```ini
hwdec=nvdec
```

### Under the hood

| Part | Job |
| --- | --- |
| **Slint** (`ui/`) | The interface: windows, menus, panels and controls |
| **C++** (`source/`, `include/`) | Connects the interface to the player; settings, recent files, file dialogs |
| **Zig** (`source/zig/`) | The only code that talks to libmpv directly: events, commands and the render context |
| **libmpv** | Opening files, decoding, audio, subtitles and drawing video |

[architecture.md](architecture.md) has the full map and the threading rules.

## Building from source

You'll need:

- Windows x64
- CMake 3.24 or newer, and Ninja
- Clang (clang-cl) or MSVC, with C++20
- Zig 0.16 or newer
- Rust, to build Slint

The libmpv development files (DLL, import library and headers) come with the
repository as `mpv-dev-x86_64-20261111-git-bcde6b93cc.7z` from the
[20261111 Windows build](https://github.com/shinchiro/mpv-winbuild-cmake/releases/tag/20261111).
CMake verifies its SHA-256 and unpacks it automatically. The first configure also downloads Slint, {fmt} and
nlohmann/json, so it needs an internet connection.

```powershell
cmake --preset x64-clang-release
cmake --build --preset x64-clang-release
```

Use `x64-msvc-release` for MSVC. The program is written to
`out/build/<preset>/ImPlay.exe`.

The original ImGui interface is still kept for comparison. Build it with the
`x64-clang-imgui-release` or `x64-msvc-imgui-release` preset.

To run the Zig core's tests on their own:

```powershell
zig build test -Dmpv-include=<folder containing mpv/client.h>
```

## Credits and license

ImPlay-Slint is based on [ImPlay](https://github.com/tsl0922/ImPlay) by tsl0922,
and its Slint interface is based on Vayou (MIT). The project is licensed under
the **GNU GPL v2 only**. Bundled libraries keep their own licenses; see
[CREDITS.md](CREDITS.md) and [LICENSE.txt](LICENSE.txt).

Release history is in [CHANGELOG.md](CHANGELOG.md).
