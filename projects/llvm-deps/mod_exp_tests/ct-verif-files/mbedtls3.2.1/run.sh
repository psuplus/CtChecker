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
LEVEL="../../../../.."

if [[ "$1" == *"min"* ]]; then
    FILE="bign2/"$2"_min.c"
    START=396
    END=633
else
    FILE="bign2/"$2".c"
    START=1967
    END=2202
fi

# if your instrumentation code calls into LLVM libraries, then comment out the above and use these instead:
#CPPFLAGS=`llvm-config --cppflags`
#LLVMLIBS=`llvm-config --libs`
#LDFLAGS=`llvm-config --ldflags`

CUR=$(pwd)

make $1

$LEVEL/Debug+Asserts/bin/opt -mem2reg -instnamer $1 -o $1

## opt -load *.so -infoflow < $BENCHMARKS/welcome/welcome.bc -o welcome.bc
$LEVEL/Debug+Asserts/bin/opt -load $LEVEL/projects/poolalloc/Debug+Asserts/lib/LLVMDataStructure.$EXT \
-load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Constraints.$EXT  \
-load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/sourcesinkanalysis.$EXT \
-load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/pointstointerface.$EXT \
-load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Deps.$EXT  \
-load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Security.$EXT  \
-vulnerablebranch  -debug < $1 2> tmp-$2.dat > /dev/null

CONS_FILENAME=$( echo 'constraints-'$2'.con' | tr '/' '-')
cat tmp-$2.dat | grep '<:' > $CONS_FILENAME

FILENAME=$( echo 'results_with_source-'$2'.txt' | tr '/' '-')

export PATH="$PATH:../../../processing_tools" # tmp change to path to have post-processing tools
python ../../../processing_tools/post_analysis_ct_verif.py tmp-$2.dat $START $END $FILE > $FILENAME
## link instrumentation module
#llvm-link welcome.bc sample.bc -o welcome.linked.bc

## compile to native object file
#llc -filetype=obj welcome.linked.bc -o=welcome.o

## generate native executable
#g++ welcome.o $LLVMLIBS $LDFLAGS -o welcome

#./welcome
