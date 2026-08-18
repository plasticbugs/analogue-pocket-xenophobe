#!/bin/sh
# Verify the APF loader -> SDRAM -> client read path end to end.
set -e
cd "$(dirname "$0")"
mkdir -p obj_loader && cd obj_loader

verilator --cc --build --exe -j 4 -O2 --no-assert-case --top-module tb_loader \
    -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-CASEINCOMPLETE -Wno-UNUSEDSIGNAL \
    -Wno-PINMISSING -Wno-UNOPTFLAT -Wno-TIMESCALEMOD \
    -Wno-BLKANDNBLK -Wno-MULTIDRIVEN -Wno-LATCH -Wno-ALWCOMBORDER -Wno-IMPLICITSTATIC \
    -I../../rtl \
    ../tb_loader.sv ../sdram_model.sv ../../rtl/sdram16.sv ../../rtl/rom_server.sv \
    --exe ../main_loader.cpp -o tb_loader

./obj_dir/tb_loader "$@"
