#!/usr/bin/env python3
"""Decode Xenophobe (MCR-68k) graphics ROMs to PNG sheets for layout verification."""
import struct, zlib, sys, os

ROM = os.path.join(os.path.dirname(__file__), '..', 'romset')
OUT = os.path.join(os.path.dirname(__file__), '..', 'artifacts')

PAL16 = [(0,0,0),(0,0,170),(0,170,0),(0,170,170),(170,0,0),(170,0,170),(170,85,0),(170,170,170),
         (85,85,85),(85,85,255),(85,255,85),(85,255,255),(255,85,85),(255,85,255),(255,255,85),(255,255,255)]

def write_png(path, w, h, pix):  # pix: list of palette indices, row-major
    raw = b''.join(b'\x00' + bytes(b for i in row for b in PAL16[i]) for row in
                   (pix[y*w:(y+1)*w] for y in range(h)))
    def chunk(tag, data):
        c = tag + data
        return struct.pack('>I', len(data)) + c + struct.pack('>I', zlib.crc32(c))
    png = (b'\x89PNG\r\n\x1a\n' + chunk(b'IHDR', struct.pack('>IIBBBBB', w, h, 8, 2, 0, 0, 0))
           + chunk(b'IDAT', zlib.compress(raw)) + chunk(b'IEND', b''))
    open(path, 'wb').write(png)

def load(name):
    return open(os.path.join(ROM, name), 'rb').read()

def decode_bg():
    """MAME mcr_bg_layout: 8x8, 4bpp. Planes {half2+0, half2+1, 0, 1}, x-step 2 bits, y-step 16 bits.
    ROM region = 12d + 11d concatenated (verify which half is which visually)."""
    r = load('xeno_bg.12d') + load('xeno_bg.11d')
    half = len(r) // 2
    ntiles = half // 16
    tiles = []
    for t in range(ntiles):
        tile = []
        for y in range(8):
            row = []
            base = t*16 + y*2
            w0 = (r[base] << 8) | r[base+1]          # low half: planes 2,3 (bits 0,1)
            w1 = (r[half+base] << 8) | r[half+base+1] # high half: planes 0,1 (bits 2,3... per MAME plane order)
            for x in range(8):
                sh = 14 - x*2
                lo = (w0 >> sh) & 3
                hi = (w1 >> sh) & 3
                row.append((hi << 2) | lo)
            tile.append(row)
        tiles.append(tile)
    return tiles

def sheet(tiles, tw, th, cols, path, scale=2):
    rows = (len(tiles) + cols - 1) // cols
    W, H = cols*tw*scale, rows*th*scale
    pix = [0]*(W*H)
    for i, tile in enumerate(tiles):
        cx, cy = (i % cols)*tw*scale, (i // cols)*th*scale
        for y in range(th):
            for x in range(tw):
                v = tile[y][x]
                for dy in range(scale):
                    for dx in range(scale):
                        pix[(cy+y*scale+dy)*W + cx+x*scale+dx] = v
    write_png(path, W, H, pix)
    print(f'{path}: {len(tiles)} tiles, {W}x{H}')

def decode_sprites(layout):
    """32x32x4bpp sprites from 4 ROMs. layout 'planar': each ROM one bitplane, 4 bytes/row.
    layout 'mame': MAME mcr_sprite_layout — planes {0,1,2,3} = consecutive bits within a nibble spread
    across ROM quarters interleaved by x."""
    roms = [load(f'xeno_fg.{n}j') for n in (7, 8, 9, 10)]
    n = len(roms[0]) // 128   # 128 bytes per 32x32x1bpp plane
    sprites = []
    for s in range(n):
        spr = []
        for y in range(32):
            row = []
            for x in range(32):
                if layout == 'planar':
                    byte = s*128 + y*4 + x//8
                    bit = 7 - (x % 8)
                    v = sum(((roms[p][byte] >> bit) & 1) << p for p in range(4))
                else:  # 'mame': each ROM holds 2px worth? try bits pairwise like bg
                    byte = s*128 + y*4 + x//8
                    bit = 7 - (x % 8)
                    v = sum(((roms[p][byte] >> bit) & 1) << (3-p) for p in range(4))
                row.append(v)
            spr.append(row)
        sprites.append(spr)
    return sprites

if __name__ == '__main__':
    tiles = decode_bg()
    sheet(tiles[:1024], 8, 8, 32, os.path.join(OUT, 'bg_sheet.png'), scale=2)
    spr = decode_sprites('planar')
    sheet(spr[:120], 32, 32, 12, os.path.join(OUT, 'spr_planar.png'), scale=1)
    spr2 = decode_sprites('mame')
    sheet(spr2[:120], 32, 32, 12, os.path.join(OUT, 'spr_rev.png'), scale=1)
