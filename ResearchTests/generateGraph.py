import networkx as nx
from math import *
import heapq
# import matplotlib

p2 = 0.3
p1 = (p2/(1-p2)) ** 3
c1 = -log(p1)
c2 = -log(p2/(1-p2))

G = nx.DiGraph()

f = open("trace/nodes")
all_nodes = {}
for line in f.xreadlines():
    node, detail = line.strip().split(" = ", 2)
    filename, line, col = detail[1:-1].split("; ", 3)
    G.add_node(int(node), filename=filename, line=int(line), col=int(col))
    all_nodes[int(node)] = (filename, int(line), int(col))

f.close()

f = open("trace/traces")
failed_traces = set()
succeeded_traces = set()
good_nodes = {}
for line in f.xreadlines():
    if line.strip():
        if line[0] != ",":
            failed = eval(line)
        else:
            trace = [int(a) for a in line.split(",") if a.strip()]
            if failed:
                failed_traces.add(frozenset(trace))
                # for i in xrange(1, len(trace)-1):
                #     G.add_edge(trace[i],trace[i+1])
                #     G[trace[i]][trace[i+1]]['failure'] = G[trace[i]][trace[i+1]].get('failure', 0) +1
            else:
                succeeded_traces.add(frozenset(trace))
                # for x in trace:
                #     good_nodes[x] = good_nodes.get(x, 0)+1
                # for i in xrange(1, len(trace)-1):
                #     G.add_edge(trace[i],trace[i+1])
                #     G[trace[i]][trace[i+1]]['success'] = G[trace[i]][trace[i+1]].get('success', 0) +1

# Need to keep the failure path..
# General Idea: to get the min-cut of wrong paths.
#               nodes in more correct paths would be less likely wrong.

# Use A* search to find such min-cut sets

# all possible nodes to be in min cut set.
possible_nodes = reduce(lambda x,y: x | y, failed_traces, set())
heap = []
# Calculate such nodes and add to heap
for n in possible_nodes:
    g = c1 + c2 * len(filter(lambda t: n in t, succeeded_traces))
    remaining_paths = filter(lambda p: n not in p, failed_traces)
    h = 0 if not remaining_paths else 1 if reduce(lambda x,y: x&y, remaining_paths) else 2
    heapq.heappush(heap, (g+h*c1, {n}, remaining_paths))

done = None
while True:
    h, nodes, paths = heapq.heappop(heap)
    if not paths:
        if done and h > done:
            break
        print h, nodes, all_nodes[nodes.pop()]
        done = h
    else:
        remaining_nodes = reduce(lambda x,y: x|y, paths)
        for n in remaining_nodes:
            ns = nodes | {n}
            g = c1 * len(ns) + c2 * len(filter(lambda t: ns & t, succeeded_traces))
            remaining_paths = filter(lambda p: not(ns & p), failed_traces)
            h = 0 if not remaining_paths else 1 if reduce(lambda x,y: x&y, remaining_paths) else 2
            heapq.heappush(heap, (g+h*c1, ns, remaining_paths))
for h in heap:
    print h
# print heap
# def is_min_cut(nodes, paths):
#     for p in paths:
#         if (nodes & p):



# print G.nodes(data=True)
# print G.edges(data=True)
# print G.edges()
print failed_traces
# matplotlib.draw(G)
