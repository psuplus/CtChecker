#!/usr/bin/env bash
# linking example

if [ "$(uname)" == "Darwin" ]; then
        EXT="dylib"
else
        EXT="so"
fi

CPPFLAGS=
LLVMLIBS=
LDFLAGS=
LEVEL="../../../../"

cd ../..
make CC=gcc-12 CXX=g++-12
cd -

$LEVEL/Debug+Asserts/bin/clang -O0 -g -emit-llvm -o test.bc -c main.c
$LEVEL/Debug+Asserts/bin/opt -mem2reg -instnamer test.bc -o test.bc
$LEVEL/Debug+Asserts/bin/llvm-dis test.bc

$LEVEL/Debug+Asserts/bin/opt  -load $LEVEL/projects/poolalloc/Debug+Asserts/lib/LLVMDataStructure.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Constraints.$EXT  \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/sourcesinkanalysis.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/pointstointerface.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Deps.$EXT  \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Security.$EXT  \
  -constraint-generation -debug < test.bc 2> tmp.dat > /dev/null

CONS_FILENAME=$( echo 'constraints.con' | tr '/' '-')
cat tmp.dat | grep '<:' > $CONS_FILENAME

# TODO: need to modify the script to support predicate constraints.
# python3 ../../processing_tools/constraint_graph.py constraints.con tmp.dot