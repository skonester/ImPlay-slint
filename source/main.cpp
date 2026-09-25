// Copyright (c) 2022-2025 tsl0922. Libraries updated, fixes by Skonester 2026. All rights reserved.
// SPDX-License-Identifier: GPL-2.0-only

#include <cstring>
#include <stdexcept>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>
#endif
#include <nlohmann/json.hpp>
#include "helpers/utils.h"
#include "window.h"

static const char* usage =
    "Usage:   ImPlay [options] [url|path/]filename\n"
    "\n"
    "Basic options:\n"
    " --start=<time>    seek to given (percent, seconds, or hh:mm:ss) position\n"
    " --no-audio        do not play sound\n"
    " --no-video        do not play video\n"
    " --fs              fullscreen playback\n"
    " --sub-file=<file> specify subtitle file to use\n"
    " --playlist=<file> specify playlist file\n"
    "\n"
    "Visit https://mpv.io/manual/stable to get full mpv options.\n";

static int run_headless(ImPlay::OptionParser& parser) {
  std::vector<implay_mpv_option> options;
  for (const auto& [key, value] : parser.options) options.push_back({key.c_str(), value.c_str()});
  std::vector<const char*> paths;
  for (const auto& path : parser.paths) paths.push_back(path.c_str());

  size_t failed = 0;
  int error = 0;
  auto status = implay_mpv_run_headless(options.data(), options.size(), paths.data(), paths.size(), &failed, &error);
  if (status == IMPLAY_MPV_OPTION_FAILED) {
    fmt::print(fg(fmt::color::red), "mpv: {} [{}={}]\n", implay_mpv_error_string(error), options[failed].name,
               options[failed].value);
    return 1;
  }
  if (status != IMPLAY_MPV_OK) throw std::runtime_error(implay_mpv_status_string(status));
  return 0;
}

static std::string build_ipc_cmd(std::string path) {
  nlohmann::json j = {{"command", {"loadfile", path, "append-play"}}};
  return fmt::format("{}\n", j.dump());
}

#ifdef _WIN32
static bool send_ipc(std::string sock, std::vector<std::string> paths) {
  HANDLE hPipe = CreateFile(sock.c_str(), GENERIC_WRITE, 0, NULL, OPEN_EXISTING, 0, NULL);
  if (hPipe == INVALID_HANDLE_VALUE) return false;

  for (auto& path : paths) {
    std::string payload = build_ipc_cmd(path);
    if (!WriteFile(hPipe, payload.c_str(), payload.size(), NULL, NULL)) {
      fmt::print("WriteFile failed: {}, payload: {}\n", GetLastError(), payload);
    }
  }

  CloseHandle(hPipe);
  return true;
}
#else
static bool send_ipc(std::string sock, std::vector<std::string> paths) {
  int fd = socket(AF_UNIX, SOCK_STREAM, 0);
  if (fd == -1) return false;

  struct sockaddr_un addr;
  addr.sun_family = AF_UNIX;
  strncpy(addr.sun_path, sock.c_str(), sizeof(addr.sun_path) - 1);

  if ((connect(fd, (struct sockaddr*)&addr, sizeof(addr))) == -1) {
    close(fd);
    return false;
  }

  for (auto& path : paths) {
    std::string payload = build_ipc_cmd(path);
    if (write(fd, payload.c_str(), payload.size()) == -1) {
      fmt::print("write failed: {}, payload: {}\n", errno, payload);
    }
  }

  close(fd);
  return true;
}
#endif

int main(int argc, char* argv[]) {
#ifdef _WIN32
  char* console = getenv("_started_from_console");
  if (console != nullptr && strcmp(console, "yes") == 0) {
    if (AttachConsole(ATTACH_PARENT_PROCESS)) {
      freopen("CONIN$", "r", stdin);
      freopen("CONOUT$", "w", stdout);
      freopen("CONOUT$", "w", stderr);
    }
  }
#endif

  ImPlay::OptionParser parser;
  parser.parse(argc, argv);
  if (parser.options.contains("help")) {
    fmt::print("{}", usage);
    return 0;
  }

  try {
    if (parser.options.contains("o") || parser.check("video", "no") || parser.check("vid", "no"))
      return run_headless(parser);

    ImPlay::Config config;
    config.load();

    if (config.Data.Window.Single && send_ipc(config.ipcSocket(), parser.paths)) return 0;

    ImPlay::Window window(&config);
    if (!window.init(parser)) return 1;

    window.run();
    return 0;
  } catch (const std::exception& e) {
    fmt::print(fg(fmt::color::red), "Error: {}\n", e.what());
    return 1;
  }
}
