# Dear ImGui

Vendored from [v1.93.0-docking](https://github.com/ocornut/imgui/tree/v1.93.0-docking),
commit `4e02e84cbb85d48881388e7090c2dfa1708c02a1`.

The core, GLFW/OpenGL3 backends, FreeType integration, and ImGui's stb headers
all come from that tag. Headers live in `include/` and sources in `source/`.

Local changes:

- `imconfig.h` enables `IMGUI_ENABLE_FREETYPE` and `IMGUI_DEFINE_MATH_OPERATORS`.
- `imgui_draw.cpp` includes `imgui_freetype.h` from the flattened include directory.

The CMake file, embedded fonts, and standalone `stb_image.h` are maintained by
ImPlay. When updating ImGui, update its core and backends together and preserve
the local configuration above.
