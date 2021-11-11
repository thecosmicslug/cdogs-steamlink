#!/bin/sh
# To create a debug build, run `cmake -D CMAKE_BUILD_TYPE=Debug .` instead

echo "Checking For SDK..."
source "../../setenv.sh"

git submodule update --init
echo "Building C-Dogs..."

cmake -DCMAKE_TOOLCHAIN_FILE="../../toolchain/steamlink-toolchain.cmake" -DCMAKE_PREFIX_PATH="../../rootfs/usr/lib/cmake/SDL2" -DNANOPB_GENERATOR_SOURCE_DIR="./src/proto/nanopb/extra" -DBUILD_EDITOR=OFF -DCDOGS_DATA_DIR="./" .
make || exit 2

# Prepare package directory
rm "./output/cdogs-steamlink/cdogs-sdl" 2> /dev/null || echo > /dev/null
rm "./output/cdogs-sdl" 2> /dev/null || echo > /dev/null
rm "./output/cdogs-steamlink.tgz" 2> /dev/null || echo > /dev/null

mv "./src/cdogs-sdl" "./output/cdogs-steamlink/cdogs-sdl"
cp "./output/cdogs-steamlink/cdogs-sdl" "./output/cdogs-sdl"

echo "Packaging it for Steam-Link...."
export DESTDIR="${PWD}/output/cdogs-steamlink"
cd output

name=$(basename ${DESTDIR})
tar zcf $name.tgz $name || exit 3

rm "./cdogs-steamlink/cdogs-sdl" 2> /dev/null || echo > /dev/null
echo "Build Complete! Check in /output/ directory."
