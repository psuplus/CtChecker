""" Generating the shortest path from start node to end node.
    Requires the networkx package and graphviz support for python.
"""

import sys
import networkx


def print_path(graph, start, end):
    """Print a path from the starting node to the end node in graph."""
    print(start, " -> ", end)
    print("-----------")
    path = networkx.shortest_path(G=graph, source=start, target=end)
    for vertices in path:
        if "label" in graph.nodes[vertices].keys():
            print(vertices, graph.nodes[vertices]["label"])
        else:
            print(vertices)
    print("\n")


def main():
    """main function"""
    graph = networkx.drawing.nx_pydot.read_dot(sys.argv[1])

    source_set = ["CONST[secret:1(private)][]"]
    sink_set = ["CE0x6429190"]
    for start in source_set:
        for end in sink_set:
            if networkx.has_path(graph, source=start, target=end) and start != end:
                print_path(graph, start, end)


if __name__ == "__main__":
    main()
