import re
import sys
import os


constStr = "CONST"


class CE:
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
        if constStr in self.addr:
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
    with open("./tmp.dot", "w") as tmp_file:
        tmp_file.write("digraph {\n")
        with open(sys.argv[1], "r") as f:
            ceSet = set()
            conSet = set()
            for line in f:
                line = re.split(r" +<: +| +;.*", line)
                if line[0].startswith(constStr):
                    ceStr = re.split(r"\[|\]", line[1])
                    CE1 = CE('"' + line[0] + '"')
                    CE2 = CE(ceStr[0], ceStr[1])
                elif line[1].startswith(constStr):
                    ceStr = re.split(r"\[|\]", line[0])
                    CE1 = CE(ceStr[0], ceStr[1])
                    CE2 = CE('"' + line[1] + '"')
                else:
                    ceStr = re.split(r"\[|\]", line[0])
                    CE1 = CE(ceStr[0], ceStr[1])
                    ceStr = re.split(r"\[|\]", line[1])
                    CE2 = CE(ceStr[0], ceStr[1])

                ceSet.add(CE1)
                ceSet.add(CE2)
                conSet.add(CE1.addr + " -> " + CE2.addr + "\n")

            for e in ceSet:
                tmp_file.write("\t" + e.full())
            for e in conSet:
                tmp_file.write("\t" + e)

            f.close()
        tmp_file.write("}")
        tmp_file.close()

    os.system("dot -Tpdf tmp.dot -o g.pdf")
    # os.system('open g.pdf')
    os.system("wslview g.pdf")


if __name__ == "__main__":
    main()
