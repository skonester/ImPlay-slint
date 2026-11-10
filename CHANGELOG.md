# Changelog

## Milestone 10/26/26 (1.6.3): smooth UI during playback

**The problem.** Clicking around the app while a video played could make the
interface lag or freeze for a moment, and it was hard to pin down why.

**The cause.** mpv drew each video frame on Slint's UI thread, the same thread
that handles clicks and key presses. That caused two problems:

- By default, mpv's render call sleeps until the frame is due on screen, up to
  50 ms per frame. Every click waited behind that sleep.
- libmpv requires that the thread doing its rendering never waits on other mpv
  calls. When the UI thread did, libmpv could deadlock until an internal
  timeout, which showed up as random freezes.

We compared against [fluent-player](https://github.com/masum-9t9/fluent-player),
a GPL-3 Rust + Slint + mpv player that feels smooth. It avoids the problem by
giving mpv its own native child window, so video never goes through Slint.
That approach hides anything Slint draws over the video, and ImPlay's controls,
panels and menus all float over it, so we kept our design and moved the video
work off the UI thread instead.

**What changed.**

- **Video renders on its own thread** (`source/video_renderer.cpp`). At startup
  ImPlay creates a second OpenGL context that shares textures with Slint's. A
  dedicated thread owns it and lets mpv draw into a ring of three textures with
  its normal frame timing. On each repaint, the UI thread only copies the newest
  finished frame into the texture Slint shows. GPU fences make sure neither side
  reads or overwrites a texture too early. If the shared context can't be made
  (for example Slint running on EGL/ANGLE), ImPlay falls back to rendering on
  the UI thread without the 50 ms sleep.
- **One repaint per video frame.** mpv reports the playback time slightly
  before the matching frame is ready, which caused two repaints per frame. The
  time and duration labels now update together with the frame.
- **Lists update in place.** Playlist, tracks, chapters, audio devices,
  profiles and recent files used to be rebuilt from scratch on every mpv change
  (several times per file load, and on every chapter change). Changes are now
  batched, and only rows that actually changed are updated.
- **Fewer blocking mpv calls.** Commands like `set video-zoom 0; set
  video-pan-x 0` are now sent one by one without waiting, instead of through
  mpv's blocking command parser.
- **Clean shutdown.** The renderer is destroyed in the right order relative to
  the Slint window and mpv, so the render thread stops and frees its GL
  resources before mpv goes away.
- **Release workflow.** Releases now come from one **Run workflow** button that
  reads the version from `package.json`.

**Results** (measured on an NVIDIA GPU, where Slint's context is OpenGL ES 3.2
over WGL):

| | Before | After |
| --- | --- | --- |
| UI-thread time per video frame | 3–8 ms, plus up to 50 ms of sleep | about 0.3 ms |
| UI repaints | up to 2 per video frame | 1 per video frame |
| Dropped frames | 0 | 0 |

**Tips for other Slint + mpv developers.**

- Pick where video renders first. If nothing in your UI draws over the video,
  giving mpv its own child window (`wid`) is simplest and fastest. If your UI
  overlays the video, use mpv's render API on a dedicated thread with a GL
  context shared with Slint's, as described above.
- Never call blocking mpv functions (`mpv_command`, `mpv_get_property`, and so
  on) from the thread that renders video. Use the async versions.
- If you render on the UI thread, pass `MPV_RENDER_PARAM_BLOCK_FOR_TARGET_TIME
  = 0` and set `video-timing-offset=0`, otherwise mpv sleeps on your UI thread.
- Fast-changing mpv properties like `time-pos` each trigger a Slint repaint.
  Batch them with the video frame instead of setting them as they arrive.
- Keep Slint models alive and update rows in place rather than replacing whole
  models; replacing a model rebuilds every row in an open list.
- GitHub Actions can't create a tag on a commit that only changes a workflow
  file. If a release run fails at the tag step, push any small commit (a README
  edit is fine) and run it again.

See [architecture.md](architecture.md) for the threading rules in detail.
