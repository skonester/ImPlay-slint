# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file LICENSE.rst or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

if("C:/Users/admin/Documents/GitHub/ImPlay-clang/mpv-dev-x86_64-20260503-git-948c86d24c.7z" STREQUAL "")
  message(FATAL_ERROR "LOCAL can't be empty")
endif()

if(NOT EXISTS "C:/Users/admin/Documents/GitHub/ImPlay-clang/mpv-dev-x86_64-20260503-git-948c86d24c.7z")
  message(FATAL_ERROR "File not found: C:/Users/admin/Documents/GitHub/ImPlay-clang/mpv-dev-x86_64-20260503-git-948c86d24c.7z")
endif()

if("SHA256" STREQUAL "")
  message(WARNING "File cannot be verified since no URL_HASH specified")
  return()
endif()

if("2d88f4a6bd63a559814e6fd28a0d2e286ee381028a2d22efa4452afd4252000e" STREQUAL "")
  message(FATAL_ERROR "EXPECT_VALUE can't be empty")
endif()

message(VERBOSE "verifying file...
     file='C:/Users/admin/Documents/GitHub/ImPlay-clang/mpv-dev-x86_64-20260503-git-948c86d24c.7z'")

file("SHA256" "C:/Users/admin/Documents/GitHub/ImPlay-clang/mpv-dev-x86_64-20260503-git-948c86d24c.7z" actual_value)

if(NOT "${actual_value}" STREQUAL "2d88f4a6bd63a559814e6fd28a0d2e286ee381028a2d22efa4452afd4252000e")
  message(FATAL_ERROR "error: SHA256 hash of
  C:/Users/admin/Documents/GitHub/ImPlay-clang/mpv-dev-x86_64-20260503-git-948c86d24c.7z
does not match expected value
  expected: '2d88f4a6bd63a559814e6fd28a0d2e286ee381028a2d22efa4452afd4252000e'
    actual: '${actual_value}'
")
endif()

message(VERBOSE "verifying file... done")
