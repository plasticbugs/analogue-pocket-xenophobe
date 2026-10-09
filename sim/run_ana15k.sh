#!/bin/sh
# The Analogizer's 31 -> 15 kHz converter on its own (sim/tb_ana15k.sv):
# every output dot against its source pair, Blend and Sharp, and the 240p
# raster's line, vsync and frame timing.  Under a minute.
set -e
here=$(cd "$(dirname "$0")" && pwd)
cd "$here"
verilator --version >/dev/null 2>&1 || { echo "verilator not found" >&2; exit 2; }
verilator --binary --timing -j "${JOBS:-8}" -O2 -Wno-fatal -Wno-lint -Wno-style \
    --top-module tb_ana15k -Mdir obj_ana15k \
    ../target/pocket/ana_15k.sv tb_ana15k.sv > obj_ana15k.log 2>&1 \
    || { tail -40 obj_ana15k.log; exit 1; }
./obj_ana15k/Vtb_ana15k | tee obj_ana15k/run.log
grep -q "^PASS" obj_ana15k/run.log
