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

# if your instrumentation code calls into LLVM libraries, then comment out the above and use these instead:
#CPPFLAGS=`llvm-config --cppflags`
#LLVMLIBS=`llvm-config --libs`
#LDFLAGS=`llvm-config --ldflags`

CUR=$(pwd)

make $1
cd $CUR

## opt -load *.so -infoflow < $BENCHMARKS/welcome/welcome.bc -o welcome.bc
$LEVEL/Debug+Asserts/bin/opt -mem2reg -load $LEVEL/projects/poolalloc/Debug+Asserts/lib/LLVMDataStructure.$EXT \
-load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Constraints.$EXT  \
-load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/sourcesinkanalysis.$EXT \
-load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/pointstointerface.$EXT \
-load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Deps.$EXT  \
-load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Security.$EXT  \
-vulnerablebranchwrapper  -debug < $1 2> tmp.dat > /dev/null

export PATH="$PATH:../../../processing_tools" # tmp change to path to have post-processing tools
post_analysis.py tmp.dat > $2
## link instrumentation module
#llvm-link welcome.bc sample.bc -o welcome.linked.bc

## compile to native object file
#llc -filetype=obj welcome.linked.bc -o=welcome.o

## generate native executable
#g++ welcome.o $LLVMLIBS $LDFLAGS -o welcome

#./welcome
