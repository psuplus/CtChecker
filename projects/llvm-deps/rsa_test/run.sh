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
LEVEL="../../.."

# if your instrumentation code calls into LLVM libraries, then comment out the above and use these instead:
#CPPFLAGS=`llvm-config --cppflags`
#LLVMLIBS=`llvm-config --libs`
#LDFLAGS=`llvm-config --ldflags`

## compile the instrumentation module to bitcode
## clang $CPPFLAGS -O0 -emit-llvm -c sample.cpp -o sample.bc
$LEVEL/Debug+Asserts/bin/clang -O0 -g -emit-llvm -o rsa.bc -c rsa.c
$LEVEL/Debug+Asserts/bin/clang -O0 -g -emit-llvm -o bignum.bc -c bignum.c
$LEVEL/Debug+Asserts/bin/clang -O0 -g -emit-llvm -S rsa.c
$LEVEL/Debug+Asserts/bin/clang -O0 -g -emit-llvm -S bignum.c
$LEVEL/Debug+Asserts/bin/llvm-link bignum.bc -o rsa_mpi.bc

## opt -load *.so -infoflow < $BENCHMARKS/welcome/welcome.bc -o welcome.bc
$LEVEL/Debug+Asserts/bin/opt  -load $LEVEL/projects/poolalloc/Debug+Asserts/lib/LLVMDataStructure.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Constraints.$EXT  \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/sourcesinkanalysis.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/pointstointerface.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Deps.$EXT  \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Security.$EXT  \
  -vulnerablebranch  -debug < rsa_mpi.bc 2> tmp.dat > /dev/null

export PATH="$PATH:../processing_tools" # tmp change to path to have post-processing tools
post_analysis.py tmp.dat > results_with_source.txt
## link instrumentation module
#llvm-link welcome.bc sample.bc -o welcome.linked.bc

## compile to native object file
#llc -filetype=obj welcome.linked.bc -o=welcome.o

## generate native executable
#g++ welcome.o $LLVMLIBS $LDFLAGS -o welcome

#./welcome

