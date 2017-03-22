from math import *
import sys
import heapq

# TODO:
# add debug bool
# rewrite for better debugging

if len(sys.argv) < 3:
    print "USAGE: python ./calculateErrorNodes.py <nodes> <traces>"
    print "\t<nodes>\t filepath that store nodes"
    print "\t<traces>\t filepath that store traces"
    exit

###########################################################################
# p2 Algorithms
#
# Definition
# p2 = P(suc | o, E) where o is the trace and E is the set of error nodes.
#
# 0. p2 is uniform for all nodes. # [may not be correct]
# 1. p2(n) = p( #(e in suc_paths) / #(e in total_paths) ) to estimate
# 2. p2(n) = log f(tr, N)
###########################################################################


###########################################################################
# Flags and Constants
###########################################################################
debug = True
x1, x2, x3 = 1, 1, 1 # filters of the three terms, 1 = on, 0 = off
p1 = 0.001
c1 = -log(p1) * x1
p2method = 2
p2value = None
###########################################################################


###########################################################################
# File reading
###########################################################################
#
# Read in the nodes
f = open(sys.argv[1])
all_nodes = {}
nds={}
for line in f.xreadlines():
    node, detail = line.strip().split(" = ", 2)
    filename, line, col, scope, inlinedAt = detail[1:-1].split("; ", 5)
    all_nodes[int(node)] = (filename, int(line), int(col), scope, inlinedAt)
    nds[int(node)] = {"suc": 0, "fail": 0}
f.close()

# Read in the traces
f = open(sys.argv[2])
failed_traces = set()
succeeded_traces = set()
for line in f.xreadlines():
    if line.strip():
        if line[0] != ",":
            failed = eval(line)
        else:
            trace = eval(line[1:])
            if failed:
                failed_traces.add(trace)
                for n in frozenset(trace):
                    nds[n]["fail"] += 1
            else:
                succeeded_traces.add(trace)
                for n in frozenset(trace):
                    nds[n]["suc"] += 1

###########################################################################
# Calculate the probability (frequency) of each node that a succeeded trace
# passing through it.
###########################################################################
for k in nds:
    nds[k]["freq"] = float(nds[k]["suc"]) / (nds[k]["suc"] + nds[k]["fail"]) \
        if (nds[k]["suc"] + nds[k]["fail"]) else 0


###########################################################################
# function to generating more reasonable p2 value
# return something between 0 and 1
###########################################################################
def p2(n):
    if p2method == 0:
        ret = p2value
    elif p2method == 1:
        ret = nds[n]["freq"]
    elif p2method == 2:
        if nds[n].get("len2tail", None) is None:
            l = [f(tr, n) for tr in succeeded_traces if n in tr]
            # print n, l
            nds[n]["len2tail"] = sum(l)/float(len(l)+1) # use the average for now
        ret = nds[n]["len2tail"]
    # print ret
    return ret

def f(tr, n):
    return 1.0 - tr.index(n)/float(len(tr)) if n in tr else -1

###########################################################################

possible_nodes = reduce(lambda x,y: x | y, map(set, failed_traces), set())
heap = []
# Calculate such nodes and add to heap
for n in possible_nodes:
    c2 = -log(p2(n)) * x2
    c3 = -log(1-p2(n)) * x3
    nds[n]["kE"] = len(filter(lambda t: n in t, succeeded_traces))
    nds[n]["fE"] = len(filter(lambda t: n in t, failed_traces))
    g = c1 + c2 * nds[n]["kE"] + c3 * nds[n]["fE"]
    remaining_paths = set(filter(lambda p: n not in p, map(frozenset, failed_traces)))
    h = 0 if not remaining_paths else 1 if reduce(lambda x,y: x & y, remaining_paths) else 2
    heapq.heappush(heap, (g+h*c1, {n}, remaining_paths))

done = None
while True:
    h, nodes, paths = heapq.heappop(heap)
    if not paths:
        if done and h > done:
            break
        if not done:
            print "heapvalue    c1           c2           c3           nodes        nodes_details"
        n=next(iter(nodes))
        c2 = -log(p2(n))
        c3 = -log(1-p2(n))
        print '%-12f %-12f %-12f %-12f %-12s %s' % (h, c1, c2, c3, nodes, str(map(lambda x: all_nodes[x], nodes)))
        done = h
    else: # This part should not be used for now... (all errors should be size one)
        remaining_nodes = reduce(lambda x,y: x|y, map(set, paths))
        for n in remaining_nodes:
            ns = nodes | {n}
            c2 = -log(p2(n))
            c3 = -log(1-p2(n))
            g = c1 * len(ns) + c2 * len(filter(lambda t: ns & set(t), succeeded_traces)) \
                + c3 * len(filter(lambda t: ns & set(t), failed_traces))
            remaining_paths = set(filter(lambda p: not(ns & p), map(frozenset, failed_traces)))
            h = 0 if not remaining_paths else 1 if reduce(lambda x,y: x & y, remaining_paths) else 2
            heapq.heappush(heap, (g+h*c1, ns, remaining_paths))

##########################################################################################
# Print Debug info
if debug:
    print "Failed Traces:\n", reduce(lambda x,y: x & y, map(set, failed_traces))
    print "succ trace patterns: ", len(succeeded_traces)
    print "fail trace patterns: ", len(failed_traces)
    for n in nds:
        if p2(n) and p2(n) < 1:
            c2 = -log(p2(n)) * x2
            c3 = -log(1-p2(n)) * x3
            print n, all_nodes[n], p2(n), c2, nds[n].get("kE", None), c3, nds[n].get("fE",None)
##########################################################################################
