#!/bin/bash

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
	echo "Using Product to calculate likelihood	$(basename calculateErrorNodes.py)
Test	FailsAt	Rank" > /tmp/log
	start=1
	end=42
elif [[ $# -lt 3 ]]; then
	start=$2
	end=42
else
	start=$2
	end=$(($3 + 1))
fi

for (( i = $start; i < $end; i++ )); do
	echo
	echo Start Running Test $i
	./test.sh $i $1
done

echo All Tests are Finished
