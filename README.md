<p align="center">
  <img src="resources/icon.png" alt="ImPlay icon" width="96">
</p>

<h1 align="center">ImPlay-Slint</h1>

<p align="center">
  A fast, modern desktop video player for Windows.
</p>

<p align="center">
  <a href="https://github.com/skonester/ImPlay-slint/releases"><img alt="Latest release" src="https://img.shields.io/github/v/release/skonester/ImPlay-slint?include_prereleases&label=release"></a>
  <a href="https://github.com/skonester/ImPlay-slint/actions/workflows/release-slint.yml"><img alt="Release build" src="https://github.com/skonester/ImPlay-slint/actions/workflows/release-slint.yml/badge.svg"></a>
  <a href="LICENSE.txt"><img alt="License: GPL-2.0-only" src="https://img.shields.io/badge/license-GPL--2.0--only-blue"></a>
  <img alt="Platform: Windows x64" src="https://img.shields.io/badge/platform-Windows%20x64-0078D6?logo=windows">
</p>

---

ImPlay-Slint is a simple desktop player for video, music, streams, and discs.
It is based on [ImPlay](https://github.com/tsl0922/ImPlay) and uses
[mpv](https://mpv.io/) to play media.

## Download

Download the latest version from the
[Releases page](https://github.com/skonester/ImPlay-slint/releases).
Releases are currently marked as pre-releases.

| Download | Description |
| --- | --- |
| `ImPlay-Slint-<version>-win64-setup.exe` | Installs ImPlay on Windows |
| `ImPlay-Slint-<version>-win64.zip` | Portable version; unzip it and run `ImPlay.exe` |

The downloads include everything needed to run the player. They also include
`yt-dlp` and `deno` for playing supported web links.

## What you can do

- Play local files, folders, streams, DVDs, Blu-ray discs, and ISO files.
- Create playlists, shuffle or reorder items, repeat a file or playlist, and
  make A-B loops.
- Choose video, audio, and subtitle tracks.
- Adjust brightness, contrast, color, aspect ratio, rotation, zoom, and audio
  delay.
- Use the audio equalizer and choose an audio output device.
- Take screenshots, step through video frames, change playback speed, and
  resume previous playback.
- Use light or dark themes, custom fonts, UI scaling, and several languages.
- Drag files into the window, open recent files, or open a path from the
  clipboard.
- Keep the window on top, use a borderless window, or run in single-instance
  mode.
- Open the debug console when you need playback information or mpv commands.

## Useful options

ImPlay accepts many [mpv command-line options](https://mpv.io/manual/stable/).
For example:

```text
ImPlay.exe --fs --sub-file=subs.srt movie.mkv
```

You can also use your own `mpv.conf`, `input.conf`, and mpv profiles. Open
**Settings > Open configuration folder** to find the configuration folder.

For audio-only or other command-line jobs, use options such as `--no-video`.

## Troubleshooting

Hardware video decoding is enabled automatically when it is safe to use. If a
video does not play correctly, press `Ctrl+H` or choose **Toggle hardware
decoding** from the right-click menu to try software decoding instead.

For more information, open **Tools > Debug console**. The console shows mpv's
live log and lets you enter mpv commands.

## Build from source

Building ImPlay is intended for developers. The project currently targets
Windows x64 and uses CMake, Ninja, Clang or MSVC, Zig, and Rust.

```powershell
cmake --preset x64-clang-release
cmake --build --preset x64-clang-release
```

The executable is written to
`out/build/x64-clang-release/ImPlay.exe`. Use the `x64-msvc-release` presets
when building with MSVC.

The full build map, frontend differences, rendering details, and contributor
guidance are in [architecture.md](architecture.md).

## Credits and license

ImPlay-Slint is based on [ImPlay](https://github.com/tsl0922/ImPlay) by tsl0922,
and its interface includes work based on Vayou (MIT). The project is licensed
under the **GNU GPL v2 only**. Bundled libraries keep their own licenses; see
[CREDITS.md](CREDITS.md) and [LICENSE.txt](LICENSE.txt).

Release history is in [CHANGELOG.md](CHANGELOG.md).
