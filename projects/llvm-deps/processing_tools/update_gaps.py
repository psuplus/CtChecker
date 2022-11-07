""" Update gaps table
"""

import sys
from lattice import RLLabel


def main():
    """main function"""

    encoding = "UTF-8"
    state = 0
    delim = "  ->  "
    new_table = []
    tags = [""] * 6
    cols = ["subject", "object", "operation"]

    with open(sys.argv[2], "r", encoding=encoding) as gaps:
        with open(sys.argv[1], "r", encoding=encoding) as table:
            for i, line in enumerate(gaps):
                if i == 0:
                    name = line.strip().strip("[]")
                    print(name)
                elif line.startswith("explicit:"):
                    state = 1
                elif line.startswith("implicit:"):
                    state = 2
                if delim in line:
                    line = line.strip().split(delim)
                    left = RLLabel(line[0]).compartment["purpose"].pop()
                    right = RLLabel(line[1]).compartment["purpose"].pop()
                    print(left)
                    print(right)
                    col = -1
                    if left != right:
                        if left == cols[0]:
                            col = 0
                            if right == cols[1]:
                                col += 0
                            elif right == cols[2]:
                                col += 1
                        elif left == cols[1]:
                            col = 2
                            if right == cols[0]:
                                col += 0
                            elif right == cols[2]:
                                col += 1
                        elif left == cols[2]:
                            col = 4
                            if right == cols[0]:
                                col += 0
                            elif right == cols[1]:
                                col += 1
                        print(col)
                        if col >= 0:
                            if state == 1:
                                tags[col] = ":red_circle:"
                            elif state == 2 and len(tags[col]) == 0:
                                tags[col] = ":large_blue_diamond:"

            for i, line in enumerate(table):
                if " " + name + " " in line:
                    line = "| " + name + " |"
                    clean = True
                    print(tags)
                    for tag in tags:
                        print(tag)
                        line += tag + "|"
                        if len(tag) > 0:
                            clean = False
                    if clean:
                        line += ":white_check_mark:|\n"
                    else:
                        line += "|\n"
                    new_table.append(line)
                else:
                    new_table.append(line)
            table.close()
        gaps.close()

    with open(sys.argv[1], "w", encoding=encoding) as table:
        table.writelines(new_table)
        table.close()


if __name__ == "__main__":
    main()
