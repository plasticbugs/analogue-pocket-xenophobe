#!/bin/sh
# Frozen-state video regression: render each state in the RTL and diff against
# the reference renderer (tools/render_model.py), which is validated pixel-exact
# against MAME. Any non-zero diff is a regression.
#
# States are ROM-derived so they are not committed. Regenerate them with:
#   cd build && mame xenophob -rompath mame_roms -autoboot_script ../tools/busystate.lua \
#       -autoboot_delay 0 -video none -sound none -nothrottle -skip_gameinfo
# state_busy1370 is the heavy case: 17 sprites on one line, the measured peak
# across sampled gameplay (see tools/sprload.lua).
set -e
cd "$(dirname "$0")/.."
STATES="${*:-sim/obj_xeno/sim_state.txt sim/obj_xeno/sim_state2.txt
         sim/obj_xeno/sim_state3.txt sim/obj_xeno/sim_state178.txt
         build/state_busy1345.txt build/state_busy1360.txt build/state_busy1370.txt}"
fail=0
for st in $STATES; do
    [ -f "$st" ] || { echo "skip (missing): $st"; continue; }
    base=$(basename "$st" .txt)
    model="artifacts/model_$base.png"
    [ -f "$model" ] || python3 tools/render_model.py "$st" \
        build/snap_3/xenophob/0000.png "$model" >/dev/null 2>&1
    (cd sim && sh run_video.sh "../$st" >/dev/null 2>&1)
    out=$(python3 tools/diff_frames.py sim/obj_video/frozen_frame.ppm "$model" 2>/dev/null | head -1)
    echo "$base: $out"
    case "$out" in *"(0.000%)") ;; *) fail=1 ;; esac
done
[ $fail -eq 0 ] && echo "PASS: all states pixel-exact" || { echo "FAIL"; exit 1; }
