#!/usr/bin/env python3
"""Build the merged xenophobe.rom asset for the Pocket core from a MAME romset.

Layout (must match rtl rom_loader):
  0x00000 +256K  main 68k program (3c/3b + 2c/2b byte-interleaved, even bytes from 3c/2c)
  0x40000 +256K  sound 68k program (u7/u17 + u8/u18, even bytes from u7/u8)
  0x80000 +64K   bg tiles (11d + 12d, raw dump; loader inverts per ROMREGION_INVERT)
  0x90000 +256K  sprites (7j + 8j + 9j + 10j)

Usage: make_rom.py <romset_dir> [out_file]
"""
import sys, os, zlib

CRCS = {  # MAME xenophob parent set
    'xeno_pro.3c': 0xf44c2e60, 'xeno_pro.3b': 0x01609a3b,
    'xeno_pro.2c': 0xe45bf669, 'xeno_pro.2b': 0xda5d39d5,
    'xeno_snd.u7': 0x77561d15, 'xeno_snd.u17': 0x837a1a71,
    'xeno_snd.u8': 0x6e2915c7, 'xeno_snd.u18': 0x12492145,
    'xeno_bg.12d': 0xc32288b1, 'xeno_bg.11d': 0x3d2cf284,
    'xeno_fg.7j': 0xb12eddb2, 'xeno_fg.8j': 0x20e682f5,
    'xeno_fg.9j': 0x82fb3e09, 'xeno_fg.10j': 0x6a7a3516,
}

def main():
    src = sys.argv[1]
    out = sys.argv[2] if len(sys.argv) > 2 else 'xenophobe.rom'
    roms = {}
    for name, crc in CRCS.items():
        data = open(os.path.join(src, name), 'rb').read()
        actual = zlib.crc32(data) & 0xffffffff
        if actual != crc:
            sys.exit(f'{name}: CRC {actual:08x} != expected {crc:08x} (wrong/bad dump)')
        roms[name] = data

    def ilv(even, odd):
        o = bytearray(len(roms[even]) * 2)
        o[0::2] = roms[even]
        o[1::2] = roms[odd]
        return bytes(o)

    image = (ilv('xeno_pro.3c', 'xeno_pro.3b') + ilv('xeno_pro.2c', 'xeno_pro.2b')
             + ilv('xeno_snd.u7', 'xeno_snd.u17') + ilv('xeno_snd.u8', 'xeno_snd.u18')
             + roms['xeno_bg.11d'] + roms['xeno_bg.12d']
             + roms['xeno_fg.7j'] + roms['xeno_fg.8j']
             + roms['xeno_fg.9j'] + roms['xeno_fg.10j'])
    assert len(image) == 0xD0000, hex(len(image))
    open(out, 'wb').write(image)
    print(f'wrote {out} ({len(image)} bytes)')

if __name__ == '__main__':
    main()
