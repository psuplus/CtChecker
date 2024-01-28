#!/usr/bin/env bash
# linking example

if [ "$(uname)" == "Darwin" ]; then
        EXT="dylib"
else
        EXT="so"
fi

COL=""
MEM2REG="-mem2reg"

COL+="WL"
COL+="/FS"
COL+="/FlS"
COL+="/SRC"

if [ "$COL" = "" ] ; then
        COL="Base"
fi
echo "Running with flags: $COL"

NAME=${1%.*}"1"

# change config file for each example
rm config.json

# if $2 is true, taint source like SC-Eliminator; otherwise, only taint key
if [ $2 = true ]; then
        echo "Taint like SC-Eliminator"
        if [[ "$NAME" == *"3way"* ]]; then
                cp config-3way.json config.json
        elif [[ "$NAME" == *"des"* ]]; then
                cp config-des.json config.json
        elif [[ "$NAME" == *"loki91"* ]]; then
                cp config-loki91.json config.json
        else
                echo "Wrong example name"
                exit 1
        fi
else
        echo "Taint only key"
        if [[ "$NAME" == *"3way"* ]]; then
                cp config-3way-ctchecker.json config.json
        elif [[ "$NAME" == *"des"* ]]; then
                cp config-des-ctchecker.json config.json
        elif [[ "$NAME" == *"loki91"* ]]; then
                cp config-loki91-ctchecker.json config.json
        else
                echo "Wrong example name"
                exit 1
        fi
fi

CPPFLAGS=
LLVMLIBS=
LDFLAGS=

LEVEL="../../../../../.."

$LEVEL/Debug+Asserts/bin/clang -isystem include -I include -O0 -emit-llvm -g -o $NAME".bc" -c $NAME".c"
# if your instrumentation code calls into LLVM libraries, then comment out the above and use these instead:
#CPPFLAGS=`llvm-config --cppflags`
#LLVMLIBS=`llvm-config --libs`
#LDFLAGS=`llvm-config --ldflags`

# CUR=$(pwd)
# cd ../../../;
# $LEVEL/Debug+Asserts/bin/llvm-as $NAME.ll -o $NAME".bc"
$LEVEL/Debug+Asserts/bin/opt -mem2reg -instnamer $NAME".bc" -o $NAME".bc"
$LEVEL/Debug+Asserts/bin/llvm-dis $NAME".bc" -o $NAME"_final.ll"

TIME=$(date +%s)
## opt -load *.so -infoflow < $BENCHMARKS/welcome/welcome.bc -o welcome.bc
$LEVEL/Debug+Asserts/bin/opt $MEM2REG -load $LEVEL/projects/poolalloc/Debug+Asserts/lib/LLVMDataStructure.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Constraints.$EXT  \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/sourcesinkanalysis.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/pointstointerface.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Deps.$EXT  \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Security.$EXT  \
  -vulnerablebranchwrapper < $NAME".bc" 2> tmp-$NAME.dat > /dev/null
TIME=$(echo "$(date +%s) - $TIME" | bc)
printf "Execution time: %d seconds\n" $TIME

CONS_FILENAME=$( echo 'constraints-'$NAME'.con' | tr '/' '-')
cat tmp-$NAME.dat | grep '^3:.*<:' | sed -nr 's/^[0-9]+:(.*)/\1/p' > $CONS_FILENAME

FILENAME=$( echo 'results-'$NAME'.txt' | tr '/' '-')
#export PATH="$PATH:../../processing_tools" # tmp change to path to have post-processing tools
WORKINGPATH=$(pwd)
PATTERN="/SC-Eliminator-original/[/a-zA-Z0-9_-]+"
NAMEPREFIX=$(echo "$WORKINGPATH" | grep -E -o "$PATTERN")
ROW="${NAMEPREFIX}/${NAME}"
SCRIPTPATH="${LEVEL}/projects/llvm-deps/mod_exp_tests/ct-rewriter-files/collecting_results_original.py"

if [ $2 = true ]; then
        RESULTPATH="${LEVEL}/projects/llvm-deps/mod_exp_tests/ct-rewriter-files/SC-Eliminator-original/results.csv"
else
        RESULTPATH="${LEVEL}/projects/llvm-deps/mod_exp_tests/ct-rewriter-files/SC-Eliminator-original/results-ctchecker.csv"
fi
python3 $SCRIPTPATH tmp-$NAME.dat $RESULTPATH $ROW $TIME > $FILENAME

#FILENAME=$( echo 'results_with_source-'$COL'.txt' | tr '/' '-')
#export PATH="$PATH:../../processing_tools" # tmp change to path to have post-processing tools
#python ../../processing_tools/post_analysis.py tmp.dat $START $END $COL 1 $FILE $TIME > $FILENAME

# COL=$( echo 'tmp-'$COL'.dat' | tr '/' '-')

# echo Output log: ./tmp.dat
# mv tmp.dat $COL
