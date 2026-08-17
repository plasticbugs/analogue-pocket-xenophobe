#!/bin/sh
# Frozen-state video-only render: run_video.sh <state.txt>
set -e
cd "$(dirname "$0")"
STATE="${1:-obj_xeno/sim_state3.txt}"
mkdir -p obj_video && cd obj_video

python3 - "$STATE" <<'EOF'
import sys, os
path = sys.argv[1]
if not os.path.isabs(path): path = os.path.join('..', path)
sec=None; v=[]; s=[]; p=[]
for l in open(path):
    l=l.strip()
    if l in ('VRAM','SPRRAM','PAL'): sec=l; continue
    (v if sec=='VRAM' else s if sec=='SPRRAM' else p).append(l)
# vram/sprram hex are word-per-line already; pad to array sizes
open('vram_init.hex','w').write('\n'.join(v + ['0000']*(4096-len(v))))
open('sprram_init.hex','w').write('\n'.join(s + ['0000']*(4096-len(s))))
open('pal_init.hex','w').write('\n'.join(f'{int(x,16)&0x1ff:03x}' for x in p))
R='../../romset/'
bg = open(R+'xeno_bg.11d','rb').read() + open(R+'xeno_bg.12d','rb').read()
with open('bg_rom.hex','w') as f:
    for i in range(0,len(bg),2): f.write(f'{bg[i]^0xff:02x}{bg[i+1]^0xff:02x}\n')
# sdram image: sprites at 0x90000, load-time permuted so one sprite row's
# 16 bytes are consecutive: dst = 0x90000 + {code, row, bank, k}
spr = b''.join(open(R+f'xeno_fg.{n}j','rb').read() for n in ('7','8','9','10'))
sd = bytearray(0xD0000)
for i, byte in enumerate(spr):
    bank, code, row, k = i >> 16, (i >> 7) & 0x1ff, (i >> 2) & 0x1f, i & 3
    sd[0x90000 + (code << 9) + (row << 4) + (bank << 2) + k] = byte
with open('sdram_init.hex','w') as f:
    for i in range(0, len(sd), 2):
        f.write(f'{sd[i+1]:02x}{sd[i]:02x}\n')   # word = {odd, even}
EOF

verilator --cc --build --exe -j 4 -O2 --no-assert-case --top-module tb_video \
    +define+SIM_GFX_INIT \
    -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-CASEINCOMPLETE -Wno-UNUSEDSIGNAL \
    -Wno-PINMISSING -Wno-UNOPTFLAT -Wno-TIMESCALEMOD \
    -Wno-BLKANDNBLK -Wno-MULTIDRIVEN -Wno-LATCH -Wno-ALWCOMBORDER -Wno-IMPLICITSTATIC \
    -I../../rtl \
    ../tb_video.sv ../sdram_model.sv ../../rtl/mcr68_video.sv \
    ../../rtl/sdram16.sv ../../rtl/rom_server.sv \
    --exe ../main_video.cpp -o tb_video

./obj_dir/tb_video
