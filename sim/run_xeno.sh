#!/bin/sh
# Build and run the full-machine (main board + video) sim.
set -e
cd "$(dirname "$0")"
mkdir -p obj_xeno && cd obj_xeno

python3 - <<'EOF'
def words(path, out):
    d = open(path, 'rb').read()
    with open(out, 'w') as f:
        for i in range(0, len(d), 2):
            f.write(f'{d[i]:02x}{d[i+1]:02x}\n')
R = '../../romset/'
words('../../build/xeno_main.bin', 'xeno_main.hex')
# region order 11d then 12d, data inverted (ROMREGION_INVERT)
bg = open(R+'xeno_bg.11d','rb').read() + open(R+'xeno_bg.12d','rb').read()
with open('bg_rom.hex','w') as f:
    for i in range(0, len(bg), 2):
        f.write(f'{bg[i]^0xff:02x}{bg[i+1]^0xff:02x}\n')
for n, name in enumerate(('7j','8j','9j','10j')):
    d = open(R+f'xeno_fg.{name}','rb').read()
    with open(f'spr_rom{n}.hex','w') as f:
        for i in range(0, len(d), 2):
            f.write(f'{d[i]:02x}{d[i+1]:02x}\n')
EOF
cp ../../modules/cpu-fx68k/microrom.mem ../../modules/cpu-fx68k/nanorom.mem .

verilator --binary -j 4 -O2 --no-assert-case --top-module tb_xeno \
    +define+SIM_GFX_INIT \
    -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-CASEINCOMPLETE -Wno-UNUSEDSIGNAL \
    -Wno-PINMISSING -Wno-UNOPTFLAT -Wno-TIMESCALEMOD \
    -Wno-BLKANDNBLK -Wno-MULTIDRIVEN -Wno-LATCH -Wno-ALWCOMBORDER -Wno-IMPLICITSTATIC \
    -I../../rtl -I../../modules/cpu-fx68k \
    ../tb_xeno.sv ../../rtl/mcr68_main.sv ../../rtl/mcr68_video.sv \
    ../../rtl/ptm6840.sv \
    ../../modules/cpu-fx68k/fx68k.sv ../../modules/cpu-fx68k/fx68kAlu.sv \
    ../../modules/cpu-fx68k/uaddrPla.sv \
    --exe ../main_xeno.cpp -o tb_xeno

./obj_dir/tb_xeno "$@"
