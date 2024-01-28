#!/usr/bin/env python
""" Collecting results from ct-rewriters


Usage:
collecting_results.py <result_file>

Sample Usage:
collecting_results.py tmp.dat > results
"""
import re
import sys
import csv
import os

from collections import defaultdict


def parse_number(num):
    try:
        return int(num)
    except ValueError:
        return float(num)


def filter_lines_from_results(fname):
    """Filters through vulnerable branch dat file for tainted lines"""
    match = r"IR line \(Branch\): (.+)"
    match2 = r"IR line \(Index-SC-Eliminator\): (.+)"
    filtered_lines = []
    filtered_lines2 = []
    with open(fname, "r") as f:
        for line in f:
            if re.match(match, line):
                filtered_lines.append(line)
            if re.match(match2, line):
                filtered_lines2.append(line)

    return [filtered_lines, filtered_lines2]


def get_lines_from_source(positives, positives2):
    """Opens file and extracts source associated with tainted result"""
    results = defaultdict(list)
    for k, v in positives.items():
        with open(k, "r") as f:
            lines = f.readlines()  # this may get large for large source files
        for num in sorted(v):
            # Each file has list of tuples with this structure (linenum, source code)
            results[k].append((num + 1, lines[num].strip()))

    results2 = defaultdict(list)
    for k, v in positives2.items():
        with open(k, "r") as f:
            lines = f.readlines()  # this may get large for large source files
        for num in sorted(v):
            # Each file has list of tuples with this structure (linenum, source code)
            results2[k].append((num + 1, lines[num].strip()))

    return [results, results2]


def output_results(lines1, lines2):
    """Writes out to stdout ex. fn.c line # - source"""
    branch_count = 0
    for line in lines1:
        branch_count += 1
        print(line)
    print(branch_count)
    index_count = 0
    for line in lines2:
        index_count += 1
        print(line)
    print(index_count)


def find_and_update_row(csv_file, search_value, updated_data):
    fieldnames = ['Name', 'Positives', 'Array', 'Time (mm:ss)', 'Time (s)']
    found = False
    data = []

    if not os.path.exists(csv_file):
        with open(csv_file, mode='w') as file:
            writer = csv.DictWriter(file, fieldnames=fieldnames)
            writer.writeheader()

    with open(csv_file, mode='r') as file:
        reader = csv.DictReader(file)
        for row in reader:
            if row['Name'] == search_value:
                data.append(updated_data)
                found = True
            else:
                data.append(row)
        

    if not found:
        data.append(updated_data)

    with open(csv_file, mode='w') as file:
        writer = csv.DictWriter(file, fieldnames=fieldnames)
        writer.writeheader()
        writer.writerows(data)

def update_table(lines1, lines2):
    csv_file = sys.argv[2]
    row_name = sys.argv[3]
    num_seconds = parse_number(sys.argv[4])
    min, sec = divmod(num_seconds, 60)
    running_time = "%02d:%02d" % (min, sec)

    count = 0
    for _ in lines1:
        count = count + 1

    count_array = 0
    for _ in lines2:
        count_array = count_array + 1
            

    combined_result = {'Name': row_name, 'Positives': count, 'Array': count_array, 'Time (mm:ss)': running_time, 'Time (s)': num_seconds}

    find_and_update_row(csv_file, row_name, combined_result)


def main():
    positives = filter_lines_from_results(sys.argv[1])[0]  # only report each line once: set
    positives2 = filter_lines_from_results(sys.argv[1])[1]  # only report each line once: set
    # to keep repeated lines use: list

    # for line in filter_lines_from_results(sys.argv[1])[0]:
    #     s = line.strip().split()
    #     if len(s) == 3:
    #         fn, _, ln = s
    #         # Subtract 1 because indices of lines starts at 0
    #         positives[fn].append(int(ln) - 1)

    # for line in filter_lines_from_results(sys.argv[1])[1]:
    #     s = line.strip().split()
    #     if len(s) == 3:
    #         fn, _, ln = s
    #         # Subtract 1 because indices of lines starts at 0
    #         positives2[fn].append(int(ln) - 1)

    # res = get_lines_from_source(positives, positives2)
    output_results(positives, positives2)
    update_table(positives, positives2)


if __name__ == "__main__":
    main()
