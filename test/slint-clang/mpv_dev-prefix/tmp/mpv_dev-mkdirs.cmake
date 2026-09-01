# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file LICENSE.rst or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "C:/Users/admin/Documents/GitHub/ImPlay-clang/out/build/slint-clang/mpv_dev-prefix/src/mpv_dev")
  file(MAKE_DIRECTORY "C:/Users/admin/Documents/GitHub/ImPlay-clang/out/build/slint-clang/mpv_dev-prefix/src/mpv_dev")
endif()
file(MAKE_DIRECTORY
  "C:/Users/admin/Documents/GitHub/ImPlay-clang/out/build/slint-clang/mpv_dev-prefix/src/mpv_dev-build"
  "C:/Users/admin/Documents/GitHub/ImPlay-clang/out/build/slint-clang/mpv_dev-prefix"
  "C:/Users/admin/Documents/GitHub/ImPlay-clang/out/build/slint-clang/mpv_dev-prefix/tmp"
  "C:/Users/admin/Documents/GitHub/ImPlay-clang/out/build/slint-clang/mpv_dev-prefix/src/mpv_dev-stamp"
  "C:/Users/admin/Documents/GitHub/ImPlay-clang/out/build/slint-clang/mpv_dev-prefix/src"
  "C:/Users/admin/Documents/GitHub/ImPlay-clang/out/build/slint-clang/mpv_dev-prefix/src/mpv_dev-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/admin/Documents/GitHub/ImPlay-clang/out/build/slint-clang/mpv_dev-prefix/src/mpv_dev-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/admin/Documents/GitHub/ImPlay-clang/out/build/slint-clang/mpv_dev-prefix/src/mpv_dev-stamp${cfgdir}") # cfgdir has leading slash
endif()
