import sys
import heapq
import os
from math import *

import argparse

BASE = ('node', 'edge')
METHOD = ('const', 'freq', 'loc')


parser = argparse.ArgumentParser(description='Trace Analysis')

parser.add_argument('-d', '--debug', dest='DEBUG', action='store_true',
                    default=False, help='print Debug Info (default: False)')
parser.add_argument('-x2', dest='x2', action='store_false',
                    default=True, help='set this flag to ignore p2 (succeeded traces)')
parser.add_argument('-x3', dest='x3', action='store_false',
                    default=True, help='set this flag to ignore p3 (failed traces)')

parser.add_argument('f_nodes', metavar='<nodes>', type=argparse.FileType('r'),
                    help='filepath to nodes')
parser.add_argument('f_traces', metavar='<traces>', type=argparse.FileType('r'),
                    help='filepath to traces')
parser.add_argument('f_error', metavar='<error>', type=argparse.FileType('r'),
                    help='filepath to error info')
parser.add_argument('ver', metavar='<version>', type=int, 
                    help='version number')

parser.add_argument('-b', '--base', required=True, choices=BASE,
                    help='[Required] analysis based on node or edge')
parser.add_argument('-m', '--method', required=True, choices=METHOD,
                    help='[Required] method to calculate p2 (and p3)')

args = parser.parse_args()

# print args

DEBUG, x2, x3 = args.DEBUG, args.x2, args.x3
m = METHOD.index(args.method)

p2 = [
  (lambda n: 0.2),
  (lambda n: nds[n]["freq"]+1e-20),
  (lambda n: 0)
][m]

def node_at_line(n):
    if isinstance(n, tuple): n = n[0]
    return all_nodes[n][1]

def node_info(n):
    if isinstance(n, tuple): n = n[0]
    return all_nodes[n]

f_opt = "w" if args.ver == 1 else "a"
f_out = open("/tmp/"+args.base+"_"+args.method + ("" if x2 else "_x2") + ("" if x3 else "_x3") + ".log", f_opt)
if args.ver == 1:
    f_out.write("Calculate likelyhood with base = %s\tmethod = %s\n" %(args.base, args.method)+
			"Test\tFailsAt\tRank\n")
#################################################################################################

# Read in error info
errorInfo = eval(args.f_error.read())
args.f_error.close()
failsAt = errorInfo[int(args.ver)]
if failsAt[0] == -1:
    print "Error: MISSING LINE %s" % str(failsAt[1:])
    f_out.write("%s\t%s\t>\n" % (args.ver, failsAt))
    exit()
    

# Read in the nodes
all_nodes = {}
nds={}
for line in args.f_nodes.xreadlines():
    node, detail = line.strip().split(" = ", 2)
    filename, line, col, scope, inlinedAt = detail[1:-1].split("; ", 5)
    all_nodes[int(node)] = (filename, int(line), int(col), scope, inlinedAt)
    if DEBUG: print all_nodes[int(node)]
args.f_nodes.close()



# Read in the traces
failed_traces = set()
succeeded_traces = set()
c = 0
for line in args.f_traces.xreadlines():
    if line.strip():
        if line[0] != ",":
            failed = eval(line)
        else:
            tr = eval(line[1:])
            if args.base == BASE[1]:
                l = len(tr)
                trace = tuple((tr[i], -1 if i == l-1 else tr[i+1]) for i in range(l))
            elif args.base == BASE[0]:
                trace = tr
            if failed:
                failed_traces.add(trace)
                for n in frozenset(trace):
                    if not nds.get(n, False): nds[n] = {"fail":0, "succ":0}
                    nds[n]["fail"] = nds[n].get("fail",0) + 1
            else:
                succeeded_traces.add(trace)
                for n in frozenset(trace):
                    if not nds.get(n, False): nds[n] = {"fail":0, "succ":0}
                    nds[n]["succ"] = nds[n].get("succ",0) + 1
            if DEBUG and 0: 
                c+=1
                print "\033cVersion %d: Trace %d stored" % (args.ver,c)
args.f_traces.close()



tol = len(nds)
###############################################################################################

for k in nds:
    nds[k]["total"] = nds[k]["succ"] + nds[k]["fail"]
    nds[k]["freq"] = float(nds[k]["succ"]) / nds[k]["total"] if nds[k]["total"] else 0

###############################################################################################

possible_nodes = reduce(lambda x,y: set(x).union(y), failed_traces, set())
heap = []


for n in possible_nodes:
    c2 = x2 and -log(p2(n))
    c3 = x3 and -log(1-p2(n))
    g = c2 * nds[n]["succ"] + c3 * nds[n]["fail"]
    remaining_paths = filter(lambda p: n not in p, failed_traces)
    h = 0 if not remaining_paths else 1 if reduce(lambda x,y: set(x).intersection(y), remaining_paths) else 2
    heapq.heappush(heap, ((h, g), {n}, remaining_paths, c2, c3))


first = True
foundAt = set()
for count in range(1, tol+1):
    if not heap: break
    h, nodes, paths, c2, c3 = heapq.heappop(heap)
    if not paths:
        if DEBUG:
            if first:
                first = None
                print "heapvalue       c2           c3           nodes        nodes_details"
            print '(%1d, %10f) %-12f %-12f %-12s %s' % (h[0], h[1], c2, c3, nodes, str(map(node_info, nodes)))
        foundAt = set(map(node_at_line, nodes))
        if foundAt & set(failsAt):
            break

"""
    # the else part should not be used for now... (all errors should be size one)
    else:
        remaining_nodes = reduce(lambda x,y: x|y, map(set, paths))
        for n in remaining_nodes:
            ns = nodes | {n}
            c2 = x2 and -log(p2(n))
            c3 = x3 and -log(1-p2(n))
            g = c1 * len(ns) + c2 * len(filter(lambda t: ns & set(t), succeeded_traces)) \
                + c3 * len(filter(lambda t: ns & set(t), failed_traces))
            remaining_paths = filter(lambda t: not set(ns).intersect(t), failed_traces)
            h = 0 if not remaining_paths else 1 if reduce(lambda x,y: x & y, remaining_paths) else 2
            heapq.heappush(heap, (g+h*c1, ns, remaining_paths))
"""

if foundAt & set(failsAt):
    print "The true error (line: %s) is found at rank %d" % (failsAt, count)
    f_out.write("%s\t%s\t%d\n" % (args.ver, failsAt, count))
else:
    print "The true error (line: %s) falls out of rank %d" % (failsAt, tol)
    f_out.write("%s\t%s\t>%d\n" % (args.ver, failsAt, tol))


if DEBUG:
#    print "Failed Traces:\n", 
#    for t in failed_traces: print t
    print "succ trace patterns: ", len(succeeded_traces)
    print "fail trace patterns: ", len(failed_traces)
    print nds
    import time
    time.sleep(1)

