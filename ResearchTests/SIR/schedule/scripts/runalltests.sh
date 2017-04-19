#!/bin/bash

export PROGRAM=schedule

function printUsage {
	echo "Usage: $0 <py script> [start] [end]"
    echo "      <py script>	calculates error nodes"
    echo "      [start]		start index of test cases, default=1"
    echo "      [end]		end index of test cases, default=41"
	exit
}

if [[ $# -lt 1 ]]; then
	printUsage
elif [[ $# -lt 2 ]]; then
	echo "Using Product to calculate likelihood	$(basename $1)
Test	FailsAt	Rank" > /tmp/log
	start=1
	end=9
elif [[ $# -lt 3 ]]; then
	start=$2
	end=9
else
	start=$2
	end=$(($3 + 1))
fi

for (( i = $start; i < $end; i++ )); do
	echo
	echo Start Running Test $i
	./test.sh $i $1
done

echo "All Tests are Finished"
