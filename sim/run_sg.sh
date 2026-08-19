#!/bin/sh
# Build and run the Sounds Good smoke test.
set -e
cd "$(dirname "$0")"
mkdir -p obj_sg && cd obj_sg

# sim data: sound ROM as hex words + fx68k microcode
python3 - <<'EOF'
d = open('../../build/xeno_snd.bin','rb').read()
with open('xeno_snd.hex','w') as f:
    for i in range(0, len(d), 2):
        f.write(f'{d[i]:02x}{d[i+1]:02x}\n')
EOF
cp ../../modules/cpu-fx68k/microrom.mem ../../modules/cpu-fx68k/nanorom.mem .

verilator --binary -j 4 -O2 --no-assert-case --top-module tb_sounds_good +define+ROM_LAT=${ROM_LAT:-1} ${ICACHE:+ +define+ICACHE +define+ICACHE_STATS} \
    -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-CASEINCOMPLETE -Wno-UNUSEDSIGNAL \
    -Wno-PINMISSING -Wno-UNOPTFLAT -Wno-TIMESCALEMOD \
    -Wno-BLKANDNBLK -Wno-MULTIDRIVEN -Wno-LATCH -Wno-ALWCOMBORDER -Wno-IMPLICITSTATIC \
    -I../../rtl -I../../modules/cpu-fx68k \
    ../tb_sounds_good.sv ../../rtl/sounds_good.sv ../../rtl/pia6821.sv ../../rtl/snd_icache.sv \
    ../../modules/cpu-fx68k/fx68k.sv ../../modules/cpu-fx68k/fx68kAlu.sv \
    ../../modules/cpu-fx68k/uaddrPla.sv \
    --exe ../main_sg.cpp -o tb_sg

./obj_dir/tb_sg "$@"
