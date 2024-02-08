#!/bin/bash
kslicer_directory="/home/frol/PROG/kernel_slicer"
current_directory=$(pwd)           # получаем текущую директорию и сохраняем в переменную
cd "$kslicer_directory" || exit 1  # переходим в директорию слайсера, запускать нужно из неё

$kslicer_directory/cmake-build-release/kslicer $current_directory/test.cpp \
-mainClass "Test" \
-pattern "ipv" \
-shaderCC "glsl" \
-suffix "_GPU" \
-stdlibfolder "$kslicer_directory/TINYSTL" \
-I$kslicer_directory/TINYSTL "ignore" \
-DKERNEL_SLICER \
-v 
