#!/bin/sh
# Publish a release built from a specific, hardware-verified CI build.
#
# Usage: cut-release.sh <tag> <run-id>
#        cut-release.sh v1.0.0 32214080417
#
# Takes the bitstream from that run rather than recompiling, so the release
# ships the exact gateware that was tested on hardware. Everything outside the
# bitstream (JSON definitions, platform image, ROM recipe, README) comes from
# the working tree, which is how a definition-only change can be released
# without a rebuild.
#
# Creating the tag triggers the Compile Core workflow; it sees the release
# already exists and skips publishing, leaving this artifact in place.
set -e
TAG="$1"
RUN="$2"
[ -n "$TAG" ] && [ -n "$RUN" ] || { echo "usage: cut-release.sh <tag> <run-id>"; exit 1; }
cd "$(dirname "$0")/.."

command -v gh >/dev/null || { echo "gh CLI required"; exit 1; }
if gh release view "$TAG" >/dev/null 2>&1; then
    echo "release $TAG already exists; delete it first or pick another tag"; exit 1
fi
if [ -n "$(git status --porcelain pkg target rtl platform projects)" ]; then
    echo "working tree has uncommitted core changes; commit them so the tag matches"; exit 1
fi

STAGE=$(mktemp -d)
trap 'rm -rf "$STAGE"' EXIT

echo "fetching bitstream from run $RUN ..."
gh run download "$RUN" -D "$STAGE" || { echo "download failed"; exit 1; }
RBF=$(find "$STAGE" -name 'bitstream.rbf_r' | head -1)
[ -n "$RBF" ] || { echo "no bitstream in run $RUN"; exit 1; }
SIZE=$(wc -c < "$RBF")
[ "$SIZE" -gt 500000 ] || { echo "bitstream only $SIZE bytes, looks truncated"; exit 1; }

# Assemble the package: definitions from the tree, bitstream from the run.
OUT="$STAGE/release/pocket"
rm -rf "$OUT"; mkdir -p "$OUT"
tar -cf - --exclude '.DS_Store' -C pkg/pocket . | tar -xf - -C "$OUT"
cp "$RBF" "$OUT/Cores/plasticbugs.xenophobe/bitstream.rbf_r"
for extra in xenophobe.mra README.md tools/mra_build.py; do
    [ -f "$extra" ] && cp "$extra" "$OUT/$(basename "$extra")"
done

# Sanity-check the package before it goes out.
for f in Cores/plasticbugs.xenophobe/core.json Cores/plasticbugs.xenophobe/input.json \
         Cores/plasticbugs.xenophobe/interact.json Cores/plasticbugs.xenophobe/data.json \
         Platforms/xenophobe.json Platforms/_images/xenophobe.bin xenophobe.mra; do
    [ -e "$OUT/$f" ] || { echo "package missing $f"; exit 1; }
done
for j in "$OUT"/Cores/plasticbugs.xenophobe/*.json "$OUT"/Platforms/*.json; do
    python3 -c "import json,sys; json.load(open(sys.argv[1]))" "$j" || { echo "bad json: $j"; exit 1; }
done
if find "$OUT" -name '*.rom' | grep -q .; then
    echo "refusing to publish: a ROM is in the package"; exit 1
fi

VER=$(python3 -c "import json;print(json.load(open('pkg/pocket/Cores/plasticbugs.xenophobe/core.json'))['core']['metadata']['version'])")
ZIP="$PWD/xenophobe-pocket-sdcard.zip"
rm -f "$ZIP"
(cd "$OUT" && zip -qr "$ZIP" .)
echo "package $VER, bitstream md5 $(md5 -q "$RBF"), zip $(wc -c < "$ZIP") bytes"

gh release create "$TAG" \
    --title "Xenophobe for Analogue Pocket $TAG" \
    --notes-file docs/release-notes.md \
    "$ZIP"
rm -f "$ZIP"
echo "published $TAG"
