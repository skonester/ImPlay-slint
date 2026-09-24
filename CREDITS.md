# Credits

This repository builds two frontends of the ImPlay media player. The project as a
whole is licensed under the **GNU GPL v2 only** ([LICENSE.txt](LICENSE.txt)),
except where noted below.

## ImPlay (upstream) — GPL-2.0-only

Copyright (c) 2022-2025 tsl0922 (Shuanglei Tao) and ImPlay contributors
<https://github.com/tsl0922/ImPlay>

The original ImPlay C++ code, used by both frontends:

- The ImGui build in [`imgui/`](imgui/): the ImGui player, views, theme and helpers.
- The shared core in [`source/`](source/) and [`include/`](include/): mpv wrapper,
  config, language loader, file dialog helpers, utilities and `main`.
- Resources in [`resources/`](resources/) (icon, translations, mpv config files).
  `resources/romfs/mpv/osc.lua` is based on mpv's on-screen controller script and
  is covered by mpv's license.

Library updates and fixes by Skonester, 2026.

## ImPlay-Slint — GPL-2.0-only

Copyright (c) 2026 Skonester
<https://github.com/skonester/implay-clang>

The Slint port of ImPlay: the Slint window/integration layer
([`source/window.cpp`](source/window.cpp), [`include/window.h`](include/window.h)),
the Slint build setup, and the side-by-side ImGui/Slint build.

## Slint UI (Vayou) — MIT

Copyright (c) 2026 Vayou contributors

The Slint UI files in [`ui/`](ui/) are based on Vayou and licensed under the MIT
License; see [`ui/VAYOU-LICENSE`](ui/VAYOU-LICENSE).

## Third-party libraries

| Library | Used by | License |
|---|---|---|
| [mpv](https://mpv.io) (libmpv) | both | GPL-2.0-or-later |
| [Slint](https://slint.dev) | Slint build | Slint Royalty-free License 2.0 (also offered under GPL-3.0-only or commercial) |
| [Dear ImGui](https://github.com/ocornut/imgui) | ImGui build | MIT |
| [GLFW](https://www.glfw.org) | ImGui build | zlib |
| [FreeType](https://freetype.org) | ImGui build | FreeType License (FTL) or GPL-2.0-or-later |
| [{fmt}](https://github.com/fmtlib/fmt) | both | MIT |
| [nlohmann/json](https://github.com/nlohmann/json) | both | MIT |
| [glad](https://github.com/Dav1dde/glad) | both | MIT |
| [inipp](https://github.com/mcmtroffaes/inipp) | both | MIT |
| [libromfs](https://github.com/WerWolv/libromfs) | both | MIT |
| [nativefiledialog](https://github.com/mlabbe/nativefiledialog) | both | zlib |
| [natsort (strnatcmp)](https://github.com/sourcefrog/natsort) | both | zlib |

Each vendored library keeps its own license file under `third_party/` or
`imgui/third_party/`. {fmt}, nlohmann/json, FreeType and Slint are downloaded at
configure time.
