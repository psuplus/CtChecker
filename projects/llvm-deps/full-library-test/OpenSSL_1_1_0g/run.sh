#!/usr/bin/env bash
# linking example

if [ "$(uname)" == "Darwin" ]; then
    EXT="dylib"
else
    EXT="so"
fi

LEVEL="../../../.."

## opt -load *.so -infoflow < $BENCHMARKS/welcome/welcome.bc -o welcome.bc
$LEVEL/Debug+Asserts/bin/opt  -load $LEVEL/projects/poolalloc/Debug+Asserts/lib/LLVMDataStructure.$EXT \
                              -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Constraints.$EXT  \
                              -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/sourcesinkanalysis.$EXT \
                              -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/pointstointerface.$EXT \
                              -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Deps.$EXT  \
                              -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Security.$EXT  \
                              -vulnerablebranch  -debug < bn_full.bc 2> tmp.dat > /dev/null

export PATH="$PATH:../../processing_tools" # tmp change to path to have post-processing tools
post_analysis.py tmp.dat > results_with_source.txt
