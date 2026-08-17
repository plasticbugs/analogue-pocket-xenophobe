#!/usr/bin/env python3
"""Reference renderer: draw a full frame (bg + sprites) from a MAME state dump
using our understanding of the MCR-68k video hardware, and diff against the
matching MAME screenshot. Iterated to pixel-perfection, this is the spec the
RTL must implement.

Usage: render_model.py <state.txt> <mame.png> [out.png]
"""
import sys, os, zlib, struct

ROOT = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..')

def read_png(path):
    d = open(path,'rb').read(); pos=8; idat=b''
    while pos < len(d):
        ln = struct.unpack('>I', d[pos:pos+4])[0]; tag = d[pos+4:pos+8]
        if tag==b'IHDR':
            w,h,bd,ct = struct.unpack('>IIBB', d[pos+8:pos+18]); ch={2:3,6:4,3:1}[ct]; plte=None
        if tag==b'PLTE': plte=d[pos+8:pos+8+ln]
        if tag==b'IDAT': idat+=d[pos+8:pos+8+ln]
        pos+=12+ln
    raw=zlib.decompress(idat); stride=w*ch; img=bytearray(w*h*3); prev=bytearray(stride); p=0
    for y in range(h):
        f=raw[p]; row=bytearray(raw[p+1:p+1+stride]); p+=1+stride
        for x in range(stride):
            a=row[x-ch] if x>=ch else 0; b_=prev[x]; c=prev[x-ch] if x>=ch else 0
            if f==1: row[x]=(row[x]+a)&0xff
            elif f==2: row[x]=(row[x]+b_)&0xff
            elif f==3: row[x]=(row[x]+(a+b_)//2)&0xff
            elif f==4:
                pp=a+b_-c; pa,pb,pc=abs(pp-a),abs(pp-b_),abs(pp-c)
                pr=a if (pa<=pb and pa<=pc) else (b_ if pb<=pc else c)
                row[x]=(row[x]+pr)&0xff
        prev=row
        for x in range(w):
            if ch==1: pi=row[x]*3; img[(y*w+x)*3:(y*w+x)*3+3]=plte[pi:pi+3]
            else: img[(y*w+x)*3:(y*w+x)*3+3]=row[x*ch:x*ch+3]
    return w,h,img

def write_png(path, w, h, img):
    raw = b''.join(b'\x00'+bytes(img[y*w*3:(y+1)*w*3]) for y in range(h))
    def chunk(tag,d): c=tag+d; return struct.pack('>I',len(d))+c+struct.pack('>I',zlib.crc32(c))
    open(path,'wb').write(b'\x89PNG\r\n\x1a\n'+chunk(b'IHDR',struct.pack('>IIBBBBB',w,h,8,2,0,0,0))
                          +chunk(b'IDAT',zlib.compress(raw))+chunk(b'IEND',b''))

def load_state(path):
    sec = None; vram=[]; sprram=[]; pal=[]
    for l in open(path):
        l = l.strip()
        if l in ('VRAM','SPRRAM','PAL'): sec = l; continue
        v = int(l,16)
        if sec=='VRAM': vram.append(v)
        elif sec=='SPRRAM': sprram.append(v)
        else: pal.append(v)
    return vram, sprram, pal

R = os.path.join(ROOT, 'romset')
# bg region: 11d then 12d, INVERTED
bgrom = bytes(b ^ 0xff for b in
              open(os.path.join(R,'xeno_bg.11d'),'rb').read()
              + open(os.path.join(R,'xeno_bg.12d'),'rb').read())
half = len(bgrom)//2
sprroms = [open(os.path.join(R,f'xeno_fg.{n}j'),'rb').read() for n in ('7','8','9','10')]

def bg_pen(code, px, py):
    w0 = (bgrom[code*16+py*2]<<8) | bgrom[code*16+py*2+1]        # 11d: bits 1:0
    w1 = (bgrom[half+code*16+py*2]<<8) | bgrom[half+code*16+py*2+1]  # 12d: 3:2
    sh = 14-2*px
    return (((w1>>sh)&3)<<2) | ((w0>>sh)&3)

def spr_pen(code, x, y):
    g, p, hn = x//8, (x%8)//2, x%2
    off = code*1024 + y*32 + g*8 + hn*4
    b = sprroms[p][off//8]
    return (b>>4)&0xf if off%8==0 else b&0xf

def p3(v): return (v<<5)|(v<<2)|(v>>1)
def expand(v): return (p3((v>>6)&7), p3(v&7), p3((v>>3)&7))

def render(vram, sprram, pal):
    W,H = 512,480
    # bg pass: pen index buffer + priority flag
    bgpen = [[0]*W for _ in range(H)]
    bgidx = [[0]*W for _ in range(H)]
    bgpri = [[0]*W for _ in range(H)]
    for row in range(30):
        for col in range(32):
            d = (vram[(row*32+col)*2]&0xff) | ((vram[(row*32+col)*2+1]&0xff)<<8)
            code = ((d & 0x3ff) | ((d>>4)&0xc00)) & 0x7ff
            bank = (~d >> 12) & 3
            fx, fy = (d>>10)&1, (d>>11)&1
            pri = (d>>15)&1
            for py in range(8):
                for px in range(8):
                    p = bg_pen(code, 7-px if fx else px, 7-py if fy else py)
                    for dy in range(2):
                        for dx in range(2):
                            Y, X = row*16+py*2+dy, col*16+px*2+dx
                            bgpen[Y][X] = p
                            bgidx[Y][X] = bank*16+p
                            bgpri[Y][X] = pri
    # sprite pass per MAME mcr68_update_sprites, two priority classes
    # priority bitmap semantics reduced to per-pixel layers:
    sp = [[None]*W for _ in range(H)]   # (idx, pri) of visible sprite pixel
    blocked = [[0]*W for _ in range(H)] # pen-8 mask (per priority class pass)
    for prio in (0,1):
        for y in range(H):
            for x in range(W):
                blocked[y][x] = 0
        for offs in range(2048-4, -1, -4):
            flags = sprram[offs+1] & 0xff
            code = (sprram[offs+2]&0xff) + 256*((flags>>3)&1) + 512*((flags>>6)&3)
            if code % 512 == 0: continue
            if ((flags>>2)&1) != prio: continue
            color = (~flags) & 3
            fx, fy = flags&0x10, flags&0x20
            x0 = (sprram[offs+3]&0xff)*2 - 4
            y0 = (241 - (sprram[offs]&0xff))*2
            if x0 > 0x1f0: x0 -= 0x200
            for sy in range(32):
                Y = (y0 + sy) & 0x3ff
                if Y >= H: continue
                for sx in range(32):
                    X = x0 + sx
                    if X < 0 or X >= W: continue
                    p = spr_pen(code % 512, 31-sx if fx else sx, 31-sy if fy else sy)
                    if p == 0: continue
                    if blocked[Y][X]: continue
                    if p == 8:
                        blocked[Y][X] = 1
                        # pen 8 draws visibly where it lands (mask color),
                        # sitting behind bg (handled at composite)
                        sp[Y][X] = (color*16+8, prio, True)
                    else:
                        sp[Y][X] = (color*16+p, prio, False)
    # composite: bg opaque -> lo sprites -> pri tiles -> hi sprites
    img = bytearray(W*H*3)
    for y in range(H):
        for x in range(W):
            idx = bgidx[y][x]
            s = sp[y][x]
            if s:
                sidx, spri, mask8 = s
                if mask8:
                    # pen 8: behind background (bg shows if bg pen != 0)
                    if bgpen[y][x] == 0: idx = sidx
                elif spri == 1:
                    idx = sidx
                else:
                    # lo sprite: pri tiles cover it
                    if not (bgpri[y][x] and bgpen[y][x] != 0):
                        idx = sidx
            c = expand(pal[idx])
            img[(y*W+x)*3:(y*W+x)*3+3] = bytes(c)
    return img

def main():
    state, png = sys.argv[1], sys.argv[2]
    vram, sprram, pal = load_state(state)
    img = render(vram, sprram, pal)
    if png == '-':                     # render-only mode
        write_png(sys.argv[3], 512, 480, img)
        print(f'rendered {sys.argv[3]}')
        return
    w,h,mame = read_png(png)
    diff = 0; diffmap = {}
    for i in range(0, len(img), 3):
        if img[i:i+3] != mame[i:i+3]:
            diff += 1
            y, x = (i//3)//512, (i//3)%512
            diffmap.setdefault((y//16, x//16), 0)
            diffmap[(y//16,x//16)] += 1
    total = len(img)//3
    print(f'diff {diff}/{total} ({100*diff/total:.3f}%)')
    for k, n in sorted(diffmap.items(), key=lambda x:-x[1])[:12]:
        print(f'  cell row{k[0]} col{k[1]}: {n} px')
    if len(sys.argv) > 3:
        write_png(sys.argv[3], 512, 480, img)

if __name__ == '__main__':
    main()
