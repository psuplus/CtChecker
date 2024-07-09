#!/usr/bin/env bash
# linking example

if [ "$(uname)" == "Darwin" ]; then
        EXT="dylib"
else
        EXT="so"
fi

COL=""

COL+="WL"
COL+="/FS"
if [ $2 = true ] ; then
        MEM2REG="-mem2reg"
        COL+="/FlS"
else
        MEM2REG=""
fi
COL+="/SRC"

if [ "$COL" = "" ] ; then
        COL="Base"
fi
echo "Running with flags: $COL"

NAME=${1%.*}
# change config file for each example
# rm config.json
# if [[ "$NAME" == *"des"* ]]; then
#         cp config-des.json config.json
# else
#         echo "Wrong example name"
#         exit 1
# fi

CPPFLAGS=
LLVMLIBS=
LDFLAGS=

LEVEL="../../../../../../.."

$LEVEL/Debug+Asserts/bin/clang -isystem include -I include -O0 -emit-llvm -g -o $NAME".bc" -c $NAME".c"
# if your instrumentation code calls into LLVM libraries, then comment out the above and use these instead:
#CPPFLAGS=`llvm-config --cppflags`
#LLVMLIBS=`llvm-config --libs`
#LDFLAGS=`llvm-config --ldflags`

# CUR=$(pwd)
# cd ../../../;
# $LEVEL/Debug+Asserts/bin/llvm-as $NAME.ll -o $NAME".bc"
$LEVEL/Debug+Asserts/bin/opt $MEM2REG -instnamer $NAME".bc" -o $NAME".bc"
$LEVEL/Debug+Asserts/bin/llvm-dis $NAME".bc" -o $NAME"_final.ll"

TIME=$(date +%s)
## opt -load *.so -infoflow < $BENCHMARKS/welcome/welcome.bc -o welcome.bc
$LEVEL/Debug+Asserts/bin/opt -load $LEVEL/projects/poolalloc/Debug+Asserts/lib/LLVMDataStructure.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Constraints.$EXT  \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/sourcesinkanalysis.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/pointstointerface.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Deps.$EXT  \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Security.$EXT  \
  -vulnerablebranchwrapper  < $NAME".bc" 2> tmp-$NAME.dat > /dev/null
TIME=$(echo "$(date +%s) - $TIME" | bc)
printf "Execution time: %d seconds\n" $TIME

CONS_FILENAME=$( echo 'constraints-'$NAME'.con' | tr '/' '-')
cat tmp-$NAME.dat | grep '^3:.*<:' | sed -nr 's/^[0-9]+:(.*)/\1/p' > $CONS_FILENAME

FILENAME=$( echo 'results-'$NAME'.txt' | tr '/' '-')
#export PATH="$PATH:../../processing_tools" # tmp change to path to have post-processing tools
WORKINGPATH=$(pwd)
PATTERN="/Constantine/[/a-zA-Z0-9_-]+"
NAMEPREFIX=$(echo "$WORKINGPATH" | grep -E -o "$PATTERN")
ROW="${NAMEPREFIX}/${NAME}"
SCRIPTPATH="${LEVEL}/projects/llvm-deps/mod_exp_tests/ct-rewriter-files/collecting_results.py"
if [ $2 = true ] ; then
        RESULTPATH="${LEVEL}/projects/llvm-deps/mod_exp_tests/ct-rewriter-files/Constantine/results.csv"
else
        RESULTPATH="${LEVEL}/projects/llvm-deps/mod_exp_tests/ct-rewriter-files/Constantine/results-noFLS.csv"
fi
python $SCRIPTPATH tmp-$NAME.dat $RESULTPATH $ROW $TIME > $FILENAME

# COL=$( echo 'tmp-'$COL'.dat' | tr '/' '-')

# echo Output log: ./tmp.dat
# mv tmp.dat $COL
