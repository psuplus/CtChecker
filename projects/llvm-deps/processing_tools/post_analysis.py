#!/usr/bin/env python
''' This file parses output from taint/vulnerable branch analysis

After discovering positives from the analysis it can be helpful to view the
results side by side with the source. This code runes through and gets the
source for each reported line.


Usage:
post_analysis.py <result_file>

Sample Usage:
post_analysis.py tmp.dat > positives_with_source.txt
'''
import re
import sys

from collections import defaultdict

def filter_lines_from_results(fname):
    '''Filters through vulnerable branch dat file for results'''
    match = '[a-zA-Z/_]+.(c|h|cpp|hpp) line [0-9]+'
    filtered_lines = []
    with open(fname, 'r') as f:
        for line in f:
            if re.match(match, line):
                filtered_lines.append(line)

    return filtered_lines

def get_lines_from_source(positives):
    '''Opens file where results are found and gets source for each reported line'''
    results = defaultdict(list)
    for k,v in positives.items():
        with open(k, 'r') as f:
            lines = f.readlines()  # this may get large for large source files
        for num in sorted(v):
            # Each file has list of tuples with this structure (linenum, source code)
            results[k].append((num+1, lines[num].strip()))

    return results

def output_results(lines):
    '''Writes out to stdout fn.c line # - source'''
    for fname, result_pair in lines.items():
        for line, src in result_pair:
            print("{} line {:4d} - {}".format(fname, line, src))

def main():
    '''Looks at results from Vulnerable/Taint Analysis and records the associated
    line with it
    '''
    positives = defaultdict(set) # only report each line once, set

    for line in filter_lines_from_results(sys.argv[1]):
        s = line.strip().split()
        if len(s) == 3:
            fn, _, ln = s
            positives[fn].add(int(ln)-1) # Subtract 1 because indices of lines starts at 0

    res = get_lines_from_source(positives)
    output_results(res)

if __name__ == "__main__":
    main()
