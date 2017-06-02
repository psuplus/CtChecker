#!/usr/bin/env bash

if [ "$(uname)"  == "Darwin" ]; then
    EXT="dylib"
else
    EXT="so"
fi

CLANGDIR=../../..
CLANGBIN=$CLANGDIR/Debug+Asserts/bin
echo "Generating bitcode and llvm files."
$CLANGBIN/clang -O0 -g -emit-llvm -o withptr.bc -c withptr.c
$CLANGBIN/clang -O0 -g -S -emit-llvm -c withptr.c
$CLANGBIN/clang -O0 -g -emit-llvm -o noptr.bc -c noptr.c
$CLANGBIN/clang -O0 -g -S -emit-llvm -c noptr.c


echo "Running analysis on withptr.c. File output to withptr.txt"
$CLANGBIN/opt \
      -load $CLANGDIR/projects/poolalloc/Debug+Asserts/lib/LLVMDataStructure.$EXT \
      -load $CLANGDIR/projects/llvm-deps/Debug+Asserts/lib/Constraints.$EXT  \
      -load $CLANGDIR/projects/llvm-deps/Debug+Asserts/lib/sourcesinkanalysis.$EXT \
      -load $CLANGDIR/projects/llvm-deps/Debug+Asserts/lib/pointstointerface.$EXT \
      -load $CLANGDIR/projects/llvm-deps/Debug+Asserts/lib/Deps.$EXT  \
      -load $CLANGDIR/projects/llvm-deps/Debug+Asserts/lib/Security.$EXT  \
      -taintanalysis -debug < withptr.bc > /dev/null 2> withptr.txt

echo "Running analysis on noptr.c. File output to noptr.txt"
$CLANGBIN/opt \
    -load $CLANGDIR/projects/poolalloc/Debug+Asserts/lib/LLVMDataStructure.$EXT \
    -load $CLANGDIR/projects/llvm-deps/Debug+Asserts/lib/Constraints.$EXT  \
    -load $CLANGDIR/projects/llvm-deps/Debug+Asserts/lib/sourcesinkanalysis.$EXT \
    -load $CLANGDIR/projects/llvm-deps/Debug+Asserts/lib/pointstointerface.$EXT \
    -load $CLANGDIR/projects/llvm-deps/Debug+Asserts/lib/Deps.$EXT  \
    -load $CLANGDIR/projects/llvm-deps/Debug+Asserts/lib/Security.$EXT  \
    -taintanalysis -debug < noptr.bc > /dev/null 2> noptr.txt

