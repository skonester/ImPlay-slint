"""Measure a Windows ImPlay build through mpv IPC without touching user settings.

Use a staged build with portable_config/implay.conf containing window.single=false,
window.save=false and mpv.config=true. Run the same clip/options before and after.
"""

import argparse
import json
import os
from pathlib import Path
import subprocess
import threading
import time


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("executable", type=Path)
    parser.add_argument("media", type=Path)
    parser.add_argument("--seconds", type=int, default=15)
    parser.add_argument("--output", type=Path, required=True)
    parser.add_argument("--exercise", action="store_true", help="Also check pause, seek, resize, stop and reload")
    args, options = parser.parse_known_args()
    executable = args.executable.resolve()
    config = executable.parent / "portable_config" / "implay.conf"
    if os.name != "nt" or not config.is_file():
        parser.error("A Windows build staged with a portable config is required")
    pipe = rf"\\.\pipe\implay-probe-{os.getpid()}"
    args.output.parent.mkdir(parents=True, exist_ok=True)
    log = args.output.resolve().with_suffix(".log")
    process = subprocess.Popen(
        [str(executable), "--config=no", "--load-scripts=no", "--osc=no",
         "--mute=yes", f"--input-ipc-server={pipe}", f"--log-file={log}",
         *options, str(args.media.resolve())],
        cwd=executable.parent,
    )
    watchdog = threading.Timer(args.seconds + 60, process.kill)
    watchdog.start()
    try:
        deadline = time.monotonic() + 30
        while True:
            try:
                stream = open(pipe, "r+b", buffering=0)
                break
            except OSError:
                if process.poll() is not None or time.monotonic() > deadline:
                    raise RuntimeError(f"IPC unavailable; see {log}")
                time.sleep(0.1)
        with stream:
            def command(*values):
                stream.write((json.dumps({"command": values, "request_id": 1}) + "\n").encode())
                while True:
                    line = stream.readline()
                    if not line:
                        raise RuntimeError(f"Player exited during IPC; see {log}")
                    result = json.loads(line)
                    if result.get("request_id") == 1:
                        return result.get("data")

            properties = ["time-pos", "hwdec-current", "video-codec", "video-params",
                          "estimated-vf-fps", "container-fps", "current-vo", "video-sync",
                          "frame-drop-count", "decoder-frame-drop-count", "mistimed-frame-count",
                          "vo-delayed-frame-count", "avsync", "display-fps", "vo-passes",
                          "vo-performance"]
            samples = []
            start = time.monotonic()
            for _ in range(args.seconds):
                time.sleep(1)
                sample = {name: command("get_property", name) for name in properties}
                sample["elapsed"] = round(time.monotonic() - start, 3)
                samples.append(sample)
                print(json.dumps({key: sample[key] for key in
                                  ["elapsed", "time-pos", "hwdec-current", "frame-drop-count",
                                   "decoder-frame-drop-count"]}), flush=True)
            args.output.write_text(json.dumps(samples, indent=2), encoding="utf-8")
            if args.exercise:
                def wait_property(name, predicate):
                    deadline = time.monotonic() + 10
                    while time.monotonic() < deadline:
                        value = command("get_property", name)
                        if predicate(value):
                            return value
                        time.sleep(0.05)
                    raise AssertionError(f"Timed out waiting for {name}: {value!r}")

                command("set_property", "pause", True)
                wait_property("pause", lambda value: value is True)
                time.sleep(0.3)
                paused_at = command("get_property", "time-pos")
                time.sleep(0.4)
                assert abs(command("get_property", "time-pos") - paused_at) < 0.1, "Pause advanced playback"
                duration = command("get_property", "duration")
                seek_to = min(60, duration / 2)
                command("seek", seek_to, "absolute+exact")
                wait_property("time-pos", lambda value: value is not None and abs(value - seek_to) < 0.1)
                for fullscreen in [True, False]:
                    command("set_property", "fullscreen", fullscreen)
                    wait_property("fullscreen", lambda value: value is fullscreen)
                    time.sleep(0.5)
                command("set_property", "pause", False)
                wait_property("time-pos", lambda value: value is not None and value > seek_to + 0.3)
                command("stop")
                wait_property("idle-active", lambda value: value is True)
                command("loadfile", str(args.media.resolve()), "replace")
                wait_property("idle-active", lambda value: value is False)
                wait_property("time-pos", lambda value: value is not None and value > 0.3)
                print("PASS: pause, exact seek, paused fullscreen resize, resume, stop and reload", flush=True)
            command("quit")
        process.wait(timeout=15)
    finally:
        watchdog.cancel()
        if process.poll() is None:
            process.kill()
            process.wait()


if __name__ == "__main__":
    main()
