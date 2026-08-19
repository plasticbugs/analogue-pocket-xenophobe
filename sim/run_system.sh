#!/bin/sh
# Build and run the full-system (main + video + Sounds Good) sim.
set -e
cd "$(dirname "$0")"
mkdir -p obj_system && cd obj_system

python3 - <<'EOF'
def words(path, out):
    d = open(path, 'rb').read()
    with open(out, 'w') as f:
        for i in range(0, len(d), 2):
            f.write(f'{d[i]:02x}{d[i+1]:02x}\n')
R = '../../romset/'
words('../../build/xeno_main.bin', 'xeno_main.hex')
words('../../build/xeno_snd.bin', 'xeno_snd.hex')
bg = open(R+'xeno_bg.11d','rb').read() + open(R+'xeno_bg.12d','rb').read()
with open('bg_rom.hex','w') as f:
    for i in range(0, len(bg), 2):
        f.write(f'{bg[i]^0xff:02x}{bg[i+1]^0xff:02x}\n')
spr = b''.join(open(R+f'xeno_fg.{n}j','rb').read() for n in ('7','8','9','10'))
sd = bytearray(0xD0000)
main = open('../../build/xeno_main.bin','rb').read()
snd  = open('../../build/xeno_snd.bin','rb').read()
sd[0x00000:0x00000+len(main)] = main       # main 68k program
sd[0x40000:0x40000+len(snd)]  = snd        # sound 68k program
for i, byte in enumerate(spr):
    bank, code, row, k = i >> 16, (i >> 7) & 0x1ff, (i >> 2) & 0x1f, i & 3
    sd[0x90000 + (code << 9) + (row << 4) + (bank << 2) + k] = byte
with open('sdram_init.hex','w') as f:
    for i in range(0, len(sd), 2):
        f.write(f'{sd[i+1]:02x}{sd[i]:02x}\n')
EOF
cp ../../modules/cpu-fx68k/microrom.mem ../../modules/cpu-fx68k/nanorom.mem .

verilator --cc --build --exe -j 4 -O2 --no-assert-case --top-module tb_system \
    +define+SIM_GFX_INIT \
    -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-CASEINCOMPLETE -Wno-UNUSEDSIGNAL \
    -Wno-PINMISSING -Wno-UNOPTFLAT -Wno-TIMESCALEMOD \
    -Wno-BLKANDNBLK -Wno-MULTIDRIVEN -Wno-LATCH -Wno-ALWCOMBORDER -Wno-IMPLICITSTATIC \
    -I../../rtl -I../../modules/cpu-fx68k \
    ../tb_system.sv ../sdram_model.sv ../../rtl/audio_cond.sv ../../rtl/mcr68_main.sv ../../rtl/mcr68_video.sv \
    ../../rtl/ptm6840.sv ../../rtl/sounds_good.sv ../../rtl/pia6821.sv \
    ../../rtl/sdram16.sv ../../rtl/rom_server.sv \
    ../../modules/cpu-fx68k/fx68k.sv ../../modules/cpu-fx68k/fx68kAlu.sv \
    ../../modules/cpu-fx68k/uaddrPla.sv \
    --exe ../main_system.cpp -o tb_system

./obj_dir/tb_system "$@"
