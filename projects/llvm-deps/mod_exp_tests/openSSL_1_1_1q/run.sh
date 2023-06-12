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

BRANCH=$(git rev-parse --abbrev-ref HEAD | grep "baseline")
if [[ $BRANCH == "" ]]; then
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
# echo "$MEM2REG"

CPPFLAGS=
LLVMLIBS=
LDFLAGS=
LEVEL="../../../../"

FILE="bn_exp.c"

#use makefile
make $1
$LEVEL/Debug+Asserts/bin/opt $MEM2REG -instnamer $1 -o $1
# $LEVEL/Debug+Asserts/bin/opt -inline -inline-threshold=0 $1 -o $1
$LEVEL/Debug+Asserts/bin/llvm-dis $1

for FUNC in "recp" "mont" "mont_consttime" "mont_word" ;
    do
        FN="BN_mod_exp_"$FUNC
        echo $FN
        sed -i -r "s/BN_mod_exp[A-Za-z_]*/$FN/g" "config.json"
        
        if [ $FUNC == "recp" ]; then
            echo "recp"
            START=161
            END=295
            TABLECOL=4
        elif [ $FUNC == "mont" ]; then
            echo "mont"
            START=297
            END=471
            TABLECOL=5
        elif [ $FUNC == "mont_consttime" ]; then
            echo "mont_consttime"
            START=593
            END=1136
            TABLECOL=6
        elif [ $FUNC == "mont_word" ]; then
            echo "mont_word"
            START=1138
            END=1283
            TABLECOL=7
        fi 

        TIME=$(date +%s)
        ## opt -load *.so -infoflow < $BENCHMARKS/welcome/welcome.bc -o welcome.bc
        $LEVEL/Debug+Asserts/bin/opt -load $LEVEL/projects/poolalloc/Debug+Asserts/lib/LLVMDataStructure.$EXT \
        -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Constraints.$EXT  \
        -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/sourcesinkanalysis.$EXT \
        -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/pointstointerface.$EXT \
        -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Deps.$EXT  \
        -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Security.$EXT  \
        -vulnerablebranchwrapper  -debug < $1 2>tmp.dat > /dev/null
        TIME=$(echo "$(date +%s) - $TIME" | bc)
        printf "Execution time: %d seconds\n" $TIME

        CONS_FILENAME=$( echo 'constraints-'$FUNC'-'$COL'.con' | tr '/' '-')
        cat tmp.dat | grep '<:' > $CONS_FILENAME

        FILENAME=$( echo 'results_with_source-'$FUNC'-'$COL'.txt' | tr '/' '-')
        #export PATH="$PATH:../../processing_tools" # tmp change to path to have post-processing tools
        python ../../processing_tools/post_analysis.py tmp.dat $START $END $COL $TABLECOL $FILE $TIME > $FILENAME

        DAT=$( echo 'tmp-'$FUNC'-'$COL'.dat' | tr '/' '-')

        echo Output log: ./$DAT
        mv tmp.dat $DAT
    done