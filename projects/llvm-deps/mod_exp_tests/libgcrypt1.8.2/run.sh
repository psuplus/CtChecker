#!/usr/bin/env bash
# linking example

if [ "$(uname)" == "Darwin" ]; then
        EXT="dylib"
else
        EXT="so"
fi

COL=""
MEM2REG=""


if [ $2 = true ] ; then
        if [ "$COL" = "" ] ; then
                COL+="WL"
        else
                COL+="/WL"
        fi
        sed -i -r "s/\"using_whitelist\": false/\"using_whitelist\": true/g" "config.json"
else
        sed -i -r "s/\"using_whitelist\": true/\"using_whitelist\": false/g" "config.json"
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

if [ "$COL" = "" ] ; then
        COL="Base"
fi
echo "Running with flags: $COL"

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
make mpi-pow.bc
$LEVEL/Debug+Asserts/bin/llvm-dis full.bc
$LEVEL/Debug+Asserts/bin/llvm-dis mpi-pow.bc

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
  -vulnerablebranch  -debug < $1 2> tmp.dat > /dev/null
TIME=$(echo "$(date +%s) - $TIME" | bc)
printf "Execution time: %d seconds\n" $TIME

CONS_FILENAME=$( echo 'constraints-'$COL'.con' | tr '/' '-')
cat tmp.dat | grep '<:' > $CONS_FILENAME

FILENAME=$( echo 'results_with_source-'$COL'.txt' | tr '/' '-')
export PATH="$PATH:../../processing_tools" # tmp change to path to have post-processing tools
post_analysis.py tmp.dat $START $END $COL 1 $FILE $TIME > $FILENAME

COL=$( echo 'tmp-'$COL'.dat' | tr '/' '-')

echo Output log: ./$COL
mv tmp.dat $COL
