#!/bin/bash 

echo $0 $@

function printUsage_old {
    echo "Usage: $0 <nodes folder> <traces folder> <error info> \"<options>\""
    echo "      <nodes folder>	folder contains all trace info ([i].nd)"
    echo "      <traces folder>	folder contains all trace info ([i].tr)"
    echo "      <error info>	file contains errorinfo for all versions"
    echo "      [options] 	options passed into skeleton.py"
    echo '      		  `python skeleton.py -h` to see options'
    exit
}
function printUsage {
    echo "Usage: $0 <benchmark_folder> \"<options>\""
    echo "      <benchmark_folder>	root of benchmark, containing t_all/, n_all/, errorInfo"
    echo "      [options] 		options passed into skeleton.py"
    echo '      			`python skeleton.py -h` to see options'
    exit
}
nds=$1/n_all
trs=$1/t_all
err=$1/errorInfo
opt=$2

function testing {
	printf "\n\noption $1, $2\n\n"
	for (( i = 1 ;  ; i++ )); do
		if [[ ( -f $nds/$i.nd ) && ( -f $trs/$i.tr ) ]]; then
			if [[ ! -f $trs/$i.tr.s ]]; then
				echo
				echo "Getting Compact Info..."
				python tr_simplify.py $trs/$i.tr 
				echo "Compact Info Stored"
			fi
			echo Start Running Test $i
			if [[ $1 == 'node' ]]; then 
#				echo python skeleton.py $nds/$i.nd $trs/$i.tr.s $err $i -b $1 -m $2
				python skeleton.py $nds/$i.nd $trs/$i.tr.s $err $i -b $1 -m $2
			else
#				echo python skeleton.py $nds/$i.nd $trs/$i.tr.p $err $i -b $1 -m $2
				python skeleton.py $nds/$i.nd $trs/$i.tr.p $err $i -b $1 -m $2
			fi
		else
			printf "\n\n\nAll Tests are Finished\n\n\n"
			break
		fi
	done
}

if [[ $# -lt 1 ]]; then
	printUsage
elif [[ $# -eq 1 ]]; then
	bases='node edge'
	methods='const freq'

	for a in $bases ; do
		for b in $methods ; do
			testing $a $b
		done
	done

else
	testing $opt

fi

mkdir -p $1/result_log
mv /tmp/*.log $1/result_log
echo "The results are stored in $1/result_log"
