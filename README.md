[![GitHub Releases](https://img.shields.io/github/downloads/skonester/ImPlay-clang/total)](https://github.com/skonester/ImPlay-clang/releases)
![GitHub](https://img.shields.io/github/license/skonester/ImPlay-clang)
![Version](https://img.shields.io/badge/version-9.0.0-blue)

# ImPlay-Clang

[Features](#key-features) | [Build](#windows-build-system) | [Architecture](architecture.md) | [License](LICENSE.txt)

**ImPlay-Clang** is a fork of ImPlay, optimized for performance and updated for a modern Windows toolchain. It is a cross-platform desktop media player using [mpv](https://mpv.io) as the playback engine and [Slint](https://slint.dev) for its declarative interface.

This repository also serves as a lab for testing new features in C++, .NET, and F#.

## Key Features

### Core & Performance
- **mpv Engine**: Full compatibility with [mpv features](https://mpv.io/manual).
- **Clang-CL Build**: Compiled with LLVM/Clang-CL on Windows using C++20.
- **Rendering**: Uses libmpv's OpenGL render API for zero-copy composition with Slint.
- **Hardware Decoding**: Supports GPU-accelerated video decoding.

### Interface
- **Slint UI**: A responsive native interface using visual components adapted from Vayou and an ImPlay-owned feature model.
- **Video Compositing**: libmpv renders directly into an OpenGL texture displayed by Slint.
- **Media Controls**: Original ImPlay playback, frame, chapter, loop, audio, video, subtitle, playlist, tool, and profile actions.
- **Native Workflows**: Files, folders, URLs, clipboard media, discs, ISO images, recent history, external subtitles, fonts, and config-folder access.

### Extensibility
- **Scripting**: Supports Lua and Javascript scripts.
- **User Scripts**: Compatible with common mpv scripts (osc, thumbfast, etc.).
- **IPC**: Support for single-instance mode via IPC.

---

## Windows Build System

The project uses a PowerShell-based build system (`build-windows-clang.ps1`) for Windows development. It automates:

1.  **Prerequisite Checks**: Verifies Disk Space, Network, and Permissions.
2.  **Environment Setup**: Locates and configures VS 2022, LLVM/Clang-CL, and Ninja.
3.  **Dependencies**: Uses `FetchContent` to manage Slint, `fmt`, and `nlohmann_json`.
4.  **Verification**: Checks build output and packaging.

### Building on Windows
```powershell
.\build-windows-clang.ps1 -Preset x64-clang-release -Package -Fresh
```

---

## Installation

- **Binaries**: Download the latest release from the [Releases](https://github.com/skonester/ImPlay-clang/releases) page.
- **Source**: Clone the repository and use the `build-windows-clang.ps1` script for local builds.

---

## Research & Development Lab

The `experimental` directory contains prototypes for future features and architectural changes.

### 1. .NET Core (`experimental/ImPlay`)
Prototyping a modular backend in C#:
- **Casting**: DLNA and Chromecast support via `DlnaCastService`.
- **Subtitles**: Online subtitle searching and parsing.
- **Services**: Decoupled playback and settings logic.

### 2. F# Avalonia Port (`experimental/implayfsharpavalonia`)
An experimental UI port using F# and Avalonia:
- **Functional Logic**: Using F# to manage playback states.
- **Avalonia Rendering**: Native MPV hosting within an Avalonia window.
- **Custom Controls**: F# implementations of audio bars, seek bars, and various dialogs.

---

## Screenshots

### Legacy ImGui interface
![screenshot](screenshot/1.jpg)

### Command Palette
![screenshot](screenshot/2.jpg)

### Debug View
![screenshot](screenshot/3.jpg)

---

## Credits

ImPlay uses the following projects:
- [mpv](https://mpv.io) & [Slint](https://slint.dev)
- [Vayou](ui/VAYOU-LICENSE) UI components and visual design (MIT)
- [glad](https://glad.dav1d.de)
- [fmt](https://fmt.dev) & [nlohmann/json](https://json.nlohmann.me)
- [natsort](https://github.com/sourcefrog/natsort)
- [nativefiledialog-extended](https://github.com/btzy/nativefiledialog-extended)
- [libromfs](https://github.com/WerWolv/libromfs)

---

## License
Distributed under the [GPLv2](LICENSE.txt). 

Original work © 2022-2025 tsl0922. 
Modernization and fork optimizations © 2026 Skonester.
