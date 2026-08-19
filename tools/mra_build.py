#!/usr/bin/env python3
"""Build a Pocket .rom from an .mra description and a MAME romset zip.

Implements the subset of the MRA format this core uses: <part> (plain
concatenation) and <interleave output="16"> with two-digit part maps. Each
digit of a map is one byte of the output word, left to right; the digit's
value is the 1-based byte of the input part to place there, 0 meaning "this
part does not supply this byte".

Written so end users need nothing but Python 3 -- no MiSTer tooling, and no
unzipping the romset by hand. The standard MRA tools consume the same .mra
file if they already have them.

Usage:
    mra_build.py <file.mra> <romset.zip> [out.rom]
    mra_build.py xenophobe.mra xenophob.zip
"""
import sys, os, zipfile, hashlib, zlib
import xml.etree.ElementTree as ET


def load_parts(zf):
    """Map lowercase member name -> bytes, ignoring any directory prefix."""
    out = {}
    for info in zf.infolist():
        if info.is_dir():
            continue
        out[os.path.basename(info.filename).lower()] = zf.read(info)
    return out


def get_part(parts, node):
    name = node.get('name')
    if name is None:
        sys.exit('error: <part> without a name attribute is not supported')
    data = parts.get(name.lower())
    if data is None:
        sys.exit(f'error: {name} missing from the romset zip')
    crc = node.get('crc')
    if crc is not None:
        actual = zlib.crc32(data) & 0xffffffff
        if actual != int(crc, 16):
            sys.exit(f'error: {name} CRC {actual:08x}, expected {int(crc,16):08x} '
                     '(wrong or bad dump)')
    off = int(node.get('offset', '0'), 0)
    length = node.get('length')
    data = data[off:off + int(length, 0)] if length else data[off:]
    return name, data


def do_interleave(parts, node):
    width = int(node.get('output', '16'))
    if width % 8:
        sys.exit(f'error: interleave output="{width}" is not a whole number of bytes')
    nbytes = width // 8

    sources = []          # (data, map_string)
    for child in node:
        if child.tag != 'part':
            sys.exit(f'error: <{child.tag}> inside <interleave> is not supported')
        name, data = get_part(parts, child)
        m = child.get('map')
        if m is None:
            sys.exit(f'error: {name} inside <interleave> needs a map attribute')
        if len(m) != nbytes:
            sys.exit(f'error: {name} map "{m}" has {len(m)} digits, '
                     f'output="{width}" needs {nbytes}')
        sources.append((name, data, m))

    # Bytes each part contributes per output word == count of non-zero digits.
    stride = {name: sum(1 for d in m if d != '0') for name, _, m in sources}
    words = max(len(d) // stride[name] for name, d, _ in sources if stride[name])

    out = bytearray(words * nbytes)
    for name, data, m in sources:
        for pos, digit in enumerate(m):        # pos = output byte, left to right
            if digit == '0':
                continue
            src = int(digit) - 1               # 1-based byte within the part
            step = stride[name]
            for w in range(words):
                i = w * step + src
                if i < len(data):
                    out[w * nbytes + pos] = data[i]
    return bytes(out)


def build(mra_path, zip_path):
    root = ET.parse(mra_path).getroot()
    rom = None
    for r in root.iter('rom'):
        if r.get('index', '0') == '0':
            rom = r
            break
    if rom is None:
        sys.exit('error: no <rom index="0"> in the mra file')

    with zipfile.ZipFile(zip_path) as zf:
        parts = load_parts(zf)

        image = bytearray()
        for node in rom:
            if node.tag == 'part':
                image += get_part(parts, node)[1]
            elif node.tag == 'interleave':
                image += do_interleave(parts, node)
            else:
                sys.exit(f'error: <{node.tag}> inside <rom> is not supported')

    want = rom.get('md5')
    got = hashlib.md5(image).hexdigest()
    if want and want.lower() not in ('none', 'ignore') and got != want.lower():
        sys.exit(f'error: built image md5 {got}, expected {want}\n'
                 '       the romset does not match the one this core was verified against')
    return bytes(image), got


def main():
    if len(sys.argv) < 3:
        sys.exit(__doc__)
    mra, zp = sys.argv[1], sys.argv[2]
    out = sys.argv[3] if len(sys.argv) > 3 else None
    if out is None:
        root = ET.parse(mra).getroot()
        name = root.findtext('name') or 'output'
        out = name.lower().replace(' ', '_') + '.rom'

    image, md5 = build(mra, zp)
    with open(out, 'wb') as f:
        f.write(image)
    print(f'wrote {out} ({len(image)} bytes, md5 {md5}) - verified')
    print('copy it to  Assets/xenophobe/common/  on your Pocket SD card')


if __name__ == '__main__':
    main()
