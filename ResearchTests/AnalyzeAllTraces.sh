#!/bin/bash 

echo $0 $@

function printUsage {
    echo "Usage: $0 <nodes folder> <traces folder> <error info> \"<options>\""
    echo "      <nodes folder>	folder contains all trace info ([i].nd)"
    echo "      <traces folder>	folder contains all trace info ([i].tr)"
    echo "      <error info>	file contains errorinfo for all versions"
    echo "      [options] 	options passed into skeleton.py"
    echo '      		  `python skeleton.py -h` to see options'
    exit
}
nds=$1
trs=$2
err=$3
opt=$4

function testing {
	printf "\n\noption $1\n\n"
	for (( i = 1 ;  ; i++ )); do
		if [[ ( -f $nds/$i.nd ) && ( -f $trs/$i.tr ) ]]; then
			echo
			echo Start Running Test $i
			python skeleton.py $nds/$i.nd $trs/$i.tr $err $i $1
		else
			printf "\n\n\nAll Tests are Finished\n\n\n"
			break
		fi
	done
}

if [[ $# -lt 3 ]]; then
	printUsage
elif [[ $# -eq 3 ]]; then

	options=(
	  '-b node -m const'
	  '-b node -m freq'
	  '-b edge -m const'
	  '-b edge -m freq'
	)

	for i in `seq 0 3`; do
		testing "${options[$i]}"
	done

else
	testing "$opt"

fi
