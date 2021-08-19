#!/usr/bin/env bash
# linking example

BASE_DIR=/home/quan/Documents
LINUX_DIR=$BASE_DIR/linux
CUR_DIR=$BASE_DIR/LLVM-Deps
BIN_DIR=$CUR_DIR/Debug+Asserts/bin
ANALYSIS_DIR=$CUR_DIR/projects/llvm-deps/linux_security_tests/tomoyo

sudo update-alternatives --set gcc /usr/bin/gcc-5
sudo update-alternatives --set g++ /usr/bin/g++-5

cd $LINUX_DIR
pwd
make V=0 \
    CLANG_FLAGS="-emit-llvm-bc" \
    HOSTCC="/home/quan/Documents/LLVM-Deps/Debug+Asserts/bin/clang --save-temps=obj -no-integrated-as -g" \
    CC="/home/quan/Documents/LLVM-Deps/Debug+Asserts/bin/clang --save-temps=obj -no-integrated-as -g" \
    -j8 M=security/tomoyo \
    2>/dev/null

cd security/tomoyo
pwd
$BIN_DIR/llvm-link \
    file.bc util.bc tomoyo.bc \
    -o t-u-f.bc

mv t-u-f.bc $ANALYSIS_DIR/
cd $ANALYSIS_DIR
pwd
ls -la t-u-f.bc
$BIN_DIR/llvm-dis t-u-f.bc

sudo update-alternatives --set gcc /usr/bin/gcc-10
sudo update-alternatives --set g++ /usr/bin/g++-10