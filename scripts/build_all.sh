#!/bin/bash

echo "Building for x86..."
gcc src/test_app.c -o build/app_x86

echo "Building for ARMv7..."
arm-linux-gnueabihf-gcc src/test_app.c -o build/app_armv7

echo "Building for RISC-V..."
riscv64-linux-gnu-gcc src/test_app.c -o build/app_riscv

echo "Build completed for all architectures"

