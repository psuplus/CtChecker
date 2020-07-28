#!/usr/bin/env bash
# linking example

if [ "$(uname)" == "Darwin" ]; then
        EXT="dylib"
else
        EXT="so"
fi

COL=""
MEM2REG=""

cp whitelist.txt whitelist_tmp.txt
if [ $2 = true ] ; then
        if [ "$COL" = "" ] ; then
                COL+="WL"
        else
                COL+="/WL"
        fi
else
        : > whitelist.txt
fi

if git branch -a | grep -q '* master'; then
        if [ "$COL" = "" ] ; then
                COL+="FS"
        else
                COL+="/FS"
        fi
fi

if [ $3 = true ] ; then
        MEM2REG="-mem2reg"
        if [ "$COL" = "" ] ; then
                COL+="FlS"
        else
                COL+="/FlS"
        fi
fi

if [ $4 = true ] ; then
        if [ "$COL" = "" ] ; then
                COL+="SRC"
        else
                COL+="/SRC"
        fi
fi

echo "$COL"
echo "$MEM2REG"

CPPFLAGS=
LLVMLIBS=
LDFLAGS=
LEVEL="../../../.."

START=393
END=773
FILE="mpi/mpi-pow.c"

# if your instrumentation code calls into LLVM libraries, then comment out the above and use these instead:
#CPPFLAGS=`llvm-config --cppflags`
#LLVMLIBS=`llvm-config --libs`
#LDFLAGS=`llvm-config --ldflags`

# CUR=$(pwd)
# cd ../../../;
make full.bc
$LEVEL/Debug+Asserts/bin/llvm-dis full.bc
$LEVEL/Debug+Asserts/bin/clang -isystem include -I include -O0 -g -emit-llvm -c mpi/mpi-pow.c
$LEVEL/Debug+Asserts/bin/clang -isystem inlcude -I include -O0 -g -emit-llvm -S mpi/mpi-pow.c

## compile the instrumentation module to bitcode
## clang $CPPFLAGS -O0 -emit-llvm -c sample.cpp -o sample.bc

TIME=$(date +%s)
## opt -load *.so -infoflow < $BENCHMARKS/welcome/welcome.bc -o welcome.bc
$LEVEL/Debug+Asserts/bin/opt $MEM2REG -load $LEVEL/projects/poolalloc/Debug+Asserts/lib/LLVMDataStructure.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Constraints.$EXT  \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/sourcesinkanalysis.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/pointstointerface.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Deps.$EXT  \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Security.$EXT  \
  -constraint-generation  -debug < $1 2> tmp.dat > /dev/null
TIME=$(echo "$(date +%s) - $TIME" | bc)
printf "Execution time: %d seconds\n" $TIME

cat tmp.dat | grep '<:' > constraints.con

FILENAME=$( echo 'results_with_source-'$COL'.txt' | tr '/' '-')
export PATH="$PATH:../../processing_tools" # tmp change to path to have post-processing tools
post_analysis.py tmp.dat $START $END $COL 1 $FILE $TIME > $FILENAME

COL=$( echo 'tmp-'$COL'.dat' | tr '/' '-')

echo Output log: ./$COL
mv tmp.dat $COL

mv whitelist_tmp.txt whitelist.txt

## link instrumentation module
#llvm-link welcome.bc sample.bc -o welcome.linked.bc

## compile to native object file
#llc -filetype=obj welcome.linked.bc -o=welcome.o

## generate native executable
#g++ welcome.o $LLVMLIBS $LDFLAGS -o welcome

#./welcome

