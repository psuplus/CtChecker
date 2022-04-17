"""
    Generate information flow graph in .dot format from constraint file.
"""
import sys

TAG = "[SCG] "


def main():
    """Main function for generation of graph"""

    if len(sys.argv) <= 1:
        print("Usage: constraint_graph.py [dat_file]")
        print("\t [dat_file]: The *.dat file for use")

    else:
        with open("./call-stack", "w") as stack:
            with open(sys.argv[1], "r") as dat:
                for line in dat:
                    if line.startswith(TAG):
                        stack.write(line[len(TAG) :])
                dat.close()
        stack.close()


if __name__ == "__main__":
    main()
