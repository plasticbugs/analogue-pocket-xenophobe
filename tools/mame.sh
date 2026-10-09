#!/bin/sh
# Run MAME on xenophob, headless.  Every MAME run for this core goes through
# here, with -seconds_to_run as a backstop even when a Lua script ends the run
# itself (machine:exit() from a script has proved unreliable elsewhere).
#
#   tools/mame.sh -autoboot_script tools/busystate.lua -autoboot_delay 0 \
#       -seconds_to_run 40
#
# Nothing here may touch the display.  `-video none` stops MAME rendering to a
# window but does NOT stop it creating one, and MAME's own defaults are
# fullscreen (window 0, maximize 1) -- which on macOS makes the desktop jump
# to another Space every time it runs.  Three measures, because they fail
# independently: SDL_VIDEODRIVER=dummy keeps SDL from opening the display at
# all (it is read before MAME parses anything), -videodriver dummy says the
# same through MAME, and -window -nomaximize means that if a window is created
# regardless it is a small one that steals no Space.  Never add -fullscreen.
# (From plasticbugs/moomesa's tools/mame.sh.)
#
# ROMs come from build/mame_roms (not committed), and settings and NVRAM stay
# in build/ too, so a run never picks up a cfg left by another investigation.
root=$(cd "$(dirname "$0")/.." && pwd)
SDL_VIDEODRIVER=dummy \
exec mame xenophob -rompath "$root/build/mame_roms" \
    -video none -videodriver dummy -window -nomaximize \
    -sound none -nothrottle -skip_gameinfo \
    -cfg_directory "$root/build/cfg" -nvram_directory "$root/build/nvram" \
    "$@"
