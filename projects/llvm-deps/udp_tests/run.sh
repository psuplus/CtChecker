#!/usr/bin/env bash
# linking example

if [ "$(uname)" == "Darwin" ]; then
        EXT="dylib"
else
        EXT="so"
fi

cd ../
pwd
make
cd -


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

if git branch -a | grep -q '* udp'; then
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

echo "Running with flags: $COL"

LEVEL="../../.."



$LEVEL/Debug+Asserts/bin/llvm-link udp.bc route.bc -o $1
#$LEVEL/Debug+Asserts/bin/clang -O0 -g -emit-llvm -o $1 -c main.c
$LEVEL/Debug+Asserts/bin/opt -instnamer -mem2reg $1 -o $1
$LEVEL/Debug+Asserts/bin/llvm-dis $1 


TIME=$(date +%s)

$LEVEL/Debug+Asserts/bin/opt -stats -time-passes \
  -load $LEVEL/projects/poolalloc/Debug+Asserts/lib/LLVMDataStructure.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Constraints.$EXT  \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/sourcesinkanalysis.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/pointstointerface.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Deps.$EXT  \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Security.$EXT  \
  -implicit-function < $1 2> tmp.dat > /dev/null

TIME=$(echo "$(date +%s) - $TIME" | bc)
printf "Execution time: %d seconds\n" $TIME

CONS_FILENAME=$( echo 'constraints-'$COL'.con' | tr '/' '-')
cat tmp.dat | grep '<:' > $CONS_FILENAME

FILENAME=$( echo 'results_with_source-'$COL'.txt' | tr '/' '-')
export PATH="$PATH:../../processing_tools" # tmp change to path to have post-processing tools

COL=$( echo 'tmp-'$COL'.dat' | tr '/' '-')

echo Output log: ./$COL
# mv tmp.dat $COL

python3 constraint_file.py tmp.dat
python3 constraint_graph.py call-stack call-stack.dot -graph 1
rm -f call-stack