""" Generating the shortest path from start node to end node.
    Requires the networkx package and graphviz support for python.
"""
import sys
import os
import networkx


def main():
    """main function"""
    for e in sys.argv:
        print(e)
    if len(sys.argv) != 3:
        sys.exit("Error: Provide start and end node addresses.")

    START = sys.argv[1]
    END = sys.argv[2]

    G = networkx.drawing.nx_pydot.read_dot("./tmp.dot")
    start = START
    end = ""
    edges = []
    for path in networkx.shortest_path(G, source=START, target=END):
        end = path
        if start == end:
            continue
        edges.append(start + "&#45;&gt;" + end)
        start = end

    print(edges)
    with open("./tmp.svg", "w") as tmp:
        with open("./g.svg", "r+") as svg:
            replace = False
            count = 0
            for line in svg:
                if not replace:
                    tmp.write(line)
                    for e in edges:
                        if e in line:
                            replace = True
                            print(line)
                else:
                    count = count + 1
                    tmp.write(line.replace('"black"', '"red"'))
                    if count == 4:
                        count = 0
                        replace = False
        svg.close()
    tmp.close()
    os.system("wslview tmp.svg")


if __name__ == "__main__":
    main()
