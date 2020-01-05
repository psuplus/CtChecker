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
import pandas as pd

from collections import defaultdict


def filter_lines_from_results(fname):
    '''Filters through vulnerable branch dat file for tainted lines'''
    match = '[a-zA-Z0-9/_-]+.(c|h|cpp|hpp) line [0-9]+'
    filtered_lines = []
    with open(fname, 'r') as f:
        for line in f:
            if re.match(match, line):
                filtered_lines.append(line)

    return filtered_lines


def get_lines_from_source(positives):
    '''Opens file and extracts source associated with tainted result'''
    results = defaultdict(list)
    for k, v in positives.items():
        with open(k, 'r') as f:
            lines = f.readlines()  # this may get large for large source files
        for num in sorted(v):
            # Each file has list of tuples with this structure (linenum, source code)
            results[k].append((num+1, lines[num].strip()))

    return results


def output_results(lines):
    '''Writes out to stdout ex. fn.c line # - source'''
    for fname, result_pair in lines.items():
        for line, src in result_pair:
            print("{} line {:4d} - {}".format(fname, line, src))


def update_table(lines):
    '''Writes out to stdout ex. fn.c line # - source'''
    start = int(sys.argv[2])
    end = int(sys.argv[3])
    row_idx = int(sys.argv[5])
    interested_file = sys.argv[6]

    count = 0
    for fname, result_pair in lines.items():
        for line, src in result_pair:
            print("{} line {:4d} - {}".format(fname, line, src))
            if line >= start and line <= end:
                if fname == interested_file:
                    count = count + 1

    # print(sys.argv[4])

    df = pd.read_csv('../../paper/conference/benchmark-table.tex',
                     sep='&',
                     header=None,
                     engine='python')

    # print(df)
    # print('\n')

    table = []
    with open("../../paper/conference/benchmark-table.tex", 'r') as f:
        for i, line in enumerate(f):
            l = line.split('&')
            if len(l) == 12:
                table.append([s.replace('\\', '')
                              .replace('hspace{0.25cm}', '')
                              .replace('textbf{', '').replace('}', '')
                              .strip() for s in l])

    for idx, label in enumerate(table[0]):
        if label == sys.argv[4]:
            table[row_idx][idx] = count

    df = pd.DataFrame(table)
    # print(df)

    with open("../../paper/conference/benchmark-table.tex", 'w+') as f:
        # f.write("\\begin{table*}\n")
        # f.write("\t\\centering\n\n")
        # f.write("\t\t\\begin{tabular}{@{}lrrrrrrrrrrr@{}}\n")
        # f.write("\t\t\\toprule\n")

        f.write(df.to_latex(index=False))

        # f.write("\n\t\\caption{Number of Warnings based on Features}\n")
        # f.write("\t\\label{tbl:overall-feature-benchmark}\n")
        # f.write("\\end{table*}\n")

        # f.write("start=%d\n" % int(sys.argv[2]))
        # f.write("end=%d" % int(sys.argv[3]))
        f.close()

    flines = open('../../paper/conference/benchmark-table.tex').readlines()
    with open('../../paper/conference/benchmark-table.tex', 'w') as f:
        f.writelines(flines[4])
        f.write('\\midrule\n')
        f.writelines(flines[5:8])
        f.write('OpenSSL 1.1.0g \\\\\n')
        f.writelines(flines[8:-2])
        f.close()


def main():
    '''Looks at results from Vulnerable/Taint Analysis and records the associated
    line with it
    '''
    positives = defaultdict(list)  # only report each line once: set
    # to keep repeated lines use: list

    for line in filter_lines_from_results(sys.argv[1]):
        s = line.strip().split()
        if len(s) == 3:
            fn, _, ln = s
            # Subtract 1 because indices of lines starts at 0
            positives[fn].append(int(ln)-1)

    res = get_lines_from_source(positives)
    # output_results(res)
    update_table(res)


if __name__ == "__main__":
    main()
