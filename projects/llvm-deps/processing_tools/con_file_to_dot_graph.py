
import re
import sys
import os


class CE:
    addr = ""
    label = ""

    def __init__(self, a, l):
        self.addr = a
        l = re.sub('\|\|+', '|', l)
        l = re.sub('\|$', '', l)
        l = re.sub('(\w+\.\w+)\|(\d+)', r'\1, \2', l)
        self.label = l

    def __hash__(self):
        return hash((self.addr, self.label))

    def __eq__(self, other):
        if not isinstance(other, type(self)):
            return NotImplemented
        return self.addr == other.addr and self.label == other.label

    def full(self):
        if self.addr is 'H' or self.addr is 'L':
            return self.addr
        return self.addr + ' [shape=record,shape=Mrecord,label="{' + self.addr + "|" + self.label + "}\"]\n"

    def addr(self):
        return addr


def main():
    with open('./tmp.dot', 'w') as tmp_file:
        tmp_file.write('digraph {\n')
        with open(sys.argv[1], 'r') as f:
            ceSet = set()
            conSet = set()
            for line in f:
                line = re.split('\[|\]? <: |\]? ;.*', line)
                if line[0] is 'H':
                    CE1 = CE('H', 'H')
                    CE2 = CE(line[1], line[2])
                elif line[2] is 'L':
                    CE1 = CE(line[0], line[1])
                    CE2 = CE('L', 'L')
                else:
                    CE1 = CE(line[0], line[1])
                    CE2 = CE(line[2], line[3])

                ceSet.add(CE1)
                ceSet.add(CE2)
                conSet.add(CE1.addr + ' -> ' + CE2.addr + '\n')

            for e in ceSet:
                tmp_file.write('\t'+e.full())
            for e in conSet:
                tmp_file.write('\t'+e)

            f.close()
        tmp_file.write('}')
        tmp_file.close()

    os.system('dot -Tpdf tmp.dot -o g.pdf')
    os.system('open g.pdf')


if __name__ == "__main__":
    main()
