#!/usr/bin/env bash
# linking example

python3 ../processing_tools/constraint_file.py tmp.dat
python3 ../processing_tools/constraint_graph.py constraints-implicit.con graph-implicit.dot
python3 shortest_path.py graph-implicit.dot lattice.txt

