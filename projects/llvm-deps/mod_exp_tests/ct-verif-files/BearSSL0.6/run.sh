#!/usr/bin/env bash
# linking example

if [ "$(uname)" == "Darwin" ]; then
        EXT="dylib"
else
        EXT="so"
fi

if [ $2 == "v2" ] ; then
        START=27
        END=37
elif [ $2 == "v3" ] ; then
        START=27
        END=37
elif [ $2 == "v4" ] ; then
        START=27
        END=37
fi

FILE="i32_tmont.c"

LEVEL="../../../../.."

make clean
make $1

## opt -load *.so -infoflow < $BENCHMARKS/welcome/welcome.bc -o welcome.bc
$LEVEL/Debug+Asserts/bin/opt -mem2reg -load $LEVEL/projects/poolalloc/Debug+Asserts/lib/LLVMDataStructure.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Constraints.$EXT  \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/sourcesinkanalysis.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/pointstointerface.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Deps.$EXT  \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Security.$EXT  \
  -vulnerablebranch  -debug < $1 2> tmp.dat > /dev/null

CONS_FILENAME=$( echo 'constraints-'$2'.con' | tr '/' '-')
cat tmp.dat | grep '<:' > $CONS_FILENAME

FILENAME=$( echo 'results_with_source-'$2'.txt' | tr '/' '-')

export PATH="$PATH:../../../processing_tools" # tmp change to path to have post-processing tools
python ../../../processing_tools/post_analysis_ct_verif.py tmp.dat $START $END $FILE > $FILENAME
