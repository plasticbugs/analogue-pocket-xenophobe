Put xenophobe.rom in this folder.

Build it from your own MAME xenophob romset with the builder shipped
alongside the core:

    python3 mra_build.py xenophobe.mra xenophob.zip

It checks every ROM's CRC32 and verifies the finished 851,968-byte image,
so a wrong or bad romset is reported rather than quietly built.
