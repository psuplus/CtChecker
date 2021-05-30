#include <fstream>

#include "TaintAnalysisBase.h"

using namespace llvm;
namespace deps {

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
  errs() << "Linked Node";
  if (node == NULL || node->getSize() == 0)
    return std::map<unsigned, const ConsElem *>();

  node->dump();
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
  errs() << "Trying to constrain " << match_name << " at " << t_offset
         << " for value : " << s << "\n";
  const std::set<const AbstractLoc *> &locs = ifa->locsForValue(value);
  const std::set<const AbstractLoc *> &rlocs =
      ifa->reachableLocsForValue(value);
  if (t_offset < 0 || (locs.size() == 0 && rlocs.size() == 0)) {
    errs() << "SETTING " << s << " TO BE TAINTED\n";
    ifa->setLabel(kind, value, label, true);
  }

  // Heap nodes not returned from locs For value
  AbstractLocSet relevantLocs{locs.begin(), locs.end()};
  for (auto &rl : rlocs) {
    if (rl->isHeapNode()) {
      relevantLocs.insert(rl);
    }
  }

#if 1
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

  unsigned offset = 0;
  // errs() << "Trying to get offset.. for  "<< s << "\n";
  bool hasOffset = ifa->offsetForValue(value, &offset);
  unsigned numElements = getNumElements(value);
  errs() << "This value has " << numElements << " elements.\n";
  errs() << "Has offset? " << (hasOffset ? "YES" : "NO")
         << ", and the offset is: " << offset << "\n";

  if (!ifa->offset_used) {
    t_offset = -1; // if offset is disabled ignore offset from taintfile
    hasOffset = false;
  }

  std::set<const AbstractLoc *>::const_iterator loc = relevantLocs.begin();
  std::set<const AbstractLoc *>::const_iterator end = relevantLocs.end();

  std::set<const ConsElem *> elementsToConstrain;
  for (; loc != end; ++loc) {
    (*loc)->dump();
    if ((*loc)->isNodeCompletelyFolded() ||
        (*loc)->type_begin() == (*loc)->type_end()) {
      // errs() << (*loc)->isNodeCompletelyFolded()
      //        << " :::: " << ((*loc)->type_begin() == (*loc)->type_end())
      //        << "\n";
      hasOffset = false;
    } else if (t_offset >= 0) {
      offset = fieldIndexToByteOffset(t_offset, &value, *loc);
      hasOffset = true;
    }

    if (hasOffset) {
      std::set<const ConsElem *> rel =
          gatherRelevantConsElems(*loc, offset, numElements, value);
      elementsToConstrain.insert(rel.begin(), rel.end());
    } else {
      // errs() << "!hasOffset\n";
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

    errs() << "FOUND " << elementsToConstrain.size()
           << " elements from the locsForValue\n";
  }

  errs() << "Number of elements to constrain: " << elementsToConstrain.size()
         << "\n";
  for (auto &el : elementsToConstrain) {
    el->dump(errs());
    errs() << " : addr " << el << "\n";
  }
  ifa->constrainAllConsElem(kind, value, elementsToConstrain, label);
}

void TaintAnalysisBase::untaintAllSink(std::string kind) {
  // process the sink functions' arguments
  errs() << "\n ========= Untaint Sink Functions ========= \n";
  for (auto ctxValuePair : ifa->sinkValueSet) {
    ContextID ctxt;
    RLLabel label;
    Value *v;
    int t_offset;
    std::tie(ctxt, label, v, t_offset) = ctxValuePair;
    Value &value = *v;

    errs() << "\tstart untainting \n\t";
    v->dump();
    errs() << "\tat offset: " << t_offset << "\n";

    const std::set<const AbstractLoc *> &locs = ifa->locsForValue(value);
    const std::set<const AbstractLoc *> &rlocs =
        ifa->reachableLocsForValue(value);

    // TODO: confirm the correctness of the [t_offset < 0] condition
    // It was removed for a while because we believed it was unnecessary
    if (t_offset < 0 || (locs.size() == 0 && rlocs.size() == 0)) {
      ifa->setLabel(kind, value, label, false);
    }

    // Heap nodes not returned from locs For value
    AbstractLocSet relevantLocs{locs.begin(), locs.end()};
    for (auto &rl : rlocs) {
      if (rl->isHeapNode()) {
        relevantLocs.insert(rl);
      }
    }

#if 1
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

    unsigned offset = 0;
    bool hasOffset = ifa->offsetForValue(value, &offset);
    unsigned numElements = getNumElements(value);
    errs() << "This value has " << numElements << " elements.\n";
    errs() << "Has offset? " << (hasOffset ? "YES" : "NO")
           << ", and the offset is: " << offset << "\n";

    if (!ifa->offset_used) {
      t_offset = -1; // if offset is disabled ignore offset from taintfile
      hasOffset = false;
    }

    std::set<const ConsElem *> elementsToUntaint;
    for (auto loc = relevantLocs.begin(); loc != relevantLocs.end(); ++loc) {
      errs() << "\nUntaint node at:\n";
      (*loc)->dump();
      if (t_offset >= 0) {
        offset = fieldIndexToByteOffset(t_offset, &value, *loc);
        errs() << "\tThe byte offset is: " << offset << "\n";
        hasOffset = true;
      } else {
        hasOffset = false;
      }

      if (hasOffset) {
        std::set<const ConsElem *> rel =
            gatherRelevantConsElems(*loc, offset, numElements, value);
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
      errs() << "FOUND " << elementsToUntaint.size()
             << " elements from the locsForValue\n";
    }

    errs() << "Number of elements to constrain: " << elementsToUntaint.size()
           << "\n";
    for (auto &el : elementsToUntaint) {
      el->dump(errs());
      errs() << " : addr " << el << "\n";
    }

    if (elementsToUntaint.size() == 0) {
      ifa->setLabel(kind, value, label, false);
    } else {
      std::string debugTag = " ;  [ConsDebugTag-*]  sink location";
      const ConsElem *constant = &(ifa->kit->constant(label));
      std::set<const ConsElem *>::iterator it = elementsToUntaint.begin();
      for (; it != elementsToUntaint.end(); ++it) {
        ifa->kit->addConstraint(kind, *(*it), *constant, debugTag);
        errs() << debugTag;
      }
    }
  }
}

std::set<const ConsElem *> TaintAnalysisBase::gatherRelevantConsElems(
    const AbstractLoc *node, unsigned offset, unsigned numElements,
    const Value &val) {
  DenseMap<const AbstractLoc *, std::map<unsigned, const ConsElem *>>::iterator
      curElem = ifa->locConstraintMap.find(node);
  std::map<unsigned, const ConsElem *> elemMap;
  std::set<const ConsElem *> relevant;

  if (curElem == ifa->locConstraintMap.end())
    return relevant;

  elemMap = curElem->second;
  errs() << "\n\tNODE: ";
  node->dump();

  errs() << "\tELEMS: \n";
  for (auto e : elemMap) {
    errs() << "\toffset: " << e.first << ", element [";
    e.second->dump(errs());
    errs() << "] addr [" << e.second << "] added.\n";
  }

  errs() << "Map size [" << elemMap.size() << "] <--> number of elements ["
         << numElements << "].\n";
  if (numElements == elemMap.size()) {
    relevant = ifa->findRelevantConsElem(node, elemMap, &val, offset);
    return relevant;
  } else {
    // errs() << "Adding ConsElem from elemMap to relevant set: \n";
    for (auto e : elemMap) {
      // errs() << "\toffset: " << e.first << ", element [";
      // e.second->dump(errs());
      // errs() << "] addr [" << e.second << "] added.\n";
      relevant.insert(e.second);
    }
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
    errs() << "Matching Type:" << tyname << "\n";
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
                errs() << "FOUND MATCHING CHILD NODE:";
                child->dump();
                childLocs.insert(child);
              }
            }
          }
        }
      }
    }

    for (auto &l : childLocs) {
      std::set<const ConsElem *> childElems =
          gatherRelevantConsElems(l, offset, numElements, val);
      relevant.insert(childElems.begin(), childElems.end());
    }
  }

  return relevant;
}

void TaintAnalysisBase::labelValue(std::string kind,
                                   std::vector<ConfigVariable> vars, bool gte) {
  for (DenseMap<const Value *, const ConsElem *>::const_iterator
           entry = ifa->summarySourceValueConstraintMap.begin(),
           end = ifa->summarySourceValueConstraintMap.end();
       entry != end; ++entry) {
    const Value &value = *(entry->first);

    for (auto var : vars) {
      // Only taint variables defined in taint files if the function matches
      const Function *fn = findEnclosingFunc(&value);
      bool function_matches = false;
      if (var.function.size() == 0 ||
          (fn && fn->hasName() && fn->getName() == var.function)) {
        function_matches = true;
      }

      if (function_matches) {
        bool variable_matches = false;
        errs() << "Matching value with config variable within function ["
               << fn->getName() << "]\n";
        const MDLocalVariable *local_var = ifa->findVarNode(&value, fn);
        if (local_var &&
            (local_var->getTag() == 257 || local_var->getTag() == 256)) {
          errs() << "\t- Variable has name [" << local_var->getName() << "]\n";
          if (local_var->getName() == var.name) {
            variable_matches = true;
            errs() << "\t- Found a local variable match\n\n";
          }
        }
        if (value.hasName()) {
          errs() << "\t- Value has the name [" << value.getName() << "]\n";
          if (value.getName() == var.name) {
            variable_matches = true;
            errs() << "\t- Found a value name match\n\n";
          }
        }

        if (variable_matches) {
          constrainValue(kind, value, var.index, var.name, var.label);
        } else {
          std::string s;
          llvm::raw_string_ostream *ss = new llvm::raw_string_ostream(s);
          *ss << value;
          ss->str();
          // test if the value's content starts with match
          if (s.find(var.name) == 0 && function_matches) {
            ifa->setLabel(kind, value, var.label, gte);
            errs() << "Match Detected for " << s << "\n";
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
