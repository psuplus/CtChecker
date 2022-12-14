#ifndef DEBUG_TYPE
#define DEBUG_TYPE "taint"

#include "TaintAnalysisBase.h"

using namespace llvm;
namespace deps {
STATISTIC(NumSourceConstrained, "Number of sources constrained");
STATISTIC(NumSinkConstrained, "Number of sinks constrained");

const Function *findEnclosingFunc(const Value *V) {
  if (const Argument *Arg = dyn_cast<Argument>(V)) {
    return Arg->getParent();
  }
  if (const Instruction *I = dyn_cast<Instruction>(V)) {
    return I->getParent()->getParent();
  }
  return NULL;
}

bool TaintAnalysisBase::hasPointerTarget(const AbstractLoc *loc) {
  bool linkExists = false;
  if (loc != NULL && loc->getSize() > 0)
    linkExists = loc->hasLink(0);

  if (linkExists) {
    AbstractLoc *link = loc->getLink(0).getNode();

    if (link != NULL)
      linkExists = link->getSize() > 0;
    else
      linkExists = false;
  }

  return linkExists;
}

std::map<unsigned, const ConsElem *>
TaintAnalysisBase::getPointerTarget(const AbstractLoc *loc) {
  // If the value is a pointer, use pointsto analysis to resolve the target
  const DSNodeHandle nh = loc->getLink(0);
  const AbstractLoc *node = nh.getNode();
  DEBUG(errs() << "Linked Node";);
  if (node == NULL || node->getSize() == 0)
    return std::map<unsigned, const ConsElem *>();
  DenseMap<const AbstractLoc *, std::map<unsigned, const ConsElem *>>::iterator
      childElem = ifa->locConstraintMap.find(node);
  // Instead look at this set of constraint elements
  if (childElem != ifa->locConstraintMap.end())
    return childElem->second;
  else
    return std::map<unsigned, const ConsElem *>();
}

void TaintAnalysisBase::constrainValue(std::string kind, const Value &value,
                                       int t_offset, std::string match_name,
                                       RLLabel label) {

  std::string s = value.getName();
  std::string meta = "[" + match_name + ":" + std::to_string(t_offset) +
                     "] [SrcIdx:" + std::to_string(NumSourceConstrained++) +
                     "]";
  DEBUG_WITH_TYPE(DEBUG_TYPE_DEBUG,
                  errs() << "Trying to constrain " << meta << " for value : ";
                  value.dump(););
  const std::set<const AbstractLoc *> &locs = ifa->locsForValue(value);
  const std::set<const AbstractLoc *> &rlocs =
      ifa->reachableLocsForValue(value);
  if (t_offset < 0 || (locs.size() == 0 && rlocs.size() == 0)) {
    DEBUG(errs() << "SETTING " << s << " TO BE TAINTED\n";);
    ifa->constrainAllConsElem(kind, value, std::set<const ConsElem *>(), label,
                              meta);
  }

  // Heap nodes not returned from locs For value
  AbstractLocSet relevantLocs{locs.begin(), locs.end()};
  for (auto &rl : rlocs) {
    if (rl->isHeapNode()) {
      relevantLocs.insert(rl);
    }
  }
  unsigned offset = 0;
  // errs() << "Trying to get offset.. for  "<< s << "\n";
  bool hasOffset = ifa->offsetForValue(value, &offset);
  unsigned numElements = getNumElements(value);
  DEBUG(value.dump(); errs() << " has " << numElements << " elements.\n";);

  if (!ifa->offset_used) {
    t_offset = -1; // if offset is disabled ignore offset from taintfile
    hasOffset = false;
  }

  std::set<const AbstractLoc *>::const_iterator loc = relevantLocs.begin();
  std::set<const AbstractLoc *>::const_iterator end = relevantLocs.end();

  std::set<const ConsElem *> elementsToConstrain;
  for (; loc != end; ++loc) {
    if ((*loc)->isNodeCompletelyFolded() ||
        (*loc)->type_begin() == (*loc)->type_end()) {
      hasOffset = false;
    } else if (t_offset >= 0) {
      offset = fieldIndexToByteOffset(t_offset, &value, *loc);
      hasOffset = true;
    }

    if (hasOffset) {
      elementsToConstrain =
          gatherRelevantConsElems(*loc, offset, numElements, value, true);

    } else {
      for (auto &locs : relevantLocs) {
        DSNode::LinkMapTy edges{locs->edge_begin(), locs->edge_end()};
        for (auto &edge : edges) {
          const DSNode *n = edge.second.getNode();
          if (n != NULL) {
            auto locConstraintsMap = ifa->locConstraintMap.find(n);
            if (locConstraintsMap != ifa->locConstraintMap.end()) {
              for (auto &kv : locConstraintsMap->second) {
                elementsToConstrain.insert(kv.second);
              }
            }
          }
        }
      }
      auto locConstraintsMap = ifa->locConstraintMap.find(*loc);
      if (locConstraintsMap != ifa->locConstraintMap.end()) {
        for (auto &kv : locConstraintsMap->second) {
          elementsToConstrain.insert(kv.second);
        }
      }
    }

    DEBUG(errs() << "FOUND " << elementsToConstrain.size()
                 << " elements from the locsForValue\n";);
  }

  DEBUG(errs() << "Number of elements to constrain: "
               << elementsToConstrain.size() << "\n";);
  for (auto &el : elementsToConstrain) {
    DEBUG(el->dump(errs()); errs() << " : addr " << el << "\n";);
  }
  ifa->constrainAllConsElem(kind, value, elementsToConstrain, label, meta);
}

void TaintAnalysisBase::labelSink(std::string kind) {
  // process the sink functions' arguments
  DEBUG(errs() << "\n ========= Labeling Sink Functions ========= \n";);
  for (auto ctxValuePair : ifa->sinkValueSet) {
    NumSinkConstrained++;
    ContextID ctxt;
    RLLabel label;
    Value *v;
    int t_offset;
    std::tie(ctxt, label, v, t_offset) = ctxValuePair;
    Value &value = *v;

    DEBUG(errs() << "\tLabeling \n\t"; v->dump();
          errs() << "\tat offset: " << t_offset << "\n";);

    const AbstractLocSet &locs = ifa->locsForValue(value);
    const AbstractLocSet &rlocs = ifa->reachableLocsForValue(value);

    // TODO: confirm the correctness of the [t_offset < 0] condition
    // It was removed for a while because we believed it was unnecessary
    if (t_offset < 0 || (locs.size() == 0 && rlocs.size() == 0)) {
      ifa->setLabel(kind, value, label, false);
    }

    // Heap nodes not returned from locsForValue(v)
    AbstractLocSet relevantLocs{locs.begin(), locs.end()};
    for (auto &rl : rlocs) {
      if (rl->isHeapNode()) {
        relevantLocs.insert(rl);
      }
    }

#if 0
    errs() << "\n --------- locs --------- \n";
    for (auto &l : locs) {
      l->dump();
      errs() << " --------- \n";
    }
    errs() << " --------- rlocs --------- \n";
    for (auto &rl : rlocs) {
      rl->dump();
      errs() << " --------- \n";
    }
    errs() << " locs size : " << locs.size() << "\n";
    errs() << " rlocs size : " << rlocs.size() << "\n";
    errs() << " relevantLocs size : " << relevantLocs.size() << "\n";
    errs() << " --------- end --------- \n\n";
#endif

    unsigned offset = 0, span = 0;
    bool hasOffset = ifa->offsetForValue(value, &offset);
    unsigned numElements = getNumElements(value);
    DEBUG(errs() << "This value has " << numElements << " elements.\n";
          errs() << "Has offset? " << (hasOffset ? "YES" : "NO")
                 << ", and the offset is: " << offset << "\n";);

    if (!ifa->offset_used) {
      t_offset = -1; // if offset is disabled ignore offset from taintfile
      hasOffset = false;
    }

    std::set<const ConsElem *> elementsToUntaint;
    for (auto loc = relevantLocs.begin(); loc != relevantLocs.end(); ++loc) {
      DEBUG(errs() << "\nUntaint node at:\n"; (*loc)->dump(););
      DSNode::TyMapTy allFields{(*loc)->type_begin(), (*loc)->type_end()};
      DEBUG(v->getType()->dump(););

      if (t_offset >= 0) {
        fieldIndexToByteOffset(t_offset, &value, *loc);
        hasOffset = true;
      } else {
        hasOffset = false;
      }

      if (hasOffset) {
        std::set<const ConsElem *> rel =
            gatherRelevantConsElems(*loc, offset, numElements, value, false);
        elementsToUntaint.insert(rel.begin(), rel.end());
      } else {
        for (auto &locs : relevantLocs) {
          DSNode::LinkMapTy edges{locs->edge_begin(), locs->edge_end()};
          for (auto &edge : edges) {
            const DSNode *n = edge.second.getNode();
            if (n != NULL) {
              auto locConstraintsMap = ifa->locConstraintMap.find(n);
              if (locConstraintsMap != ifa->locConstraintMap.end()) {
                for (auto &kv : locConstraintsMap->second) {
                  elementsToUntaint.insert(kv.second);
                }
              }
            }
          }
        }
        auto offsetConsElemMap = ifa->locConstraintMap.find(*loc);
        if (offsetConsElemMap != ifa->locConstraintMap.end()) {
          for (auto &kv : offsetConsElemMap->second) {
            elementsToUntaint.insert(kv.second);
          }
        }
      }
      DEBUG(errs() << "FOUND " << elementsToUntaint.size()
                   << " elements from the locsForValue\n";);
    }

    DEBUG(errs() << "Number of elements to constrain: "
                 << elementsToUntaint.size() << "\n";
          for (auto el
               : elementsToUntaint) {
            el->dump(errs());
            errs() << "\n";
          });

    if (elementsToUntaint.size() == 0) {
      ifa->setLabel(kind, value, label, false);
    } else {
      std::string debugTag = " ;  [ConsDebugTag-*]  sink location";
      const ConsElem *constant = &(ifa->kit->constant(label));
      for (auto e : elementsToUntaint) {
        ifa->kit->addConstraint(kind, *e, *constant, debugTag);
      }
    }
  }
}

std::set<const ConsElem *> TaintAnalysisBase::gatherRelevantConsElems(
    const AbstractLoc *node, unsigned offset, unsigned numElements,
    const Value &val, bool tainting) {
  DenseMap<const AbstractLoc *, std::map<unsigned, const ConsElem *>>::iterator
      curElem = ifa->locConstraintMap.find(node);
  std::map<unsigned, const ConsElem *> elemMap;
  std::set<const ConsElem *> relevant;
  if (curElem == ifa->locConstraintMap.end())
    return relevant;

  elemMap = curElem->second;

  if (numElements == elemMap.size()) {
    relevant = ifa->findRelevantConsElem(node, elemMap, offset);
  } else {
    DEBUG(errs() << "Map size does not match number of elements "
                 << elemMap.size() << "\n";
          node->dump(););
  }

  // Go to other nodes if the type matches & retrieve their elements if exists
  if (hasPointerTarget(node)) {
    bool all_children = true;
    std::set<const AbstractLoc *> childLocs;
    Type *t = val.getType();
    if (isa<AllocaInst>(&val)) {
      t = t->getContainedType(0);
    }
    std::string tyname;
    raw_string_ostream tstr{tyname};
    tstr << *t;
    tstr.str();
    DEBUG(errs() << "Matching Type:" << tyname << "\n";);
    if (t->isPointerTy()) {

      DSNode::TyMapTy nodetypes{node->type_begin(), node->type_end()};
      for (auto &kv : nodetypes) {
        if (node->getSize() > 0 && node->hasLink(kv.first)) {
          const AbstractLoc *child = node->getLink(kv.first).getNode();
          if (all_children) {
            childLocs.insert(child);
          } else {
            for (svset<Type *>::const_iterator ni = kv.second->begin(),
                                               ne = kv.second->end();
                 ni != ne; ++ni) {
              std::string tyname2;
              raw_string_ostream nstr{tyname2};
              nstr << **ni;
              nstr.str();
              if (tyname == tyname2) {
                DEBUG(errs() << "FOUND MATCHING CHILD NODE:"; child->dump(););
                childLocs.insert(child);
              }
            }
          }
        }
      }
    }

    for (auto &l : childLocs) {
      std::set<const ConsElem *> childElems =
          gatherRelevantConsElems(l, offset, numElements, val, tainting);
      relevant.insert(childElems.begin(), childElems.end());
    }
  }

  return relevant;
}

void TaintAnalysisBase::labelValue(std::string kind,
                                   std::vector<ConfigVariable> vars, bool gte) {
  for (auto var : vars) {
    DEBUG(errs() << "Labeling value\n";);
    for (DenseMap<const Value *, const ConsElem *>::const_iterator
             entry = ifa->summarySourceValueConstraintMap.begin(),
             end = ifa->summarySourceValueConstraintMap.end();
         entry != end; ++entry) {
      const Value &value = *(entry->first);

      // Only taint variables defined in taint files if the function matches
      const Function *fn = findEnclosingFunc(&value);
      bool function_matches = false;
      if (var.function.size() == 0) {
        function_matches = true;
      } else if (fn && fn->hasName() && fn->getName() == var.function) {
        function_matches = true;
      }

      if (function_matches) {
        bool variable_matches = false;
        if (ifa->matchValueAndParsedString(value, kind, var) > 0) {
          variable_matches = true;
        }

        if (variable_matches) {
          constrainValue(kind, value, var.index, var.name, var.label);
        } else if (function_matches) {
          // test if the value's content starts with match
          std::string name = ifa->getOrCreateStringFromValue(value, false);
          if (name.find(var.name) == 0 && var.name.find(name) == 0) {
            DEBUG(errs() << "Match Detected for " << name << "\n";);
            ifa->setLabel(kind, value, var.label, gte);
          }
        }
      }
    }
  }
}

unsigned TaintAnalysisBase::fieldIndexToByteOffset(int index, const Value *v,
                                                   const AbstractLoc *loc) {
  unsigned offset = 0;
  if (StructType *st = convertValueToStructType(v)) {
    offset = ifa->findOffsetFromFieldIndex(st, index, loc);
  } else if (const AllocaInst *al = dyn_cast<AllocaInst>(v)) {
    if (isa<ArrayType>(al->getAllocatedType())) {
      offset = index;
    }
  }
  return offset;
}

unsigned TaintAnalysisBase::getNumElements(const Value &value) {

  if (const GetElementPtrInst *gep = dyn_cast<GetElementPtrInst>(&value)) {
    return gep->getNumIndices();
  }

  Type *t = value.getType();
  // If necessary strip pointers away
  while (t->isPointerTy()) {
    t = t->getContainedType(0);
  }

  if (StructType *structType = dyn_cast<StructType>(t)) {
    return structType->getNumElements();
  } else if (ArrayType *arrayType = dyn_cast<ArrayType>(t)) {
    return arrayType->getNumElements();
  }

  return 1;
}

} // namespace deps

#endif