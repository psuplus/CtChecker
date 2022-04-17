"""
    Generate information flow graph in .dot format from constraint file.
"""
import re
import sys
import os
import platform

CONST_STR = "CONST"


class CE:
    """Constraint Element class"""

    def __init__(self, a="", l=""):
        self.addr = a
        l = re.sub(r"\|\|+", "|", l)
        l = re.sub(r"\|$", "", l)
        l = re.sub(r"(\w+\.\w+)\|(\d+)", r"\1, \2", l)
        self.label = l

    def __hash__(self):
        return hash((self.addr, self.label))

    def __eq__(self, other):
        if not isinstance(other, type(self)):
            return NotImplemented
        return self.addr == other.addr and self.label == other.label

    def full(self):
        """Full string form of a constraint element"""
        if CONST_STR in self.addr:
            return self.addr + "\n"
        return (
            self.addr
            + ' [shape=record,shape=Mrecord,label="{'
            + self.addr
            + "|"
            + self.label
            + '}"]\n'
        )


def main():
    """Main function for generation of graph"""

    if len(sys.argv) <= 2:
        print("Usage: constraint_graph.py [con_file] [out_dot] -op [op]")
        print("\t [con_file]: The *.con file for use")
        print("\t [out_dot]: The *.dot file for output")
        print("\t -graph [0-1]: specifying if generating graph, defaults to 0")
        print("\t\t\t0: just dot file")
        print("\t\t\t1: also generating svg image")

    else:
        gen_graph = 0
        for i in range(3, len(sys.argv)):
            if sys.argv[i] == "-graph":
                gen_graph = int(sys.argv[i + 1])

        with open(sys.argv[2], "w") as tmp_file:
            tmp_file.write("digraph {\n")
            with open(sys.argv[1], "r") as file:
                nodes = set()
                edges = set()
                for line in file:
                    line = re.split(r"\|+|[\r\n]+", line)
                    nodes.add(line[0])
                    nodes.add(line[2])
                    edge_label = '\t[ label = " ' + line[1] + '" ] '
                    edges.add(line[0] + " -> " + line[2] + edge_label + "\n")
                for node in nodes:
                    tmp_file.write("\t" + node)
                for edge in edges:
                    tmp_file.write("\t" + edge)
                file.close()
            tmp_file.write("}")
            tmp_file.close()

        if gen_graph == 1:
            cmd = "dot -Tsvg " + sys.argv[2] + " -o g.svg"
            os.system(cmd)
            if "WSL" in platform.release():
                os.system("wslview g.svg")
            else:
                os.system("open g.svg")


if __name__ == "__main__":
    main()
