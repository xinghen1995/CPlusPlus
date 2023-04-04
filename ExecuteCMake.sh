#!/bin/bash

build_dir=build-cmake

if ! type cmake > /dev/null; then
    echo "Do not found cmake"
    exit 1
fi

if ! type ninja > /dev/null; then
    echo "Do not found ninja"
    exit 2
fi

if [ ! -d $build_dir ]; then
    cmake -DCMAKE_TOOLCHAIN_FILE=CPlusPlus.cmake -B$build_dir -G Ninja
fi

cmake --build $build_dir
