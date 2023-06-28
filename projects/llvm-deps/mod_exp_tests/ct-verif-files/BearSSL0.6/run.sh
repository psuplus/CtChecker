#!/usr/bin/env bash
# linking example

if [ "$(uname)" == "Darwin" ]; then
        EXT="dylib"
else
        EXT="so"
fi

START=27
END=37

FILE="i32_tmont.c"

LEVEL="../../../../.."

make clean
make $1

$LEVEL/Debug+Asserts/bin/opt -mem2reg -instnamer $1 -o $1

## opt -load *.so -infoflow < $BENCHMARKS/welcome/welcome.bc -o welcome.bc
$LEVEL/Debug+Asserts/bin/opt -load $LEVEL/projects/poolalloc/Debug+Asserts/lib/LLVMDataStructure.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Constraints.$EXT  \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/sourcesinkanalysis.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/pointstointerface.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Deps.$EXT  \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Security.$EXT  \
  -vulnerablebranchwrapper  -debug < $1 2> tmp-$2.dat > /dev/null

ITER=$(cat tmp-$2.dat | grep -Ei 'Done after [0-9]* iterations.' | grep -oEi '[0-9]*')
ITER=$((ITER))
ITERTAG=$(expr $ITER \* 2)
CONS_FILENAME=$( echo 'constraints-'$2'.con' | tr '/' '-')
cat tmp-$2.dat | grep $ITERTAG':.*<:' > $CONS_FILENAME

FILENAME=$( echo 'results_with_source-'$2'.txt' | tr '/' '-')

export PATH="$PATH:../../../processing_tools" # tmp change to path to have post-processing tools
python ../../../processing_tools/post_analysis_ct_verif.py tmp-$2.dat $START $END $FILE > $FILENAME
