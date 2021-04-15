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
        : > whitelist_tmp.txt
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

START=27
END=37
FILE="i32_tmont.c"


if [ "$COL" = "" ] ; then
        COL="Base"
fi
echo "Running with flags: $COL"
# echo "$MEM2REG"


LEVEL="../../../.."

make $1

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
post_analysis.py tmp.dat $START $END $COL 3 $FILE $TIME > $FILENAME

COL=$( echo 'tmp-'$COL'.dat' | tr '/' '-')

echo Output log: ./$COL
mv tmp.dat $COL

rm whitelist_tmp.txt
