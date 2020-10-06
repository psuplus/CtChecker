
import re
import sys
import os


def main():
    with open('./tmp.gv', 'w') as tmp_file:
        tmp_file.write('digraph {\n')
        tmp_file.write('\tsize = "4,4";\n')
        with open(sys.argv[1], 'r') as f:
            for line in f:
                line = re.sub("\[.*?\]| ;.*", "", line)
                line = re.sub("<:", "->", line)
                tmp_file.write('\t'+line)
            f.close()
        tmp_file.write('}')
        tmp_file.close()

    os.system('dot -Tps tmp.gv -o g.ps')
    os.system('open g.ps')


if __name__ == "__main__":
    main()
