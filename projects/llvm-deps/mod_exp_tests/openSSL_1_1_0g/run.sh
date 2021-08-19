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

# if your instrumentation code calls into LLVM libraries, then comment out the above and use these instead:
#CPPFLAGS=`llvm-config --cppflags`
#LLVMLIBS=`llvm-config --libs`
#LDFLAGS=`llvm-config --ldflags`



#use makefile
make $1

for FUNC in "recp" "mont" "mont_consttime" "mont_word" ;
    do
        FN="BN_mod_exp_"$FUNC
        echo $FN
        sed -i -r "s/BN_mod_exp[A-Za-z_]*/$FN/g" "config.json"
        
        if [ $FUNC == "recp" ]; then
            echo "recp"
            START=170
            END=305
            TABLECOL=4
        elif [ $FUNC == "mont" ]; then
            echo "mont"
            START=305
            END=485
            TABLECOL=5
        elif [ $FUNC == "mont_consttime" ]; then
            echo "mont_consttime"
            START=593
            END=1096
            TABLECOL=6
        elif [ $FUNC == "mont_word" ]; then
            echo "mont_word"
            START=1096
            END=1244
            TABLECOL=7
        fi 

        TIME=$(date +%s)
        ## opt -load *.so -infoflow < $BENCHMARKS/welcome/welcome.bc -o welcome.bc
        $LEVEL/Debug+Asserts/bin/opt $MEM2REG -load $LEVEL/projects/poolalloc/Debug+Asserts/lib/LLVMDataStructure.$EXT \
        -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Constraints.$EXT  \
        -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/sourcesinkanalysis.$EXT \
        -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/pointstointerface.$EXT \
        -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Deps.$EXT  \
        -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Security.$EXT  \
        -vulnerablebranch  -debug < $1 2>tmp.dat > /dev/null
        TIME=$(echo "$(date +%s) - $TIME" | bc)
        printf "Execution time: %d seconds\n" $TIME

        CONS_FILENAME=$( echo 'constraints-'$FUNC'-'$COL'.con' | tr '/' '-')
        cat tmp.dat | grep '<:' > $CONS_FILENAME

        FILENAME=$( echo 'results_with_source-'$FUNC'-'$COL'.txt' | tr '/' '-')
        # echo $FILENAME
        export PATH="$PATH:../../processing_tools" # tmp change to path to have post-processing tools
        post_analysis.py tmp.dat $START $END $COL $TABLECOL $FILE $TIME > $FILENAME

        DAT=$( echo 'tmp-'$FUNC'-'$COL'.dat' | tr '/' '-')

        echo Output log: ./$DAT
        mv tmp.dat $DAT
    done

rm whitelist_tmp.txt

# TIME=$(date +%s)
# ## opt -load *.so -infoflow < $BENCHMARKS/welcome/welcome.bc -o welcome.bc
# $LEVEL/Debug+Asserts/bin/opt $MEM2REG -load $LEVEL/projects/poolalloc/Debug+Asserts/lib/LLVMDataStructure.$EXT \
#   -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Constraints.$EXT  \
#   -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/sourcesinkanalysis.$EXT \
#   -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/pointstointerface.$EXT \
#   -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Deps.$EXT  \
#   -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Security.$EXT  \
#   -vulnerablebranch  -debug < $1 2>tmp.dat > /dev/null
# TIME=$(echo "$(date +%s) - $TIME" | bc)
# printf "Execution time: %d seconds\n" $TIME

# FILENAME=$( echo 'results_with_source-'$COL'.txt' | tr '/' '-')
# export PATH="$PATH:../../processing_tools" # tmp change to path to have post-processing tools
# post_analysis.py tmp.dat 170 305 $COL 4 $FILE $TIME > $FILENAME
# post_analysis.py tmp.dat 305 485 $COL 5 $FILE $TIME > $FILENAME
# post_analysis.py tmp.dat 593 1096 $COL 6 $FILE $TIME > $FILENAME
# post_analysis.py tmp.dat 1096 1244 $COL 7 $FILE $TIME > $FILENAME

# COL=$( echo 'tmp-'$COL'.dat' | tr '/' '-')

# echo Output log: ./$COL
# mv tmp.dat $COL

# mv whitelist_tmp.txt whitelist.txt

#SPLITPY="../utils/split.py"
#$SPLITPY > split.txt
#mv split.txt results_with_source.txt


## link instrumentation module
#llvm-link welcome.bc sample.bc -o welcome.linked.bc

## compile to native object file
#llc -filetype=obj welcome.linked.bc -o=welcome.o

## generate native executable
#g++ welcome.o $LLVMLIBS $LDFLAGS -o welcome

#./welcome
