//===- Infoflow.cpp ---------------------------------------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file defines a constraint-based interprocedural (2-call site sensitive)
// information flow analysis for a two-level security lattice
// (Untainted--Tainted). While the analysis is context-sensitive, the Infoflow
// pass interface is not.
//
//===----------------------------------------------------------------------===//

// CHANGE
#ifndef DEBUG_TYPE
#define DEBUG_TYPE "deps"

#include "Infoflow.h"

namespace deps {

using namespace llvm;

static cl::opt<bool> DepsCollapseExtContext(
    "deps-collapse-external",
    cl::desc("Use the default context for all ExternalCallingNode calls"),
    cl::init(true));
static cl::opt<bool> DepsCollapseIndContext(
    "deps-collapse-indirect",
    cl::desc("Use the default context for all indirect calls"), cl::init(true));
static cl::opt<bool>
    DepsDropAtSink("deps-drop-sink-flows",
                   cl::desc("Cut dependencies from sinks to other values"),
                   cl::init(false));

typedef Infoflow::Flows Flows;

char Infoflow::ID = 42;
char PDTCache::ID = 0;
std::string delim = "|";

static RegisterPass<Infoflow>
    X("infoflow", "Compute information flow constraints", true, true);

static RegisterPass<PDTCache> Y("pdtcache", "Cache PostDom Analysis Results",
                                true, true);

Infoflow::Infoflow()
    : // The parameters to the template are an input and output type for the
      // user's analysis and a non-negative integer k.
      CallSensitiveAnalysisPass<Unit, Unit, 1, CallerContext>(
          ID, DepsCollapseExtContext, DepsCollapseIndContext),
      kit(new RLConstraintKit()) {
  offset_used = true;
}

void Infoflow::doInitialization() {
  // Get the PointsToInterface
  pti = &getAnalysis<PointsToInterface>();
  // CHANGE
  sourceSinkAnalysis = &getAnalysis<SourceSinkAnalysis>();
  // sourceSinkAnalysis = &getAnalysis<>();
  signatureRegistrar = new SignatureRegistrar();
  registerSignatures();

  readConfiguration();
}

void Infoflow::doFinalization() {
  // delete signatureRegistrar;
  // now deleted in destructor, because we need the registrar
  // for computing propagatesTaint

// turn on to print DSGraph for each context
// note std::filesystem requires c++17
#if 0
  DenseSet<DSGraph *> DSGSet;
  std::filesystem::remove_all("graph-output");
  std::filesystem::create_directory("graph-output");
  for (auto loc : locConstraintMap) {
    DSGraph *g = loc.first->getParentGraph();
    if (DSGSet.find(g) == DSGSet.end()) {
      std::string filename = "graph/" + g->getFunctionNames();
      g->writeGraphToFile(errs(), filename);
      DSGSet.insert(g);
    }
  }
#endif
}

void Infoflow::registerSignatures() {
  RegisterSignature<OverflowChecks> OverflowChecks(*signatureRegistrar);
  RegisterSignature<StdLib> StdLib(*signatureRegistrar);

  // For now, if we don't know the call don't bother with this.
  // It's expensive for the crazy amount of external calls to various
  // libraries that one encounters, and we don't have time to fix that.
  RegisterSignature<TaintReachable> TaintReachable(*signatureRegistrar);
  // RegisterSignature<ArgsToRet> ArgsToRet(*signatureRegistrar);
}

const Unit Infoflow::bottomInput() const { return Unit(); }

const Unit Infoflow::bottomOutput() const { return Unit(); }

const Unit Infoflow::runOnContext(const Infoflow::AUnitType unit,
                                  const Unit input) {
  DEBUG(errs() << "Running on " << unit.function().getName() << " in context [";
        CM.getContextFor(unit.context()).dump(); errs() << "]\n");

  // start only from entry functions, if entry is specified in config
  bool needAnalysis = true;
  if (unit.context() == DefaultID) { // top-level function
    if (config.contains("entry")) {
      needAnalysis = false; // ignore if there is no match
      std::list<std::string> entries = config.at("entry");
      for (auto e : entries) {
        if (unit.function().getName() == e) {
          needAnalysis = true;
          break;
        }
      }
    }
  }

  if (!needAnalysis)
    return Unit();

  generateFunctionConstraints(unit.function());

  // errs() << "----- Trying to print out kit->vars -----\n";
  // std::vector<const RLConsVar *> vars = kit->getVars();
  // for (std::vector<const RLConsVar *>::iterator var = vars.begin(), end =
  // vars.end();
  //  var != end; ++var) {
  //    if((*var)->getDesc() != "")
  //       errs() << (*var)->getDesc() << "\n";
  // }

  // kit->getOrCreateConstraintSet(kind)
  // errs() << "----- Trying to print out kit->joins -----\n";
  // std::set<RLJoin> joins = kit->getJoins();
  // for (std::set<RLJoin>::iterator join = joins.begin(), end = joins.end();
  //    join != end; ++join) {
  //      errs() << "--- Elements of one join ---\n";
  //      std::set<const ConsElem *> elems = (*join).elements();
  //      for(std::set<const ConsElem *>::iterator element = elems.begin(),
  //        end = elems.end(); element != end; ++element) {
  //        // errs() << (*element)-> << "\n";
  //      }
  //}

#if 0
  errs() << "----- Trying to print out ConstraintSet -----\n";
  /// there are 4 types "kind": default, default-sinks, explicit, explicit-sinks
  /// try "default" first
  std::vector<RLConstraint> set = kit->getOrCreateConstraintSet("default");
  /// set contains all constraints, constraints are pairs of ConsElem
  /// can't joint on rhs, only on lhs
  for(std::vector<RLConstraint>::iterator constraint = set.begin(), end = set.end();
      constraint != end; ++constraint) {
    //       /// a constraint contains two ConElem: lhs and rhs.
    //       /// We need to search through valueMap, locMap and vargMap to get the
    //       /// value paired to both ConElems.

    // print lhs
    (*constraint).lhs().dump(errs()); errs() << "["<< &(*constraint).lhs() << "]";
    errs() << "-->";
    (*constraint).rhs().dump(errs()); errs() << "["<< &(*constraint).rhs() << "]";
    errs()  << "\n";
  }
#endif
  getOrCreateLocationValueMap();
  return Unit();
}

void Infoflow::constrainFlowRecord(const FlowRecord &record) {
  const ConsElem *sourceElem = NULL;
  const ConsElem *sinkSourceElem = NULL;

  // First, build up the set of ConsElem's that represent the sources:
  std::set<const ConsElem *> Sources;
  std::set<const ConsElem *> sinkSources;
  {
    // For variables and vargs elements, add all of these directly to 'Sources'
    for (FlowRecord::value_iterator source = record.source_value_begin(),
                                    end = record.source_value_end();
         source != end; ++source) {
      // errs() << "Value: ";
      // if (isa<BasicBlock>(*source))
      //   errs() << "BB: " << (*source)->getName() << "\n";
      // else
      //   (*source)->dump();
      // errs() << "--$\n";
      const ConsElem *elem =
          &getOrCreateConsElem(record.sourceContext(), **source);
      if (!DepsDropAtSink || !sourceSinkAnalysis->valueIsSink(**source)) {
        Sources.insert(elem);
      } else {
        sinkSources.insert(elem);
      }
    }

    for (FlowRecord::fun_iterator source = record.source_varg_begin(),
                                  end = record.source_varg_end();
         source != end; ++source) {
      const ConsElem *elem =
          &getOrCreateVargConsElem(record.sourceContext(), **source);
      if (!DepsDropAtSink || !sourceSinkAnalysis->vargIsSink(**source)) {
        Sources.insert(elem);
      } else {
        sinkSources.insert(elem);
      }
    }

    // For memory-based sources, build up the set of memory locations that act
    // as sources for this record...
    // Turning off offset can be done in the direct/reachptr constraining
    // functions
    addMemorySourceLocations(record, Sources, sinkSources);
  }

  bool regFlow = !Sources.empty();
  bool sinkFlow = !sinkSources.empty();

  // This assert *should* be true expect that we're getting
  // DirectPtr sources that don't have any corresponding abstract locations
  // assert((DepsDropAtSink || regFlow) && "FlowRecord must have at least one
  // source!");

  // Take join of all sources, this is sourceElem
  if (regFlow)
    sourceElem = &kit->upperBound(Sources);
  if (sinkFlow)
    sinkSourceElem = &kit->upperBound(sinkSources);

  // Now we want to add constraints that *each* sink is greater
  // than the join of all the sources, computed above as sourceElem.
  bool implicit = record.isImplicit();

  // For values and varargs, just do this directly
  for (FlowRecord::value_iterator sink = record.sink_value_begin(),
                                  end = record.sink_value_end();
       sink != end; ++sink) {
    if (regFlow)
      putOrConstrainConsElem(implicit, false, record.sinkContext(), **sink,
                             *sourceElem);
    if (sinkFlow)
      putOrConstrainConsElem(implicit, true, record.sinkContext(), **sink,
                             *sinkSourceElem);
  }
  for (FlowRecord::fun_iterator sink = record.sink_varg_begin(),
                                end = record.sink_varg_end();
       sink != end; ++sink) {
    if (regFlow)
      putOrConstrainVargConsElem(implicit, false, record.sinkContext(), **sink,
                                 *sourceElem);
    if (sinkFlow)
      putOrConstrainVargConsElem(implicit, true, record.sinkContext(), **sink,
                                 *sinkSourceElem);
  }

  // To try to save constraint generation, gather memory locations as before:
  constrainSinkMemoryLocations(record, *sourceElem, *sinkSourceElem, regFlow,
                               sinkFlow);
}

void Infoflow::addMemorySourceLocations(const FlowRecord &record,
                                        ConsElemSet &Sources,
                                        ConsElemSet &sinkSources) {

  std::set<const AbstractLoc *> SourceLocs;
  std::set<const AbstractLoc *> sinkSourceLocs;

  addDirectSourceLocations(record, Sources, sinkSources, SourceLocs,
                           sinkSourceLocs);

  addReachSourceLocations(record, Sources, sinkSources, SourceLocs,
                          sinkSourceLocs);

  // ...And convert those locs into ConsElem's and store them into Sources
  for (std::set<const AbstractLoc *>::const_iterator I = SourceLocs.begin(),
                                                     E = SourceLocs.end();
       I != E; ++I) {
    std::map<unsigned, const ConsElem *> elemMap = getOrCreateConsElem(**I);
    for (std::map<unsigned, const ConsElem *>::const_iterator
             it = elemMap.begin(),
             itEnd = elemMap.end();
         it != itEnd; ++it) {
      Sources.insert((*it).second);
    }
  }
  for (std::set<const AbstractLoc *>::const_iterator I = sinkSourceLocs.begin(),
                                                     E = sinkSourceLocs.end();
       I != E; ++I) {
    std::map<unsigned, const ConsElem *> elemMap = getOrCreateConsElem(**I);
    for (std::map<unsigned, const ConsElem *>::const_iterator
             it = elemMap.begin(),
             itEnd = elemMap.end();
         it != itEnd; ++it) {
      sinkSources.insert((*it).second);
    }
  }
}

void Infoflow::addDirectSourceLocations(const FlowRecord &record,
                                        ConsElemSet &Sources,
                                        ConsElemSet &sinkSources,
                                        AbsLocSet &SourceLocs,
                                        AbsLocSet &sinkSourceLocs) {

  FlowRecord::value_set directSource;
  FlowRecord::value_set directSink;
  bool implicit = record.isImplicit();
  for (FlowRecord::value_iterator source = record.source_directptr_begin(),
                                  end = record.source_directptr_end();
       source != end; ++source) {
    if (!DepsDropAtSink || !sourceSinkAnalysis->directPtrIsSink(**source)) {
      directSource.insert(*source);
    } else {
      directSink.insert(*source);
    }
  }

  // Sort the Sources/Sinks handling the GEPinstructions separately
  // NON-GEP values get the corresponding AbsLocs added to the Source/SinkSet
  // GEP instructions are constrained directly based on offset
  // TO DISABLE OFFSET:
  // addDirectValuesToSources(directSource, Sources, SourceLocs, false);
  // addDirectValuesToSources(directSink, sinkSources, sinkSourceLocs, false);
  addDirectValuesToSources(directSource, Sources, SourceLocs, implicit);
  addDirectValuesToSources(directSink, sinkSources, sinkSourceLocs, implicit);
}

void Infoflow::addDirectValuesToSources(FlowRecord::value_set values,
                                        ConsElemSet &elems,
                                        AbsLocSet &locations, bool implicit) {
  for (FlowRecord::value_iterator it = values.begin(); it != values.end();
       ++it) {
    // errs() << "-->";(*it)->dump();
    const std::set<const AbstractLoc *> &locs = locsForValue(**it);
    if (isa<GetElementPtrInst>(*it) && offset_used) {
      errs() << "DSOURCEGEP INSTRUCTION " << stringFromValue(**it) << "\n";
      processGetElementPtrInstSource(*it, elems, locs, implicit);
    } else {
      locations.insert(locs.begin(), locs.end());
    }
    // errs() << "----<\n";
  }
}

void Infoflow::addReachSourceLocations(const FlowRecord &record,
                                       ConsElemSet &Sources,
                                       ConsElemSet &sinkSources,
                                       AbsLocSet &SourceLocs,
                                       AbsLocSet &sinkSourceLocs) {
  FlowRecord::value_set reachSource;
  FlowRecord::value_set reachSink;
  bool implicit = record.isImplicit();
  for (FlowRecord::value_iterator source = record.source_reachptr_begin(),
                                  end = record.source_reachptr_end();
       source != end; ++source) {
    errs() << "REACHABLE SOURCE: ";
    (*source)->dump();
    if (!DepsDropAtSink || !sourceSinkAnalysis->reachPtrIsSink(**source)) {
      reachSource.insert(*source);
    } else {
      reachSink.insert(*source);
    }
  }

  // Sort the Sources/Sinks handling the GEPinstructions separately
  // NON-GEP values get the corresponding AbsLocs added to the Source/SinkSet
  // GEP instructions are constrained directly based on offset
  // TO DISABLE OFFSET:
  // addReachValuesToSources(reachSource, Sources, SourceLocs, false);
  // addReachValuesToSources(reachSink, sinkSources, sinkSourceLocs, false);
  addReachValuesToSources(reachSource, Sources, SourceLocs, implicit);
  addReachValuesToSources(reachSink, sinkSources, sinkSourceLocs, implicit);
}

void Infoflow::addReachValuesToSources(FlowRecord::value_set values,
                                       ConsElemSet &elems, AbsLocSet &locations,
                                       bool implicit) {
  for (FlowRecord::value_iterator it = values.begin(); it != values.end();
       ++it) {
    const std::set<const AbstractLoc *> &locs = reachableLocsForValue(**it);
    if (isa<GetElementPtrInst>(*it) && offset_used) {
      errs() << "RSOURCEGEP INSTRUCTION " << stringFromValue(**it) << "\n";
      processGetElementPtrInstSource(*it, elems, locs, implicit);
    } else {
      for (auto &l : locs) {
        l->dump();
      }
      locations.insert(locs.begin(), locs.end());
    }
  }
}

void Infoflow::constrainSinkMemoryLocations(const FlowRecord &record,
                                            const ConsElem &source,
                                            const ConsElem &sinkSource,
                                            bool regFlow, bool sinkFlow) {
  bool implicit = record.isImplicit();

  std::set<const AbstractLoc *> SinkLocs;
  // if (&source)
  //   source.dump(errs());
  // errs() << "\n";
  // if (&sinkSource)
  //   sinkSource.dump(errs());
  // errs() << "\n";
  constrainDirectSinkLocations(record, SinkLocs, source, sinkSource, regFlow,
                               sinkFlow);
  constrainReachSinkLocations(record, SinkLocs, source, sinkSource, regFlow,
                              sinkFlow);

  // And add constraints for each of the sink memory locations
  for (std::set<const AbstractLoc *>::iterator loc = SinkLocs.begin(),
                                               end = SinkLocs.end();
       loc != end; ++loc) {
    // errs() << "reg: " << regFlow << ", sink: " << sinkFlow << "\n";
    if (regFlow)
      putOrConstrainConsElem(implicit, false, **loc, source);
    if (sinkFlow)
      putOrConstrainConsElem(implicit, true, **loc, sinkSource);
  }
}

void Infoflow::constrainDirectSinkLocations(const FlowRecord &record,
                                            AbsLocSet &SinkLocs,
                                            const ConsElem &source,
                                            const ConsElem &sinkSource,
                                            bool regFlow, bool sinkFlow) {
  bool implicit = record.isImplicit();
  for (FlowRecord::value_iterator sink = record.sink_directptr_begin(),
                                  end = record.sink_directptr_end();
       sink != end; ++sink) {
    const std::set<const AbstractLoc *> &locs = locsForValue(**sink);
    // errs() << "THIS IS SINK: ";
    // (*sink)->dump();
    // for (auto loc : locs) {
    //   loc->dump();
    // }
    if (isa<GetElementPtrInst>(*sink) && offset_used) {
      errs() << "DSINKGEP INSTRUCTION " << stringFromValue(**sink) << "\n";
      if (regFlow)
        processGetElementPtrInstSink(*sink, implicit, false, source, locs);
      if (sinkFlow)
        processGetElementPtrInstSink(*sink, implicit, true, sinkSource, locs);
    } else {
      SinkLocs.insert(locs.begin(), locs.end());
    }
  }
}

/* Currently the only insertion into reachable sink is from the TaintReachable
   class within the signaturelibrary.cpp used for processing functions without
   source code.

   Any location that is passed through here, all DSnodes are addeed to the set
   including the child nodes.
*/
void Infoflow::constrainReachSinkLocations(const FlowRecord &record,
                                           AbsLocSet &SinkLocs,
                                           const ConsElem &source,
                                           const ConsElem &sinkSource,
                                           bool regFlow, bool sinkFlow) {
  bool implicit = record.isImplicit();

  for (FlowRecord::value_iterator sink = record.sink_reachptr_begin(),
                                  end = record.sink_reachptr_end();
       sink != end; ++sink) {
    errs() << "RSINKGEP INSTRUCTION " << stringFromValue(**sink) << "\n";
    const std::set<const AbstractLoc *> &locs = reachableLocsForValue(**sink);
    if (isa<GetElementPtrInst>(*sink) && offset_used) {
      if (regFlow)
        processGetElementPtrInstSink(*sink, implicit, false, source, locs);
      if (sinkFlow)
        processGetElementPtrInstSink(*sink, implicit, true, sinkSource, locs);
    }
    SinkLocs.insert(locs.begin(), locs.end());
    for (auto &l : locs) {
      DSNode::LinkMapTy childNodeHandles{l->edge_begin(), l->edge_end()};
      for (auto &handlekv : childNodeHandles) {
        const AbstractLoc *child = handlekv.second.getNode();
        if (child != NULL) {
          SinkLocs.insert(child);
          errs() << "Added child elem: ";
          child->dump();
        }
      }
    }
  }
}

///
/// This function takes any GetElementPtrInst values and extracts the offset
/// the instruction is dealing with. That offset is used to constrain the
/// element from the instruction more specifically
///
void Infoflow::processGetElementPtrInstSink(
    const Value *value, bool implicit, bool sink, const ConsElem &lub,
    std::set<const AbstractLoc *> locs) {
  errs() << "[Sink:] " << stringFromValue(*value) << "\n";
  const GetElementPtrInst *gep = dyn_cast<GetElementPtrInst>(value);
  Type *T = cast<PointerType>(gep->getPointerOperandType())->getElementType();
  T->dump();
  unsigned numElements = 0;
  if (isa<ArrayType>(T))
    numElements = GEPInstCalculateNumberElements(gep);

  // If operands are not constant constrain all ConsElems
  // i.e. Operands are variables or values loaded from a register
  if (!checkGEPOperandsConstant(gep)) {
    // errs() << "Non-constant ptr or offset\n";
    for (std::set<const AbstractLoc *>::const_iterator I = locs.begin(),
                                                       E = locs.end();
         I != E; ++I) {
      putOrConstrainConsElem(implicit, sink, **I, lub);
    }
    return;
  }

  // Otherwise constrain the elements that are at the location of the operands
  unsigned offset = GEPInstCalculateOffset(gep, locs);
  bool structTy = false;
  const StructType *s = dyn_cast<StructType>(gep->getSourceElementType());
  if (s != NULL) {
    s->dump();
    errs() << "::IS STRUCT TY::";
    structTy = true;
  }
  // const Value * allocValue = getAllocationValue(gep);
  AbstractLocSet structPtrLocs = getPointedToAbstractLocs(gep);
  // errs() << "=locs=\n" << structPtrLocs.size() << "\n";
  // for (std::set<const AbstractLoc *>::iterator loc = structPtrLocs.begin(),
  //                                              end = structPtrLocs.end();
  //      loc != end; ++loc) {
  //   if (*loc) {
  //     (*loc)->dump();
  //   }
  //   errs() << "=locs=\n";
  // }

  AbstractLocSet toConstrain{locs.begin(), locs.end()};
  toConstrain.insert(structPtrLocs.begin(), structPtrLocs.end());
  for (std::set<const AbstractLoc *>::iterator loc = toConstrain.begin(),
                                               end = toConstrain.end();
       loc != end; ++loc) {
    if (*loc) {
      errs() << "Tainting at offset: " << offset << "\n";
      (*loc)->dump();
      // Put additional Copy elements here and reverse the order of the copy
      if (structTy)
        putOrConstrainConsElemStruct(implicit, sink, **loc, lub, offset, value);

      putOrConstrainConsElem(implicit, sink, **loc, lub, offset, numElements);
    }
  }
}

///
/// This function takes any GetElementPtrInst values and extracts the offset
/// the instruction is dealing with. That offset is used to find the correct
/// ConsElem related to the value and add that to the corresponding source set.
///
void Infoflow::processGetElementPtrInstSource(
    const Value *source, std::set<const ConsElem *> &sourceSet,
    std::set<const AbstractLoc *> locs, bool implicit) {
  // get ConsElem from Value
  errs() << "[Source:] " << stringFromValue(*source) << "\n";
  const GetElementPtrInst *gep = dyn_cast<GetElementPtrInst>(source);
  Type *T = cast<PointerType>(gep->getPointerOperandType())->getElementType();
  unsigned numElements = 0;
  if (isa<ArrayType>(T))
    numElements = GEPInstCalculateNumberElements(gep);
  if (StructType *st = dyn_cast<StructType>(T)) {
    numElements = st->getNumElements();
  }

  // If operands are not constant taint all consElems
  if (!checkGEPOperandsConstant(gep)) {
    // errs() << "Non-constant ptr or offset\n";
    for (std::set<const AbstractLoc *>::const_iterator I = locs.begin(),
                                                       E = locs.end();
         I != E; ++I) {
      std::map<unsigned, const ConsElem *> elemMap;
      elemMap = getOrCreateConsElemTyped(**I, numElements, source);

      for (std::map<unsigned, const ConsElem *>::iterator i = elemMap.begin(),
                                                          e = elemMap.end();
           i != e; ++i) {
        sourceSet.insert((*i).second);
      }
    }
    return;
  }

  // If operands are constant taint only that element
  unsigned int offset = GEPInstCalculateOffset(gep, locs);
  // errs() << "\nSourceOffset: " << offset << "\n";

  // Link Allocation memory location as well incase that is tainted
  const Value *allocation = getAllocationValue(gep);
  AbstractLocSet structptrLocs = getPointedToAbstractLocs(allocation);
  const AbstractLoc *node = *(structptrLocs.begin());
  ConsElemSet parentElems;
  if (locConstraintMap.find(node) != locConstraintMap.end()) {
    ConsElemSet pElems =
        findRelevantConsElem(node, locConstraintMap[node], offset);
    parentElems.insert(pElems.begin(), pElems.end());
  }

  for (std::set<const AbstractLoc *>::const_iterator I = locs.begin(),
                                                     E = locs.end();
       I != E; ++I) {
    (*I)->dump();
    std::map<unsigned, const ConsElem *> elemMap;
    elemMap = getOrCreateConsElemTyped(**I, numElements, source);

    if (elemMap.size() == 1 && !(*I)->isArrayNode() &&
        !(*I)->isNodeCompletelyFolded()) {
      if ((*I)->isHeapNode()) {
        elemMap = getOrCreateConsElemTyped(**I, numElements, source, true);
      }
    }

    // ElemMap should match the number of elements unless
    // the number is not known at compile time
    // If the offset is somehow larger than the map, add all
    // constraint elements to the sourceSet
    // Collapsed nodes contain no type info, so also taint all elems
    std::set<const ConsElem *> sourceElems =
        findRelevantConsElem(*I, elemMap, offset);
    sourceElems.insert(parentElems.begin(), parentElems.end());
    for (std::set<const ConsElem *>::iterator i = sourceElems.begin();
         i != sourceElems.end(); ++i) {
      errs() << "CONSTRAINING: ";
      (*i)->dump(errs());
      errs() << *i << "\n";
      sourceSet.insert(*i);
    }
  }
}

// Returns a set of the correct constraint elements to be handled
std::set<const ConsElem *>
Infoflow::findRelevantConsElem(const AbstractLoc *node,
                               std::map<unsigned, const ConsElem *> elemMap,
                               unsigned offset) {

  std::set<const ConsElem *> elements;
  errs() << "Trying to find element at offset " << offset << "\n";

  // if (node->isNodeCompletelyFolded()){
  //  // All elements are relevant
  //  for(std::map<unsigned, const ConsElem*>::iterator it = elemMap.begin();
  //  it!= elemMap.end(); ++it){
  //    elements.insert(it->second);
  //  }
  //} else
  if (elemMap.find(offset) != elemMap.end()) {
    // Add the element which matches the offset
    elements.insert(elemMap[offset]);
  } else {
    // Do a search to find the element which spans the range of the offset
    // requested if elements 0-4 4-8  exist and offset is 5, return element 4-8
    // TODO: Handle if the element selected spans more than one constraint
    // element.

    if (elemMap.begin() != elemMap.end()) {
      const ConsElem *prevElem = NULL;
      bool elemAdded = false;
      for (std::map<unsigned, const ConsElem *>::iterator it = elemMap.begin(),
                                                          itEnd = elemMap.end();
           it != itEnd && !elemAdded; ++it) {
        if (it->first > offset) {
          if (prevElem == NULL) {
            prevElem = it->second;
          } else {
            elemAdded = true;
            elements.insert(prevElem);
          }
        }

        prevElem = it->second;
      }

      // In case end of map reached and no element added
      if (prevElem != NULL && !elemAdded) {
        elements.insert(prevElem);
      }
    }
  }

  // DEBUG(errs() << "SIZE OF ELEMENTS : " << elements.size() << "\n");
  return elements;
}

//
// Funtctions to parse teh GetElementPtrInst and return the correct offset
// to find the correct ConsElem to add to the constraint sets
//
// This handles the different types of  GEPInstructions that can occur
// and calls the correct parsing function
unsigned Infoflow::GEPInstCalculateOffset(const GetElementPtrInst *gep,
                                          std::set<const AbstractLoc *> locs) {
  Type *T = cast<PointerType>(gep->getPointerOperandType())->getElementType();
  unsigned offset = 0;
  if (isa<ArrayType>(T)) {
    if (!checkGEPOperandsConstant(gep)) {
      return -1;
    }
    errs() << "ArrayType:";
    offset = GEPInstCalculateArrayOffset(gep, locs);
  } else if (gep->getNumIndices() == 2) {
    errs() << "StructType:";
    offset = GEPInstCalculateStructOffset(gep, locs);
  } else {
    ConstantInt *ptrIdx = dyn_cast<ConstantInt>(gep->getOperand(1));
    offset = ptrIdx->getZExtValue();
  }

  return offset;
}

unsigned
Infoflow::GEPInstCalculateNumberElements(const GetElementPtrInst *gep) {
  Type *T = cast<PointerType>(gep->getPointerOperandType())->getElementType();
  unsigned numElements = cast<ArrayType>(T)->getNumElements();
  // errs() << "GEP # elements in array: " << numElements << "\n";
  return numElements;
}

unsigned
Infoflow::GEPInstCalculateArrayOffset(const GetElementPtrInst *gep,
                                      std::set<const AbstractLoc *> locs) {
  unsigned numElements = GEPInstCalculateNumberElements(gep);

  // *(ptr + i) = 4; ptr is operand 1 and i is operand 2
  Value *value = dyn_cast<Value>(gep->getOperand(0));
  uint64_t base = 0;
  if (isa<GetElementPtrInst>(value))
    base = GEPInstCalculateOffset(dyn_cast<GetElementPtrInst>(value), locs);
  ConstantInt *ptr = dyn_cast<ConstantInt>(gep->getOperand(1));
  ConstantInt *ptrOffset = dyn_cast<ConstantInt>(gep->getOperand(2));
  uint64_t ptrIdx = ptr->getZExtValue();
  uint64_t ptrOff = ptrOffset->getZExtValue();
  unsigned offset = ptrIdx * numElements + ptrOff;
  return base + offset;
}

unsigned
Infoflow::GEPInstCalculateStructOffset(const GetElementPtrInst *gep,
                                       std::set<const AbstractLoc *> locs) {
  // *(ptr + i) = 4; ptr is operand 1 and i is operand 2
  ConstantInt *ptrOffset = dyn_cast<ConstantInt>(gep->getOperand(2));
  uint64_t ptrOff = ptrOffset->getZExtValue();
  unsigned offset = ptrOff;
  StructType *structType = dyn_cast<StructType>(gep->getSourceElementType());

  Value *value = dyn_cast<Value>(gep->getOperand(0));
  uint64_t base = 0;
  if (isa<GetElementPtrInst>(value))
    base = GEPInstCalculateOffset(dyn_cast<GetElementPtrInst>(value), locs);

  if (locs.size() > 1) { // if multiple DSNodes just return the offset
    return base + offset;
  }

  // if the offset is non zero, get offset by adding together largest blocks
  // until the position in the structure is met.
  // Treat offset received from previous line as the index of the actual type in
  // a structure

  offset = findOffsetFromFieldIndex(structType, offset, *(locs.begin()));
  return base + offset;
}

// findOffsetFromFieldIndex is called from the GEPInstCalculateStructOffset
// function This function takes the type information from the LLVM type and
// walks through and finds the relevant byte offset that the field index (last
// operand of GEP inst) is located within the structure. This method allows for
// the gaps in the structure to be properly marked even when the is type
// information missing in the AbstractLoc's type information map for that node
unsigned Infoflow::findOffsetFromFieldIndex(StructType *type, unsigned fieldIdx,
                                            const AbstractLoc *loc) {
  const DataLayout &TD = loc->getParentGraph()->getDataLayout();
  const StructLayout *SL = TD.getStructLayout(type);
  return SL->getElementOffset(fieldIdx);
}

//
// checkGEPOperandsConst returns true if all operands used in the offset
// calculations are constant. The calculating functions assume that these
// operands are constant and this function is necessary to check before
// invoking any of those functions.
//
bool Infoflow::checkGEPOperandsConstant(const GetElementPtrInst *gep) {
  Type *T = cast<PointerType>(gep->getPointerOperandType())->getElementType();
  // If array, check both indices ptr+offset (operand 1 and 2)
  if (isa<ArrayType>(T) && gep->getNumIndices() == 2) {
    if (!isa<ConstantInt>(gep->getOperand(1)))
      return false;
    if (!isa<ConstantInt>(gep->getOperand(2)))
      return false;
    return true;
  } else if (gep->getNumIndices() == 2) {
    // if structure check the offset (operand 2)
    if (!isa<ConstantInt>(gep->getOperand(2)))
      return false;
    return true;
  } else {
    if (!isa<ConstantInt>(gep->getOperand(1)))
      return false;
    return true;
  }
}

const Unit Infoflow::signatureForExternalCall(const ImmutableCallSite &cs,
                                              const Unit input) {
  Flows recs = signatureRegistrar->process(this->getCurrentContext(), cs);

  // For each flow record returned by the signature, update the constraint sets
  for (Flows::iterator r = recs.begin(), e = recs.end(); r != e; ++r) {
    if (!(*r).isImplicit()) {
      (*r).dump();
      // constrainFlowRecord(*r);
    }
  }

  flowVector.insert(flowVector.end(), recs.begin(), recs.end());
  return bottomOutput();
}

///////////////////////////////////////////////////////////////////////////////
/// InfoflowSolution
///////////////////////////////////////////////////////////////////////////////

InfoflowSolution::~InfoflowSolution() {
  if (soln != NULL)
    delete soln;
}

bool InfoflowSolution::isTainted(const Value &value) {
  DenseMap<const Value *, const ConsElem *>::iterator entry =
      valueMap.find(&value);
  if (entry != valueMap.end()) {
    const ConsElem &elem = *(entry->second);
    return (!(soln->subst(elem) == botConstant));
  } else {
    DEBUG(errs() << "not in solution: " << value << "\n");
    return defaultTainted;
  }
}

const Function *Infoflow::findEnclosingFunc(const Value *V) const {
  if (const Argument *Arg = dyn_cast<Argument>(V)) {
    return Arg->getParent();
  }
  if (const Instruction *I = dyn_cast<Instruction>(V)) {
    return I->getParent()->getParent();
  }
  return NULL;
}

const MDLocation *Infoflow::findVar(const Value *V, const Function *F) const {
  for (const_inst_iterator Iter = inst_begin(F), End = inst_end(F); Iter != End;
       ++Iter) {
    const Instruction *I = &*Iter;
    for (unsigned i = 0; i < I->getNumOperands(); i++) {
      if (V == I->getOperand(i)) {
        return I->getDebugLoc();
      }
    }
  }
  return NULL;
}

const MDLocalVariable *Infoflow::findVarNode(const Value *V,
                                             const Function *F) const {
  StringRef vName;
  if (V->hasName()) {
    vName = V->getName();
  }
  errs() << "\t- looking for value [" << vName << "] in function ["
         << F->getName() << "]\n";
  for (const_inst_iterator Iter = inst_begin(F), End = inst_end(F); Iter != End;
       ++Iter) {
    const Instruction *I = &*Iter;
    if (const DbgDeclareInst *DbgDeclare = dyn_cast<DbgDeclareInst>(I)) {
      if (DbgDeclare->getAddress() == V)
        return DbgDeclare->getVariable();
    } else if (const DbgValueInst *DbgValue = dyn_cast<DbgValueInst>(I)) {
      if (DbgValue->getValue() == V)
        return DbgValue->getVariable();
    }
  }
  return NULL;
}

void Infoflow::getOriginalLocation(const Value *V) {
  // Global var?
  if (const GlobalVariable *glb = dyn_cast<GlobalVariable>(V)) {
    errs() << "Global var: " << glb->getName() << "\n";
    return;
  }

  const MDLocation *Loc;
  // Instruction?
  if (const Instruction *I = dyn_cast<Instruction>(V)) {
    Loc = I->getDebugLoc();
    if (!Loc) {
      const MDLocalVariable *lv = findVarNode(V, I->getParent()->getParent());
      if (!lv) {
        errs() << "Unknown local variable"
               << "\n";
        return;
      }
      errs() << lv->getFilename() << " line: " << lv->getLine() << "\n";
      return;
    }
  } else { // try to find the uses of the value
    const Function *F = findEnclosingFunc(V);
    if (!F) {
      errs() << "Unknown location"
             << "\n";
      return;
    }

    // check function parameters
    for (Function::ArgumentListType::const_iterator ite = F->arg_begin(),
                                                    end = F->arg_end();
         ite != end; ++ite) {
      if (&*ite == V) {
        errs() << "Function " << F->getName() << " Arg: " << ite->getName()
               << "\n";
        return;
      }
    }

    // search in all instructions
    Loc = findVar(V, F);
    if (!Loc) {
      const MDLocalVariable *lv = findVarNode(V, F);
      if (!lv) {
        errs() << "Unknown local variable"
               << "\n";
        return;
      }
      errs() << "Local variable: ";
      lv->dump();
      return;
    }
  }

  if (!Loc) {
    errs() << "Unknown location for " << V->getName() << "\n";
    return;
  }
  errs() << Loc->getFilename() << " line: " << std::to_string(Loc->getLine())
         << "\n";
  return;
}

std::string Infoflow::getOriginalLocationConsElem(const Value *V) {
  // Global var?
  std::string ret;

  if (!V) {
    return delim;
  }

  if (const GlobalVariable *glb = dyn_cast<GlobalVariable>(V)) {
    ret = "Global_var:";
    ret.append(glb->getName());
    ret.append(delim);
    return ret;
  }

  const MDLocation *Loc;
  // Instruction?
  if (const Instruction *I = dyn_cast<Instruction>(V)) {
    Loc = I->getDebugLoc();
    errs() << "dumping inst: ";
    I->dump();
    if (!Loc) {
      const MDLocalVariable *lv = findVarNode(V, I->getParent()->getParent());
      if (!lv) {
        return delim; // "no_local_var";
      }
      ret = lv->getFilename();
      ret.append(delim);
      ret.append(std::to_string(lv->getLine()));
      return ret;
    }
  } else { // try to find the uses of the value
    const Function *F = findEnclosingFunc(V);
    if (!F) {
      return delim; // "no_enclose_func";
    }

    // check function parameters
    for (Function::ArgumentListType::const_iterator ite = F->arg_begin(),
                                                    end = F->arg_end();
         ite != end; ++ite) {
      if (&*ite == V) {
        ret = "Function:";
        ret.append(F->getName());
        ret.append("&Arg:");
        ret.append(ite->getName());
        ret.append(delim);
        return ret;
      }
    }

    // search in all instructions
    Loc = findVar(V, F);
    if (!Loc) {
      const MDLocalVariable *lv = findVarNode(V, F);
      if (!lv) {
        return delim; // "no_local_var_2";
      }
      // errs() << "Local_variable:";
      // lv->dump();
      return "Local_variable:";
    }
  }

  if (!Loc) {
    ret = "Unknown_location_for:";
    ret.append(V->getName());
    ret.append(delim);
    return ret;
  }
  // errs() << Loc->getFilename() << delim << std::to_string(Loc->getLine());
  ret = Loc->getFilename();
  ret.append(delim);
  ret.append(std::to_string(Loc->getLine()));
  return ret;
}

void InfoflowSolution::getOriginalLocation(const Value *V) {
  // Global var?
  if (const GlobalVariable *glb = dyn_cast<GlobalVariable>(V)) {
    errs() << "Global var: " << glb->getName();
    return;
  }

  const MDLocation *Loc;
  // Instruction?
  if (const Instruction *I = dyn_cast<Instruction>(V)) {
    Loc = I->getDebugLoc();
  } else { // try to find the uses of the value
    const Function *F = infoflow.findEnclosingFunc(V);
    if (!F) {
      errs() << "Unknown location";
      return;
    }

    // check function parameters
    for (Function::ArgumentListType::const_iterator ite = F->arg_begin(),
                                                    end = F->arg_end();
         ite != end; ++ite) {
      if (&*ite == V) {
        errs() << "Function " << F->getName() << " Arg: " << ite->getName();
        return;
      }
    }

    // search in all instructions
    Loc = infoflow.findVar(V, F);
  }

  if (!Loc) {
    errs() << "Unknown location for " << V->getName();
    return;
  }
  errs() << Loc->getFilename() << " line: " << std::to_string(Loc->getLine());
  return;
}

void InfoflowSolution::allTainted() {
  for (DenseMap<const Value *, const ConsElem *>::const_iterator
           entry = valueMap.begin(),
           end = valueMap.end();
       entry != end; ++entry) {
    const Value &v = *(entry->first);
    if (isTainted(v)) {
      errs() << "Tainted! ";
      // v.dump();
      getOriginalLocation(&v);
      errs() << "\n";
    }
  }
}

std::set<const Value *> InfoflowSolution::getAllTaintValues() {
  std::set<const Value *> ret;
  for (DenseMap<const Value *, const ConsElem *>::const_iterator
           entry = valueMap.begin(),
           end = valueMap.end();
       entry != end; ++entry) {
    const Value *v = (entry->first);
    if (isTainted(*v)) {
      ret.insert(v);
    }
  }
  return ret;
}

bool InfoflowSolution::isDirectPtrTainted(const Value &value) {
  const std::set<const AbstractLoc *> &locs = infoflow.locsForValue(value);
  for (std::set<const AbstractLoc *>::const_iterator loc = locs.begin(),
                                                     end = locs.end();
       loc != end; ++loc) {
    DenseMap<const AbstractLoc *,
             std::map<unsigned, const ConsElem *>>::iterator entry =
        locMap.find(*loc);
    if (entry != locMap.end()) {
      std::map<unsigned, const ConsElem *>::iterator it = entry->second.begin();
      std::map<unsigned, const ConsElem *>::iterator itEnd =
          entry->second.end();
      for (; it != itEnd; ++it) {
        const ConsElem &elem = *(*it).second;
        if (soln->subst(elem) == topConstant) {
          return true;
        }
      }
    } else {
      assert(false && "abstract location not in solution!");
      return defaultTainted;
    }
  }
  return false;
}

bool InfoflowSolution::isReachPtrTainted(const Value &value) {
  const std::set<const AbstractLoc *> &locs =
      infoflow.reachableLocsForValue(value);
  for (std::set<const AbstractLoc *>::iterator loc = locs.begin(),
                                               end = locs.end();
       loc != end; ++loc) {
    DenseMap<const AbstractLoc *,
             std::map<unsigned, const ConsElem *>>::iterator entry =
        locMap.find(*loc);
    if (entry != locMap.end()) {
      std::map<unsigned, const ConsElem *>::iterator it = entry->second.begin();
      std::map<unsigned, const ConsElem *>::iterator itEnd =
          entry->second.end();
      for (; it != itEnd; ++it) {
        const ConsElem &elem = *(*it).second;
        if (soln->subst(elem) == topConstant) {
          return true;
        }
      }
    } else {
      assert(false && "abstract location not in solution!");
      return defaultTainted;
    }
  }
  return false;
}

bool InfoflowSolution::isVargTainted(const Function &fun) {
  DenseMap<const Function *, const ConsElem *>::iterator entry =
      vargMap.find(&fun);
  if (entry != vargMap.end()) {
    const ConsElem &elem = *(entry->second);
    return (soln->subst(elem) == topConstant);
  } else {
    DEBUG(errs() << "not in solution: varargs of " << fun.getName() << "\n");
    return defaultTainted;
  }
}

///////////////////////////////////////////////////////////////////////////////
/// Infoflow
///////////////////////////////////////////////////////////////////////////////
bool Infoflow::DropAtSinks() const { return DepsDropAtSink; }

void Infoflow::setLabel(std::string kind, const Value &value, RLLabel label,
                        bool gte) {
  assert(kind != "default" && "Cannot add constraints to the default kind");
  assert(kind != "implicit" && "Cannot add constraints to the implicit kind");

  if (gte)
    putOrConstrainConsElemSummarySource(kind, value, kit->constant(label));
  else {
    const ConsElem &current = getOrCreateConsElemSummarySink(value);
    kit->addConstraint(kind, current, kit->constant(label),
                       " ;  [ConsDebugTag-1]  \n");
    errs() << " ;  [ConsDebugTag-1]  ";
    getOriginalLocation(&value);
  }
}

void Infoflow::setUntainted(std::string kind, const Value &value) {
  assert(kind != "default" && "Cannot add constraints to the default kind");
  assert(kind != "implicit" && "Cannot add constraints to the implicit kind");
  const ConsElem &current = getOrCreateConsElemSummarySink(value);
  kit->addConstraint(kind, current, kit->botConstant(),
                     " ;  [ConsDebugTag-1]  \n");
  errs() << " ;  [ConsDebugTag-1]  ";
  getOriginalLocation(&value);
}

void Infoflow::setTainted(std::string kind, const Value &value) {
  assert(kind != "default" && "Cannot add constraints to the default kind");
  assert(kind != "implicit" && "Cannot add constraints to the implicit kind");
  putOrConstrainConsElemSummarySource(kind, value, kit->topConstant());
}

void Infoflow::setVargUntainted(std::string kind, const Function &fun) {
  assert(kind != "default" && "Cannot add constraints to the default kind");
  assert(kind != "implicit" && "Cannot add constraints to the implicit kind");
  const ConsElem &current = getOrCreateVargConsElemSummarySink(fun);
  kit->addConstraint(kind, current, kit->botConstant(),
                     " ;  [ConsDebugTag-2]  \n");
  errs() << " ;  [ConsDebugTag-2]  ";
  getOriginalLocation(&fun);
}

void Infoflow::setVargTainted(std::string kind, const Function &fun) {
  assert(kind != "default" && "Cannot add constraints to the default kind");
  assert(kind != "implicit" && "Cannot add constraints to the implicit kind");
  putOrConstrainVargConsElemSummarySource(kind, fun, kit->topConstant());
}

void Infoflow::setDirectPtrUntainted(std::string kind, const Value &value) {
  assert(kind != "default" && "Cannot add constraints to the default kind");
  assert(kind != "implicit" && "Cannot add constraints to the implicit kind");
  const std::set<const AbstractLoc *> &locs = locsForValue(value);
  unsigned offset = 0;
  bool hasOffset = offsetForValue(value, &offset);
  for (std::set<const AbstractLoc *>::iterator loc = locs.begin(),
                                               end = locs.end();
       loc != end; ++loc) {
    std::map<unsigned, const ConsElem *> elemMap = getOrCreateConsElem(**loc);
    if (hasOffset) {
      const ConsElem &elem = *elemMap[offset];
      kit->addConstraint(kind, elem, kit->botConstant(),
                         " ;  [ConsDebugTag-5]  \n");
      errs() << " ;  [ConsDebugTag-5]  ";
      getOriginalLocation(&value);
    }
    // for(std::map<unsigned, const ConsElem *>::iterator it = elemMap.begin(),
    // itEnd= elemMap.end(); it != itEnd; ++it){ kit->addConstraint(kind,
    // *(*it).second, kit->botConstant());
    // }
  }
}

void Infoflow::setDirectPtrTainted(std::string kind, const Value &value) {
  assert(kind != "default" && "Cannot add constraints to the default kind");
  assert(kind != "implicit" && "Cannot add constraints to the implicit kind");
  const std::set<const AbstractLoc *> &locs = locsForValue(value);
  unsigned offset = 0;
  bool hasOffset = offsetForValue(value, &offset);
  for (std::set<const AbstractLoc *>::iterator loc = locs.begin(),
                                               end = locs.end();
       loc != end; ++loc) {
    std::map<unsigned, const ConsElem *> elemMap = getOrCreateConsElem(**loc);
    if (hasOffset) {
      const ConsElem &elem = *elemMap[offset];
      kit->addConstraint(kind, kit->topConstant(), elem,
                         " ;  [ConsDebugTag-6]  \n");
      errs() << " ;  [ConsDebugTag-6]  ";
      getOriginalLocation(&value);
    }
    // for(std::map<unsigned, const ConsElem *>::iterator it = elemMap.begin(),
    // itEnd= elemMap.end(); it != itEnd; ++it){ kit->addConstraint(kind,
    // kit->topConstant(), *(*it).second);
    // }
  }
}

void Infoflow::setReachPtrUntainted(std::string kind, const Value &value) {
  assert(kind != "default" && "Cannot add constraints to the default kind");
  assert(kind != "implicit" && "Cannot add constraints to the implicit kind");
  const std::set<const AbstractLoc *> &locs = reachableLocsForValue(value);
  unsigned offset = 0;
  bool hasOffset = offsetForValue(value, &offset);
  for (std::set<const AbstractLoc *>::iterator loc = locs.begin(),
                                               end = locs.end();
       loc != end; ++loc) {
    std::map<unsigned, const ConsElem *> elemMap = getOrCreateConsElem(**loc);
    if (hasOffset) {
      const ConsElem &elem = *elemMap[offset];
      kit->addConstraint(kind, elem, kit->botConstant(),
                         " ;  [ConsDebugTag-7]  \n");
      errs() << " ;  [ConsDebugTag-7]  ";
      getOriginalLocation(&value);
    }
    // for(std::map<unsigned, const ConsElem *>::iterator it = elemMap.begin(),
    // itEnd= elemMap.end(); it != itEnd; ++it){ kit->addConstraint(kind,
    // *(*it).second, kit->botConstant());
    // }
  }
}

void Infoflow::setReachPtrTainted(std::string kind, const Value &value) {
  assert(kind != "default" && "Cannot add constraints to the default kind");
  assert(kind != "implicit" && "Cannot add constraints to the implicit kind");
  const std::set<const AbstractLoc *> &locs = reachableLocsForValue(value);
  unsigned offset = 0;
  bool hasOffset = offsetForValue(value, &offset);
  for (std::set<const AbstractLoc *>::iterator loc = locs.begin(),
                                               end = locs.end();
       loc != end; ++loc) {
    std::map<unsigned, const ConsElem *> elemMap = getOrCreateConsElem(**loc);
    if (hasOffset) {
      const ConsElem &elem = *elemMap[offset];
      kit->addConstraint(kind, kit->topConstant(), elem,
                         " ;  [ConsDebugTag-8]  \n");
      errs() << " ;  [ConsDebugTag-8]  ";
      getOriginalLocation(&value);
    }
    // for(std::map<unsigned, const ConsElem *>::iterator it = elemMap.begin(),
    // itEnd= elemMap.end(); it != itEnd; ++it){ kit->addConstraint(kind,
    // kit->topConstant(), *(*it).second);
    // }
  }
}

InfoflowSolution *Infoflow::leastSolution(std::set<std::string> kinds,
                                          bool implicit, bool sinks) {
  kinds.insert("default");
  if (sinks)
    kinds.insert("default-sinks");
  if (implicit)
    kinds.insert("implicit");
  if (implicit && sinks)
    kinds.insert("implicit-sinks");
  return new InfoflowSolution(*this,                     // infoflow
                              kit->leastSolution(kinds), // ConsSoln* s
                              kit->topConstant(),        // const ConsElem & top
                              kit->botConstant(),
                              false, /* default to untainted */
                              summarySinkValueConstraintMap, // valueMap
                              locConstraintMap,              // locMap
                              summarySinkVargConstraintMap); // vargMap
}

InfoflowSolution *Infoflow::greatestSolution(std::set<std::string> kinds,
                                             bool implicit) {
  kinds.insert("default");
  kinds.insert("default-sinks");
  if (implicit) {
    kinds.insert("implicit");
    kinds.insert("implicit-sinks");
  }
  return new InfoflowSolution(*this,                        // infoflow
                              kit->greatestSolution(kinds), // ConsSoln* s
                              kit->topConstant(),       // const ConsElem & top
                              kit->botConstant(), true, /* default to tainted */
                              summarySourceValueConstraintMap, // valueMap
                              locConstraintMap,                // locMap
                              summarySourceVargConstraintMap); // vargMap
}

const std::set<const AbstractLoc *> &
Infoflow::locsForValue(const Value &value) const {
  return *pti->getAbstractLocSetForValue(&value);
}

const std::set<const AbstractLoc *> &
Infoflow::reachableLocsForValue(const Value &value) const {
  return *pti->getReachableAbstractLocSetForValue(&value);
}

bool Infoflow::offsetForValue(const Value &value, unsigned *Offset) {
  if (const GetElementPtrInst *gep = dyn_cast<GetElementPtrInst>(&value)) {
    std::set<const AbstractLoc *> locs = locsForValue(value);
    if (checkGEPOperandsConstant(gep)) {
      *Offset = GEPInstCalculateOffset(gep, locs);
      return true;
    } else {
      return false;
    }
  } else if (isa<AllocaInst>(value) || isa<Argument>(value)) {
    return false;
  }
  return pti->getOffsetForValue(&value, Offset);
}

const std::set<const AbstractHandle *> &
Infoflow::HandlesForValue(const Value &value) const {
  return *pti->getAbstractHandleSetForValue(&value);
}

const std::set<const AbstractHandle *> &
Infoflow::reachableHandlesForValue(const Value &value) const {
  return *pti->getReachableAbstractHandleSetForValue(&value);
}

const std::string Infoflow::kindFromImplicitSink(bool implicit,
                                                 bool sink) const {
  if (implicit) {
    if (sink) {
      return "implicit-sinks";
    } else {
      return "implicit";
    }
  } else {
    if (sink) {
      return "default-sinks";
    } else {
      return "default";
    }
  }
}

const std::string Infoflow::stringFromValue(const Value &value) {
  raw_string_ostream *valueStream;
  std::string valueString;
  valueStream = new raw_string_ostream(valueString);
  *valueStream << value;
  valueStream->str();
  return valueString;
}

DenseMap<const Value *, const ConsElem *> &
Infoflow::getOrCreateValueConstraintMap(const ContextID context) {
  return valueConstraintMap[context];
}

const ConsElem &Infoflow::getOrCreateConsElemSummarySource(const Value &value) {
  DenseMap<const Value *, const ConsElem *>::iterator curElem =
      summarySourceValueConstraintMap.find(&value);
  if (curElem == summarySourceValueConstraintMap.end()) {
    // errs() << "Created a constraint variable...\n";
    std::string name;
    if (value.hasName()) {
      name = value.getName();
    } else {
      name = stringFromValue(value);
    }

    errs() << "In context: " << this->getCurrentContext() << " new_Var--1\n";
    const ConsElem &elem =
        kit->newVar(name + delim + getOriginalLocationConsElem(&value));
    summarySourceValueConstraintMap.insert(std::make_pair(&value, &elem));
    getOrCreateLocationValueMap();
    return elem;
  } else {
    return *(curElem->second);
  }
}

void Infoflow::putOrConstrainConsElemSummarySource(std::string kind,
                                                   const Value &value,
                                                   const ConsElem &lub) {
  // errs() << "Adding a constraint...\n";
  const ConsElem &current = getOrCreateConsElemSummarySource(value);
  kit->addConstraint(kind, lub, current, " ;  [ConsDebugTag-3]  \n");
  errs() << " ;  [ConsDebugTag-3]  ";
  getOriginalLocation(&value);
}

const ConsElem &Infoflow::getOrCreateConsElemSummarySink(const Value &value) {
  DenseMap<const Value *, const ConsElem *>::iterator curElem =
      summarySinkValueConstraintMap.find(&value);
  if (curElem == summarySinkValueConstraintMap.end()) {
    // errs() << "Created a constraint variable...\n";
    std::string varStr = value.getName();
    if (varStr.size() == 0) {
      raw_string_ostream ss(varStr);
      ss << value;
    }
    errs() << "In context: " << this->getCurrentContext() << " new_Var--2\n";
    const ConsElem &elem =
        kit->newVar(varStr + delim + getOriginalLocationConsElem(&value));
    summarySinkValueConstraintMap.insert(std::make_pair(&value, &elem));
    return elem;
  } else {
    return *(curElem->second);
  }
}

void Infoflow::putOrConstrainConsElemSummarySink(std::string kind,
                                                 const Value &value,
                                                 const ConsElem &lub) {
  // errs() << "Adding a constraint...\n";
  const ConsElem &current = getOrCreateConsElemSummarySink(value);
  value.dump();
  kit->addConstraint(kind, lub, current, " ;  [ConsDebugTag-8]  \n");
  errs() << " ;  [ConsDebugTag-8]  ";
  getOriginalLocation(&value);
}

const ConsElem &Infoflow::getOrCreateConsElem(const ContextID ctxt,
                                              const Value &value) {
  DenseMap<const Value *, const ConsElem *> &valueMap =
      getOrCreateValueConstraintMap(ctxt);
  DenseMap<const Value *, const ConsElem *>::iterator curElem =
      valueMap.find(&value);
  if (curElem == valueMap.end()) {
    std::string identifier = "";
    if (value.hasName()) {
      identifier = value.getName();
    } else {
      identifier = stringFromValue(value);
    }

    errs() << "In context: " << this->getCurrentContext() << " new_Var--3\n";
    const ConsElem &elem =
        kit->newVar(identifier + delim + getOriginalLocationConsElem(&value));
    valueMap.insert(std::make_pair(&value, &elem));

    // Hook up the summaries for non-context sensitive interface
    const ConsElem &summarySource = getOrCreateConsElemSummarySource(value);
    kit->addConstraint("default", summarySource, elem,
                       " ;  [ConsDebugTag-9]  \n");
    errs() << " ;  [ConsDebugTag-9]  ";
    getOriginalLocation(&value);
    putOrConstrainConsElemSummarySink("default", value, elem);
    return elem;
  } else {
    return *(curElem->second);
  }
}

void Infoflow::putOrConstrainConsElem(bool implicit, bool sink,
                                      const ContextID ctxt, const Value &value,
                                      const ConsElem &lub) {
  const ConsElem &current = getOrCreateConsElem(ctxt, value);
  // errs() << "putOrConstrainConsElem:";
  // current.dump(errs()); errs() << " ";
  // lub.dump(errs()); errs() << "\n";

  // if (const Argument *Arg = dyn_cast<Argument>(&value)) {
  //   Arg;
  // }
  if (const Instruction *I = dyn_cast<Instruction>(&value)) {
    errs() << predicateMap[I->getParent()];
  }

  kit->addConstraint(kindFromImplicitSink(implicit, sink), lub, current,
                     " ;  [ConsDebugTag-10]  \n");
  errs() << " ;  [ConsDebugTag-10]  ";
  getOriginalLocation(&value);
}

const ConsElem &Infoflow::getOrCreateConsElem(const Value &value) {
  return getOrCreateConsElem(this->getCurrentContext(), value);
}

void Infoflow::putOrConstrainConsElem(bool implicit, bool sink,
                                      const Value &value, const ConsElem &lub) {
  return putOrConstrainConsElem(implicit, sink, this->getCurrentContext(),
                                value, lub);
}

DenseMap<const Function *, const ConsElem *> &
Infoflow::getOrCreateVargConstraintMap(const ContextID context) {
  return vargConstraintMap[context];
}

const ConsElem &
Infoflow::getOrCreateVargConsElemSummarySource(const Function &value) {
  DenseMap<const Function *, const ConsElem *>::iterator curElem =
      summarySourceVargConstraintMap.find(&value);
  if (curElem == summarySourceVargConstraintMap.end()) {
    // errs() << "Created a constraint variable...\n";
    errs() << "In context: " << this->getCurrentContext() << " new_Var--4\n";
    std::string varStr = value.getName();
    if (varStr.size() == 0) {
      raw_string_ostream ss(varStr);
      ss << value;
    }
    const ConsElem &elem =
        kit->newVar(varStr + delim + getOriginalLocationConsElem(&value));
    summarySourceVargConstraintMap.insert(std::make_pair(&value, &elem));
    return elem;
  } else {
    return *(curElem->second);
  }
}

void Infoflow::putOrConstrainVargConsElemSummarySource(std::string kind,
                                                       const Function &value,
                                                       const ConsElem &lub) {
  // errs() << "Adding a constraint...\n";
  const ConsElem &current = getOrCreateVargConsElemSummarySource(value);
  kit->addConstraint(kind, lub, current, " ;  [ConsDebugTag-4]  \n");
  errs() << " ;  [ConsDebugTag-4]  ";
  getOriginalLocation(&value);
}

const ConsElem &
Infoflow::getOrCreateVargConsElemSummarySink(const Function &value) {
  DenseMap<const Function *, const ConsElem *>::iterator curElem =
      summarySinkVargConstraintMap.find(&value);
  if (curElem == summarySinkVargConstraintMap.end()) {
    // errs() << "Created a constraint variable...\n";
    errs() << "In context: " << this->getCurrentContext() << " new_Var--5\n";
    std::string varStr = value.getName();
    if (varStr.size() == 0) {
      raw_string_ostream ss(varStr);
      ss << value;
    }
    const ConsElem &elem =
        kit->newVar(varStr + delim + getOriginalLocationConsElem(&value));
    summarySinkVargConstraintMap.insert(std::make_pair(&value, &elem));
    return elem;
  } else {
    return *(curElem->second);
  }
}

void Infoflow::putOrConstrainVargConsElemSummarySink(std::string kind,
                                                     const Function &value,
                                                     const ConsElem &lub) {
  // errs() << "Adding a constraint...\n";
  const ConsElem &current = getOrCreateVargConsElemSummarySink(value);
  kit->addConstraint(kind, lub, current, " ;  [ConsDebugTag-11]  \n");
  errs() << " ;  [ConsDebugTag-11]  ";
  getOriginalLocation(&value);
}

const ConsElem &Infoflow::getOrCreateVargConsElem(const ContextID ctxt,
                                                  const Function &value) {
  DenseMap<const Function *, const ConsElem *> &valueMap =
      getOrCreateVargConstraintMap(ctxt);
  DenseMap<const Function *, const ConsElem *>::iterator curElem =
      valueMap.find(&value);
  if (curElem == valueMap.end()) {
    errs() << "In context: " << this->getCurrentContext() << " new_Var--6\n";
    std::string varStr = value.getName();
    if (varStr.size() == 0) {
      raw_string_ostream ss(varStr);
      ss << value;
    }
    const ConsElem &elem =
        kit->newVar(varStr + delim + getOriginalLocationConsElem(&value));
    valueMap.insert(std::make_pair(&value, &elem));

    // Hook up the summaries for non-context sensitive interface
    const ConsElem &summarySource = getOrCreateConsElemSummarySource(value);
    kit->addConstraint("default", summarySource, elem,
                       " ;  [ConsDebugTag-12]  \n");
    errs() << " ;  [ConsDebugTag-12]  ";
    getOriginalLocation(&value);
    putOrConstrainVargConsElemSummarySink("default", value, elem);

    return elem;
  } else {
    return *(curElem->second);
  }
}

void Infoflow::putOrConstrainVargConsElem(bool implicit, bool sink,
                                          const ContextID ctxt,
                                          const Function &value,
                                          const ConsElem &lub) {
  const ConsElem &current = getOrCreateVargConsElem(ctxt, value);
  kit->addConstraint(kindFromImplicitSink(implicit, sink), lub, current,
                     " ;  [ConsDebugTag-13]  \n");
  errs() << " ;  [ConsDebugTag-13]  ";
  getOriginalLocation(&value);
}

const ConsElem &Infoflow::getOrCreateVargConsElem(const Function &value) {
  return getOrCreateVargConsElem(this->getCurrentContext(), value);
}

void Infoflow::putOrConstrainVargConsElem(bool implicit, bool sink,
                                          const Function &value,
                                          const ConsElem &lub) {
  return putOrConstrainVargConsElem(implicit, sink, this->getCurrentContext(),
                                    value, lub);
}

std::map<unsigned, const ConsElem *>
Infoflow::getOrCreateConsElemTyped(const AbstractLoc &loc, unsigned numElements,
                                   const Value *v, bool force) {
  DenseMap<const AbstractLoc *, std::map<unsigned, const ConsElem *>>::iterator
      curElem = locConstraintMap.find(&loc);
  errs() << " getOrCreateConsElemTyped() for value: ";
  if (v) {
    v->dump();
  }
  if (curElem == locConstraintMap.end() || force) {
    errs() << " curElem == locConstraintMap.end() || force\n";
    std::string name = getCaption(&loc, NULL);
    errs() << name << "\n";
    loc.dump();
    if (v != NULL && !loc.isNodeCompletelyFolded()) {
      const GetElementPtrInst *gep = dyn_cast<GetElementPtrInst>(v);
      gep->dump();
      errs() << "name is: " << v->getName() << "\n";
      if (StructType *s = dyn_cast<StructType>(gep->getSourceElementType())) {
        locConstraintMap[&loc] = createConsElemFromStruct(loc, s);
        return locConstraintMap[&loc];
      } else if (numElements == 0) {
        numElements = 1;
      }
    } else if (numElements == 0) {
      numElements = 1;
    }

    errs() << "Created " << numElements
           << " constraint variable(s) for node of size ";
    errs() << loc.getSize() << "\n";
    for (unsigned offset = 0; offset < numElements; offset++) {
      errs() << "In context: " << this->getCurrentContext() << " new_Var--7\n";
      const ConsElem &elem =
          kit->newVar(name + ": elem " + std::to_string(offset) + "::" + delim +
                      getOriginalLocationConsElem(v));
      locConstraintMap[&loc].insert(std::make_pair(offset, &elem));
    }
    // locConstraintMap.insert(std::make_pair(&loc, &elem));

    return locConstraintMap[&loc];
  } else {
    errs() << " curElem != locConstraintMap.end() && !force\n";
    errs() << getCaption(&loc, NULL) << "\n";
    loc.dump();
    for (auto e : curElem->second) {
      errs() << e.first << " : ";
      e.second->dump(errs());
      errs() << " at addr [" << e.second << "]\n";
    }
    return (curElem->second);
  }
}

std::map<unsigned, const ConsElem *>
Infoflow::createConsElemFromStruct(const AbstractLoc &loc, StructType *s) {
  std::map<unsigned, const ConsElem *> elemMap;
  const DataLayout &TD = loc.getParentGraph()->getDataLayout();
  const StructLayout *SL = TD.getStructLayout(s);
  std::string name = getCaption(&loc, NULL);
  errs() << name << "\n";
  int index = 0;
  for (Type::subtype_iterator it = s->element_begin(); it != s->element_end();
       ++it, ++index) {
    unsigned start = SL->getElementOffset(index);
    unsigned end = start + TD.getTypeStoreSize(*it);
    std::string label =
        "[" + std::to_string(start) + "," + std::to_string(end) + "];";
    std::string varDesc = name + label;
    std::set<const Value *> vSet = invertedLocConstraintMap[&loc];
    for (const Value *v : vSet) {
      errs() << "This node contains value: ";
      v->dump();
      varDesc.append(getOriginalLocationConsElem(v));
    }
    errs() << "In context: " << this->getCurrentContext() << " new_Var--8\n";
    errs() << "The offset is: " << start << "\n";
    const ConsElem &elem = kit->newVar(varDesc);
    elemMap.insert(std::make_pair(start, &elem));
  }
  return elemMap;
}

std::map<unsigned, const ConsElem *>
Infoflow::getOrCreateConsElem(const AbstractLoc &loc) {
  getOrCreateLocationValueMap();
  DenseMap<const AbstractLoc *, std::map<unsigned, const ConsElem *>>::iterator
      curElem = locConstraintMap.find(&loc);
  if (curElem == locConstraintMap.end()) {
    errs() << "Creating ConsElem Map for :";
    loc.dump();

    // TODO: Is this scalable?
    //       And, is this safe?
    bool createFieldSensitiveElementMap = false;
    StructType *finalType = nullptr;

    DSGraph *G = loc.getParentGraph();
    DSGraph::node_const_iterator node = G->node_begin();
    for (; node != G->node_end(); node++) {
      DSNode::const_edge_iterator edge = node->edge_begin();
      for (; edge != node->edge_end(); edge++) {
        if (edge->second.getNode() == &loc) {
          errs() << "---\n";
          node->dump();
          DSNode::TyMapTy types{node->type_begin(), node->type_end()};
          errs() << "---++---\n";
          errs() << types[edge->first] << "\n";
          if (types[edge->first] && types[edge->first]->size() == 1) {
            Type *t = *types[edge->first]->begin();
            t->dump();
            if (t->isPointerTy()) {
              Type *sub = t->subtypes()[0];
              sub->dump();
              if (finalType) {
                if (dyn_cast<StructType>(sub) != finalType) {
                  createFieldSensitiveElementMap = false;
                }
              } else {
                if (dyn_cast<StructType>(sub) &&
                    !dyn_cast<StructType>(sub)->isOpaque()) {
                  finalType = dyn_cast<StructType>(sub);
                  createFieldSensitiveElementMap = true;
                }
              }
            }
          }
          errs() << "---\n";
        }
      }
    }

    if (createFieldSensitiveElementMap) {
      locConstraintMap[&loc] = createConsElemFromStruct(loc, finalType);
    } else {
      std::string desc = getCaption(&loc, NULL) + ": elem 0:default:||";
      // std::set<const Value *> vSet = invertedLocConstraintMap[&loc];
      // for (const Value *v : vSet) {
      //   desc.append(getOriginalLocationConsElem(v));
      // }
      errs() << "In context: " << this->getCurrentContext() << " new_Var--9\n";
      const ConsElem &elem = kit->newVar(desc);
      locConstraintMap[&loc].insert(std::make_pair(0U, &elem));
    }

    DSNode::TyMapTy child_loc_types{loc.type_begin(), loc.type_end()};
    DSNode::LinkMapTy links{loc.edge_begin(), loc.edge_end()};
    errs() << "links.size() = " << links.size() << "\n";

    for (auto l = loc.edge_begin(), end = loc.edge_end(); l != end; ++l) {
      const AbstractLoc *node = l->second.getNode();
      if (node != NULL && child_loc_types.size() > 0) {
        unsigned type_set_size = child_loc_types[l->first]->size();
        errs() << "EDGE: ";
        errs() << "[" << l->first << ": tymap-size " << type_set_size << "]: ";
        if (type_set_size == 1) {
          Type *sub_type = *child_loc_types[l->first]->begin();
          if (sub_type->isPointerTy()) {
            // If the types are overlapping, uh don't
            Type *sub = sub_type->subtypes()[0];
            sub->dump();
            if (StructType *st = dyn_cast<StructType>(sub)) {
              if (locConstraintMap.find(node) == locConstraintMap.end() &&
                  !st->isOpaque()) {
                locConstraintMap[node] = createConsElemFromStruct(*node, st);
              }
            }
          }
        }
        l->second.getNode()->dump();
      }
    }
    return locConstraintMap[&loc];
  } else {
    return (curElem->second);
  }
}

void Infoflow::putOrConstrainConsElem(bool implicit, bool sink,
                                      const AbstractLoc &loc,
                                      const ConsElem &lub) {
  std::map<unsigned, const ConsElem *> elemMap = getOrCreateConsElem(loc);
  loc.dump();
  for (std::map<unsigned, const ConsElem *>::iterator it = elemMap.begin(),
                                                      itEnd = elemMap.end();
       it != itEnd; ++it) {

    errs() << "Creating memlink: ";
    lub.dump(errs());
    errs() << ":<->:";
    it->second->dump(errs());
    errs() << it->second << "\n";

    kit->addConstraint(kindFromImplicitSink(implicit, sink), lub, *(*it).second,
                       " ;  [ConsDebugTag-14]  \n");
    errs() << " ;  [ConsDebugTag-14*]  ";
    errs() << "\n";
    // TODO add debug info
  }
}

void Infoflow::putOrConstrainConsElemStruct(bool implicit, bool sink,
                                            const AbstractLoc &loc,
                                            const ConsElem &lub,
                                            unsigned offset, const Value *v) {
  unsigned numElements = 0;
  errs() << " ===== putOrConstrainConsElemStruct =====\n";
  std::map<unsigned, const ConsElem *> elemMap =
      getOrCreateConsElemTyped(loc, numElements, v);
  if (elemMap.size() == 0)
    return;

  if (elemMap.find(offset) != elemMap.end()) {
    const ConsElem *elem = elemMap[offset];
    kit->addConstraint(kindFromImplicitSink(implicit, sink), lub, *elem,
                       " ;  [ConsDebugTag-15]  \n");
    errs() << " ;  [ConsDebugTag-15]  ";
    errs() << "\n";
    // TODO add debug info
  } else {
    for (auto &kv : elemMap) {
      kit->addConstraint(kindFromImplicitSink(implicit, sink), lub,
                         *(kv.second), " ;  [ConsDebugTag-16]  \n");
      errs() << " ;  [ConsDebugTag-16]  ";
      errs() << "\n";
      // TODO add debug info
    }
  }
  errs() << " ===== putOrConstrainConsElemStruct end =====\n";
}
void Infoflow::putOrConstrainConsElem(bool implicit, bool sink,
                                      const AbstractLoc &loc,
                                      const ConsElem &lub, unsigned offset,
                                      unsigned numElements) {

  errs() << " ===== putOrConstrainConsElem =====\n";
  std::map<unsigned, const ConsElem *> elemMap =
      getOrCreateConsElemTyped(loc, numElements);
  loc.dump();
  if (elemMap.size() == 0)
    return;

  if (loc.isNodeCompletelyFolded()) {
    for (std::map<unsigned, const ConsElem *>::iterator it = elemMap.begin(),
                                                        itEnd = elemMap.end();
         it != itEnd; ++it) {
      DEBUG(errs() << "Adding " << elemMap.size() << " elements\n");
      kit->addConstraint(kindFromImplicitSink(implicit, sink), lub,
                         *(*it).second, " ;  [ConsDebugTag-17]  \n");
      errs() << " ;  [ConsDebugTag-17]  ";
      errs() << "\n";
      // TODO add debug info
    }
  } else {
    std::set<const ConsElem *> elems =
        findRelevantConsElem(&loc, elemMap, offset);
    for (std::set<const ConsElem *>::iterator i = elems.begin();
         i != elems.end(); ++i) {
      kit->addConstraint(kindFromImplicitSink(implicit, sink), lub, *(*i),
                         " ;  [ConsDebugTag-18]  \n");
      errs() << " ;  [ConsDebugTag-18]  ";
      errs() << "\n";
      // TODO add debug info
    }
  }
  errs() << " ===== putOrConstrainConsElem end =====\n";
}

void Infoflow::generateFunctionConstraints(const Function &f) {
  for (Function::const_iterator bb = f.begin(), end = f.end(); bb != end;
       ++bb) {
    // Build constraints for basic blocks
    // The pc of the entry block will be tainted at any call sites
    generateBasicBlockConstraints(*bb, flowVector);
  }

  for (Flows::iterator flow = flowVector.begin(), end = flowVector.end();
       flow != end; ++flow) {
    if (!(*flow).isImplicit()) {
      (*flow).dump();
      constrainFlowRecord(*flow);
    }
  }
  flowVector.clear();
}

void Infoflow::generateBasicBlockConstraints(const BasicBlock &bb,
                                             Flows &flows) {
  // Build constraints for instructions
  // BranchInst *brI = nullptr;
  // if (const BasicBlock *pred = bb.getUniquePredecessor()) {
  //   // pred->back().dump();
  //   // errs() << pred->getName() << "   " << bb.getName() << " &&&&&&&& \n";
  //   std::string predicate;
  //   if (const BranchInst *brI = dyn_cast<BranchInst>(&pred->back())) {
  //     if (brI->isConditional()) {
  //       if (brI->getOperand(1)->getName() == bb.getName()) {
  //         predicate.append("(Not(");
  //         predicate.append(bb.getParent()->getName());
  //         predicate.append("_");
  //         predicate.append(brI->getOperand(0)->getName());
  //         predicate.append("==1))  =>  ");
  //       } else if (brI->getOperand(2)->getName() == bb.getName()) {
  //         predicate.append("(");
  //         predicate.append(bb.getParent()->getName());
  //         predicate.append("_");
  //         predicate.append(brI->getOperand(0)->getName());
  //         predicate.append("==1)  =>  ");
  //       }
  //       // errs() << "0: " << brI->getOperand(0)->getName() << "\n";
  //       // errs() << "1: " << brI->getOperand(1)->getName() << "\n";
  //       // errs() << "2: " << brI->getOperand(2)->getName() << "\n";
  //     }
  //   }
  //   errs() << "Predicate for [" << bb.getParent()->getName() << " -> "
  //          << bb.getName() << "] : " << predicate << "\n";
  //   predicateMap[&bb] = predicate;
  // }

  for (BasicBlock::const_iterator inst = bb.begin(), end = bb.end();
       inst != end; ++inst) {
    errs() << " +INST+\n";
    (*inst).dump();
    getInstructionFlowsInternal(*inst, true, flows, "");
  }
}

void Infoflow::constrainMemoryLocation(bool implicit, bool sink,
                                       const Value &value,
                                       const ConsElem &level) {
  const std::set<const AbstractLoc *> &locs = locsForValue(value);
  for (std::set<const AbstractLoc *>::iterator loc = locs.begin(),
                                               end = locs.end();
       loc != end; ++loc) {
    // errs() << "Adding consElem: ";
    // (*loc)->dump(); errs() << " and ";
    // level.dump(errs()); errs() << "\n";
    putOrConstrainConsElem(implicit, sink, **loc, level);
  }
}

void Infoflow::constrainReachableMemoryLocations(bool implicit, bool sink,
                                                 const Value &value,
                                                 const ConsElem &level) {
  const std::set<const AbstractLoc *> &locs = reachableLocsForValue(value);
  for (std::set<const AbstractLoc *>::iterator loc = locs.begin(),
                                               end = locs.end();
       loc != end; ++loc) {
    // errs() << "Adding consElem: ";
    // (*loc)->dump(); errs() << " and ";
    // level.dump(errs()); errs() << "\n";
    putOrConstrainConsElem(implicit, sink, **loc, level);
  }
}

const ConsElem &Infoflow::getOrCreateMemoryConsElem(const Value &value) {
  const ConsElem *join = NULL;
  const std::set<const AbstractLoc *> &locs = locsForValue(value);
  unsigned offset = 0;
  bool hasOffset = offsetForValue(value, &offset);
  // errs() << "getOrCreate: " << stringFromValue(value) << "\n";
  for (std::set<const AbstractLoc *>::iterator loc = locs.begin(),
                                               end = locs.end();
       loc != end; ++loc) {
    std::map<unsigned, const ConsElem *> elemMap = getOrCreateConsElem(**loc);
    if (hasOffset) {
      const ConsElem *elem = elemMap[offset];
      if (join == NULL) {
        join = elem;
      } else {
        join = &kit->upperBound(*join, *elem);
      }
    }
  }
  return *join;
}

const ConsElem &
Infoflow::getOrCreateReachableMemoryConsElem(const Value &value) {
  const ConsElem *join = NULL;
  const std::set<const AbstractLoc *> &locs = reachableLocsForValue(value);
  unsigned offset = 0;
  bool hasOffset = offsetForValue(value, &offset);
  // errs() << "getOrCreate2: " << stringFromValue(value) << "\n";
  for (std::set<const AbstractLoc *>::iterator loc = locs.begin(),
                                               end = locs.end();
       loc != end; ++loc) {
    std::map<unsigned, const ConsElem *> elemMap = getOrCreateConsElem(**loc);
    if (hasOffset) {
      const ConsElem *elem = elemMap[offset];
      if (join == NULL) {
        join = elem;
      } else {
        join = &kit->upperBound(*join, *elem);
      }
    }
  }
  return *join;
}

FlowRecord Infoflow::currentContextFlowRecord(bool implicit) const {
  const ContextID currentContext = this->getCurrentContext();
  return FlowRecord(implicit, currentContext, currentContext);
}

/// Helper function that computes the join of all operands to an instruction
/// and the pc, and then makes the result of the instruction at least as high.
void Infoflow::operandsAndPCtoValue(const Instruction &inst, Flows &flows) {
  FlowRecord exp = currentContextFlowRecord(false);
  FlowRecord imp = currentContextFlowRecord(true);
  // pc
  imp.addSourceValue(*inst.getParent());
  // operands

  errs() << "===== operandsAndPCtoValue() =====\n";
  for (User::const_op_iterator op = inst.op_begin(), end = inst.op_end();
       op != end; ++op) {
    Value *v = op->get();
    exp.addSourceValue(*v);
    errs() << "adding to sourceValue: ";
    v->dump();
    // errs() << "is a pointer type? "
    //        << (v->getType()->isPointerTy() ? "YES" : "NO") << "\n";
    // if (isa<CastInst>(inst) && v->getType()->isPointerTy()) {
    //   errs() << "WE ARE ADDING BITCAST\n";
    //   exp.addSourceDirectPtr(*v);
    //   exp.addSinkDirectPtr(*v);
    //   exp.addSinkDirectPtr(inst);
    // }
  }
  // to value
  exp.addSinkValue(inst);
  imp.addSinkValue(inst);

  errs() << "adding to sinkValue ";
  (inst).dump();

  flows.push_back(exp);
  flows.push_back(imp);
  errs() << "===== operandsAndPCtoValue() - end =====\n";
}

void Infoflow::constrainConditionalSuccessors(const TerminatorInst &term,
                                              FlowRecord &rec) {
  std::set<const BasicBlock *> visited;
  std::deque<const BasicBlock *> workqueue;
  const BasicBlock *bb = term.getParent();

  for (unsigned i = 0, end = term.getNumSuccessors(); i < end; ++i) {
    workqueue.push_back(term.getSuccessor(i));
  }

  PostDominatorTree &pdt =
      getAnalysis<PDTCache>().get(term.getParent()->getParent());

  while (!workqueue.empty()) {
    const BasicBlock *cur = workqueue.front();
    workqueue.pop_front();
    visited.insert(cur);

    if (!pdt.dominates(cur, bb)) {
      rec.addSinkValue(*cur);

      const TerminatorInst *t = cur->getTerminator();
      for (unsigned i = 0, end = t->getNumSuccessors(); i < end; ++i) {
        if (visited.find(cur) == visited.end()) {
          workqueue.push_back(t->getSuccessor(i));
        }
      }
    }
  }
}

Flows Infoflow::getInstructionFlows(const Instruction &inst) {
  Flows flows;
  getInstructionFlowsInternal(inst, false, flows, "");
  return flows;
}

void Infoflow::getInstructionFlowsInternal(const Instruction &inst,
                                           bool callees, Flows &flows,
                                           std::string predicate) {
  Flows temp = Flows(flows.begin(), flows.end());
  if (const AtomicCmpXchgInst *i = dyn_cast<AtomicCmpXchgInst>(&inst)) {
    Infoflow::constrainAtomicCmpXchgInst(*i, flows);
  } else if (const AtomicRMWInst *i = dyn_cast<AtomicRMWInst>(&inst)) {
    Infoflow::constrainAtomicRMWInst(*i, flows);
  } else if (const BinaryOperator *i = dyn_cast<BinaryOperator>(&inst)) {
    Infoflow::constrainBinaryOperator(*i, flows);
  } else if (const CallInst *i = dyn_cast<CallInst>(&inst)) {
    Infoflow::constrainCallInst(*i, callees, flows);
  } else if (const CmpInst *i = dyn_cast<CmpInst>(&inst)) {
    Infoflow::constrainCmpInst(*i, flows);
  } else if (const ExtractElementInst *i =
                 dyn_cast<ExtractElementInst>(&inst)) {
    Infoflow::constrainExtractElementInst(*i, flows);
  } else if (const FenceInst *i = dyn_cast<FenceInst>(&inst)) {
    Infoflow::constrainFenceInst(*i, flows);
  } else if (const GetElementPtrInst *i = dyn_cast<GetElementPtrInst>(&inst)) {
    Infoflow::constrainGetElementPtrInst(*i, flows);
  } else if (const InsertElementInst *i = dyn_cast<InsertElementInst>(&inst)) {
    Infoflow::constrainInsertElementInst(*i, flows);
  } else if (const InsertValueInst *i = dyn_cast<InsertValueInst>(&inst)) {
    Infoflow::constrainInsertValueInst(*i, flows);
  } else if (const LandingPadInst *i = dyn_cast<LandingPadInst>(&inst)) {
    Infoflow::constrainLandingPadInst(*i, flows);
  } else if (const PHINode *i = dyn_cast<PHINode>(&inst)) {
    Infoflow::constrainPHINode(*i, flows);
  } else if (const SelectInst *i = dyn_cast<SelectInst>(&inst)) {
    Infoflow::constrainSelectInst(*i, flows);
  } else if (const ShuffleVectorInst *i = dyn_cast<ShuffleVectorInst>(&inst)) {
    Infoflow::constrainShuffleVectorInst(*i, flows);
  } else if (const StoreInst *i = dyn_cast<StoreInst>(&inst)) {
    Infoflow::constrainStoreInst(*i, flows);
  } else if (const TerminatorInst *i = dyn_cast<TerminatorInst>(&inst)) {
    Infoflow::constrainTerminatorInst(*i, callees, flows);
  } else if (const UnaryInstruction *i = dyn_cast<UnaryInstruction>(&inst)) {
    Infoflow::constrainUnaryInstruction(*i, flows);
  } else {
    assert(false && "Unsupported instruction type!");
  }
  // errs() << "NEW-FLOWS\n";
  // for (size_t i = temp.size(); i != flows.size(); i++)
  // flows.at(i).dump();
  // errs() << "NEW-FLOWS-END\n\n";
}

void Infoflow::constrainUnaryInstruction(const UnaryInstruction &inst,
                                         Flows &flows) {
  if (const AllocaInst *i = dyn_cast<AllocaInst>(&inst)) {
    return Infoflow::constrainAllocaInst(*i, flows);
  } else if (const CastInst *i = dyn_cast<CastInst>(&inst)) {
    return Infoflow::constrainCastInst(*i, flows);
  } else if (const ExtractValueInst *i = dyn_cast<ExtractValueInst>(&inst)) {
    return Infoflow::constrainExtractValueInst(*i, flows);
  } else if (const LoadInst *i = dyn_cast<LoadInst>(&inst)) {
    return Infoflow::constrainLoadInst(*i, flows);
  } else if (const VAArgInst *i = dyn_cast<VAArgInst>(&inst)) {
    return Infoflow::constrainVAArgInst(*i, flows);
  } else {
    assert(false && "Unsupported unary instruction type!");
  }
}

void Infoflow::constrainTerminatorInst(const TerminatorInst &inst, bool callees,
                                       Flows &flows) {
  if (const BranchInst *i = dyn_cast<BranchInst>(&inst)) {
    return Infoflow::constrainBranchInst(*i, flows);
  } else if (const IndirectBrInst *i = dyn_cast<IndirectBrInst>(&inst)) {
    return Infoflow::constrainIndirectBrInst(*i, flows);
  } else if (const InvokeInst *i = dyn_cast<InvokeInst>(&inst)) {
    return Infoflow::constrainInvokeInst(*i, callees, flows);
  } else if (const ReturnInst *i = dyn_cast<ReturnInst>(&inst)) {
    return Infoflow::constrainReturnInst(*i, flows);
  } else if (const ResumeInst *i = dyn_cast<ResumeInst>(&inst)) {
    return Infoflow::constrainResumeInst(*i, flows);
  } else if (const SwitchInst *i = dyn_cast<SwitchInst>(&inst)) {
    return Infoflow::constrainSwitchInst(*i, flows);
  } else if (const UnreachableInst *i = dyn_cast<UnreachableInst>(&inst)) {
    return Infoflow::constraintUnreachableInst(*i, flows);
  } else {
    assert(false && "Unsupported terminator instruction type!");
  }
}

///////////////////////////////////////////////////////////////////////////////
/// Atomic memory operations
///////////////////////////////////////////////////////////////////////////////

/// AtomicRMWInst updates a memory location atomically by applying a fixed
/// operation to the current memory value and a value operand.
/// XXX pc, ptr, and operand to memory
void Infoflow::constrainAtomicRMWInst(const AtomicRMWInst &inst, Flows &flows) {
  // Flow into memory location:
  FlowRecord expToMem = currentContextFlowRecord(false);
  FlowRecord impToMem = currentContextFlowRecord(true);
  // pc
  impToMem.addSourceValue(*inst.getParent());
  // operands
  expToMem.addSourceValue(*inst.getValOperand());
  impToMem.addSourceValue(*inst.getPointerOperand());
  // current value is already accounted for
  // into memory (don't need to include current value... already accounted for)
  impToMem.addSinkDirectPtr(*inst.getPointerOperand());
  expToMem.addSinkDirectPtr(*inst.getPointerOperand());

  flows.push_back(impToMem);
  flows.push_back(expToMem);
}

/// The 'cmpxchg' instruction is used to atomically modify memory. It loads a
/// value in memory and compares it to a given value. If they are equal, it
/// stores a new value into the memory. The contents of memory at the location
/// specified by the '<pointer>' operand is read and compared to '<cmp>'; if
/// the read value is the equal, '<new>' is written. The original value at the
/// location is returned.
/// There are two flows:
/// 1) pc and cmp and new operands to memory
/// 2) pc and memory to result
void Infoflow::constrainAtomicCmpXchgInst(const AtomicCmpXchgInst &inst,
                                          Flows &flows) {
  // Flow into memory location:
  FlowRecord expToMem = currentContextFlowRecord(false);
  FlowRecord impToMem = currentContextFlowRecord(true);
  // pc and ptr
  impToMem.addSourceValue(*inst.getParent());
  impToMem.addSourceValue(*inst.getPointerOperand());
  // cmp and new operands
  expToMem.addSourceValue(*inst.getCompareOperand());
  expToMem.addSourceValue(*inst.getNewValOperand());
  // to memory
  expToMem.addSinkDirectPtr(*inst.getPointerOperand());
  impToMem.addSinkDirectPtr(*inst.getPointerOperand());

  // Flow from memory location:
  FlowRecord expFromMem = currentContextFlowRecord(false);
  FlowRecord impFromMem = currentContextFlowRecord(true);
  // pc and ptr
  impFromMem.addSourceValue(*inst.getParent());
  impFromMem.addSourceValue(*inst.getPointerOperand());
  // memory
  expFromMem.addSourceDirectPtr(*inst.getPointerOperand());
  // to result
  expFromMem.addSinkValue(inst);
  impFromMem.addSinkValue(inst);

  flows.push_back(expToMem);
  flows.push_back(impToMem);
  flows.push_back(expFromMem);
  flows.push_back(impFromMem);
}

///////////////////////////////////////////////////////////////////////////////
/// Value operations
///////////////////////////////////////////////////////////////////////////////

/// Result is boolean depending on two operand values and pc
void Infoflow::constrainCmpInst(const CmpInst &inst, Flows &flows) {
  return operandsAndPCtoValue(inst, flows);
}

/// 'select' instruction is used to choose one value based on a condition,
/// without branching. Flow from operands and pc to value.
void Infoflow::constrainSelectInst(const SelectInst &inst, Flows &flows) {
  return operandsAndPCtoValue(inst, flows);
}

/// Binary operators compute a result from two operands
/// Flow from pc and operands to result
void Infoflow::constrainBinaryOperator(const BinaryOperator &inst,
                                       Flows &flows) {
  return operandsAndPCtoValue(inst, flows);
}

/// Instructions in this category are the conversion instructions (casting)
/// which all take a single operand and a type. They perform various bit
/// conversions on the operand. Flow is from operands and pc to value.
void Infoflow::constrainCastInst(const CastInst &inst, Flows &flows) {
  return operandsAndPCtoValue(inst, flows);
}

///////////////////////////////////////////////////////////////////////////////
/// Control flow operations
///////////////////////////////////////////////////////////////////////////////

/// Value of PHI node depends on values of incoming edges (the operands)
/// and on pc.
void Infoflow::constrainPHINode(const PHINode &inst, Flows &flows) {
  return operandsAndPCtoValue(inst, flows);
}

/// Conditional branches cause a flow from the condition and pc to all
/// successors that do not post-dominate the current instruction.
void Infoflow::constrainBranchInst(const BranchInst &inst, Flows &flows) {
  // Only additional flow for conditional branch
  if (!inst.isConditional())
    return;

  FlowRecord flow = currentContextFlowRecord(true);
  // pc
  flow.addSourceValue(*inst.getParent());
  // cond
  flow.addSourceValue(*inst.getCondition());
  constrainConditionalSuccessors(inst, flow);

  flows.push_back(flow);
}

/// The 'indirectbr' instruction implements an indirect branch to a label within
/// the current function, whose address is specified by "address". The rest of
/// the arguments indicate the full set of possible destinations that the
/// address may point to. Blocks are allowed to occur multiple times in the
/// destination list, though this isn't particularly useful.
///
/// Flow from the pc and address to the pc of all successor basic blocks (that
/// aren't post-dominators)
void Infoflow::constrainIndirectBrInst(const IndirectBrInst &inst,
                                       Flows &flows) {
  FlowRecord flow = currentContextFlowRecord(true);
  // pc
  flow.addSourceValue(*inst.getParent());
  // addr
  flow.addSourceValue(*inst.getAddress());

  constrainConditionalSuccessors(inst, flow);

  flows.push_back(flow);
}

/// The 'switch' instruction is used to transfer control flow to one of several
/// different places. It is a generalization of the 'br' instruction, allowing
/// a branch to occur to one of many possible destinations.
/// The 'switch' instruction uses three parameters: an integer comparison value
/// 'value', a default 'label' destination, and an array of pairs of comparison
/// value constants and 'label's.
/// This table is searched for the given value. If the value is found, control
/// flow is transferred to the corresponding destination; otherwise, control
/// flow is transferred to the default destination.
///
/// Flow from the pc and address to the pc of all successor basic blocks (that
/// aren't post-dominators)
void Infoflow::constrainSwitchInst(const SwitchInst &inst, Flows &flows) {
  FlowRecord flow = currentContextFlowRecord(true);
  // pc
  flow.addSourceValue(*inst.getParent());
  // condition
  flow.addSourceValue(*inst.getCondition());

  constrainConditionalSuccessors(inst, flow);

  flows.push_back(flow);
}

/// 'unreachable' instruction has no defined semantics. This instruction is used
/// to inform the optimizer that a particular portion of the code is not
/// reachable. Since this instruction is never executed and has no semantics,
/// there is no flow.
void Infoflow::constraintUnreachableInst(const UnreachableInst &inst,
                                         Flows &flows) {
  // Intentionally blank
}

///////////////////////////////////////////////////////////////////////////////
/// Memory operations
///////////////////////////////////////////////////////////////////////////////

/// Compute a pointer value, depending on the pc and operands.
void Infoflow::constrainGetElementPtrInst(const GetElementPtrInst &inst,
                                          Flows &flows) {
  return operandsAndPCtoValue(inst, flows);
}

/// Store a value into a memory location. Flow from pc, pointer value, and value
/// into the memory location. Has no return value.
void Infoflow::constrainStoreInst(const StoreInst &inst, Flows &flows) {
  FlowRecord exp = currentContextFlowRecord(false);
  FlowRecord imp = currentContextFlowRecord(true);
  // pc
  imp.addSourceValue(*inst.getParent());
  // ptr
  imp.addSourceValue(*inst.getPointerOperand());
  // value
  exp.addSourceValue(*inst.getValueOperand());
  // to memory
  exp.addSinkDirectPtr(*inst.getPointerOperand());
  imp.addSinkDirectPtr(*inst.getPointerOperand());

  flows.push_back(imp);
  flows.push_back(exp);
}

/// Load the value from the memory at the pointer operand into the result.
/// Flow from pc, ptr value, and memory to result.
void Infoflow::constrainLoadInst(const LoadInst &inst, Flows &flows) {
  FlowRecord exp = currentContextFlowRecord(false);
  FlowRecord imp = currentContextFlowRecord(true);
  // pc
  imp.addSourceValue(*inst.getParent());
  // ptr
  imp.addSourceValue(*inst.getPointerOperand());
  exp.addSourceValue(*inst.getPointerOperand());
  // from memory
  exp.addSourceDirectPtr(*inst.getPointerOperand());
  // to value
  exp.addSinkValue(inst);
  imp.addSinkValue(inst);

  flows.push_back(exp);
  flows.push_back(imp);
}

/// Memory barrier instruction. Treat as noop.
void Infoflow::constrainFenceInst(const FenceInst &inst, Flows &flows) {
  // TODO: support for multi-threaded info. flow?
  assert(false && "Unsupported instruction type: fence");
}

/// 'alloca' instruction allocates memory on the stack frame of the currently
/// executing function, to be automatically released when this function returns
/// to its caller. Returns a pointer. Flow from pc and operands to value.
void Infoflow::constrainAllocaInst(const AllocaInst &inst, Flows &flows) {
  return operandsAndPCtoValue(inst, flows);
}

/// The 'va_arg' instruction is used to access arguments passed through the
/// "variable argument" area of a function call. It is used to implement the
/// va_arg macro in C. This instruction takes a va_list* value and the type
/// of the argument. It returns a value of the specified argument type and
/// increments the va_list to point to the next argument. The actual type of
/// va_list is target specific.
/// There are two flows:
/// from the pc, va_list ptr, and the va_list value(s) to the result
/// from the pc and va_list ptr to all following calls that could alias
void Infoflow::constrainVAArgInst(const VAArgInst &inst, Flows &flows) {
  FlowRecord exp = currentContextFlowRecord(false);
  FlowRecord imp = currentContextFlowRecord(true);
  // pc
  imp.addSourceValue(*inst.getParent());
  // ptr
  imp.addSourceValue(*inst.getPointerOperand());
  // from memory
  exp.addSourceDirectPtr(*inst.getPointerOperand());
  // from va_list representation
  imp.addSourceVarg(*inst.getParent()->getParent());
  // to value
  exp.addSinkValue(inst);
  imp.addSinkValue(inst);
  // to VA list
  imp.addSinkDirectPtr(*inst.getPointerOperand());
  // to va_list representation
  imp.addSinkVarg(*inst.getParent()->getParent());

  flows.push_back(exp);
  flows.push_back(imp);
}

///////////////////////////////////////////////////////////////////////////////
/// Vector operations
///////////////////////////////////////////////////////////////////////////////

/// The 'shufflevector' instruction constructs a permutation of elements from
/// two input vectors, returning a vector with the same element type as the
/// input and length that is the same as the shuffle mask.
/// Flow is from all operands and pc to result
void Infoflow::constrainShuffleVectorInst(const ShuffleVectorInst &inst,
                                          Flows &flows) {
  return operandsAndPCtoValue(inst, flows);
}

/// The 'insertelement' instruction inserts a scalar element into a vector at
/// a specified index. The result is a vector of the same type as val. Its
/// element values are those of val except at position idx, where it gets the
/// value elt. If idx exceeds the length of val, the results are undefined.
/// Flow is from pc and all operands into the result.
void Infoflow::constrainInsertElementInst(const InsertElementInst &inst,
                                          Flows &flows) {
  return operandsAndPCtoValue(inst, flows);
}

/// The 'extractelement' instruction extracts a single scalar element from a
/// vector at a specified index. Flow is from operands and pc to value.
void Infoflow::constrainExtractElementInst(const ExtractElementInst &inst,
                                           Flows &flows) {
  return operandsAndPCtoValue(inst, flows);
}

///////////////////////////////////////////////////////////////////////////////
/// Aggregate operations
///////////////////////////////////////////////////////////////////////////////

/// The 'insertvalue' instruction inserts a value into a member field in an
/// aggregate value. The first operand of an 'insertvalue' instruction is a
/// value of struct or array type. The second operand is a first-class value
/// to insert. The following operands are constant indices indicating the
/// position at which to insert the value. The result is the same as the
/// original value with the element replaced. Flow from pc and all operands
/// to result.
void Infoflow::constrainInsertValueInst(const InsertValueInst &inst,
                                        Flows &flows) {
  return operandsAndPCtoValue(inst, flows);
}

/// The 'extractvalue' instruction extracts the value of a member field from
/// an aggregate value. The first operand of an 'extractvalue' instruction is
/// a value of struct or array type. The operands are constant indices to
/// specify which value to extract. The result is the value at the position
/// in the aggregate specified by the index operands.
/// Flow from operands and pc to value. Note no need for abstract locs since
/// the aggregate is a value not a pointer.
void Infoflow::constrainExtractValueInst(const ExtractValueInst &inst,
                                         Flows &flows) {
  return operandsAndPCtoValue(inst, flows);
}

///////////////////////////////////////////////////////////////////////////////
/// Function invocation and exception handling
///////////////////////////////////////////////////////////////////////////////

void Infoflow::constrainCallInst(const CallInst &inst, bool analyzeCallees,
                                 Flows &flows) {
  // TODO: filter out and handle Intrinsics here instead of deferring
  // to the Signature mechanism...

  errs() << "WORKING ON CALLINST: ";
  inst.dump();

  if (const IntrinsicInst *intr = dyn_cast<IntrinsicInst>(&inst)) {
    return constrainIntrinsic(*intr, flows);
  } else {
    return constrainCallSite(ImmutableCallSite(&inst), analyzeCallees, flows);
  }
}

void Infoflow::constrainInvokeInst(const InvokeInst &inst, bool analyzeCallees,
                                   Flows &flows) {
  constrainCallSite(ImmutableCallSite(&inst), analyzeCallees, flows);

  // Since an invoke instruction may not return to the same program point
  // there is an additional information flow to all nodes that are not
  // post-dominators

  // 1) pc of function should be at least as high as current pc + function
  // pointer Handle flow due to the possibility of multiple return sites
  FlowRecord flow = currentContextFlowRecord(true);
  // pc
  flow.addSourceValue(*inst.getParent());
  // condition
  flow.addSourceValue(*inst.getCalledValue());
  // Gather constraints
  constrainConditionalSuccessors(inst, flow);

  flows.push_back(flow);
}

void Infoflow::constrainCallSite(const ImmutableCallSite &cs,
                                 bool analyzeCallees, Flows &flows) {
  // For all functions that could possibly be invoked by this call
  // 1) pc of function should be at least as high as current pc + function
  // pointer 2) levels of params should be as high as corresponding args Result
  // should be at least as high as the possible return values

  // Invoke the analysis on callees, if we're actually generating constraints
  // XXX HACK if we're not doing analysis on callees, we need to add any
  // signature flows here

  errs() << "working on callsite and \n\t" << (analyzeCallees ? "" : "not ")
         << "analyzing callees\n";

  if (analyzeCallees) {
    const CallInst *callinst = dyn_cast<CallInst>(cs.getInstruction());
    errs() << "The CallInst is: \n\t";
    callinst->dump();
    Function *F = callinst->getCalledFunction();

    if (F) {
      for (auto var : sinkVariables) {
        if (F->getName().size() > 0 && F->getName().equals(var.function)) {
          errs() << "Found function match: " << F->getName() << "\n";
          User::const_op_iterator op_i = cs.arg_begin();
          int arg_idx = 0;
          for (; op_i != cs.arg_end(); op_i++, arg_idx++) {
            if (var.number == -1 || var.number == arg_idx) {
              Value *value = (*op_i).get();
              std::tuple<ContextID, RLLabel, Value *, int> valueOffsetPair =
                  std::make_tuple(this->getCurrentContext(), var.label, value,
                                  var.index);
              sinkValueSet.insert(valueOffsetPair);
              errs() << "inserted: ";
              value->dump();
              errs() << "at offset: " << var.index << "\n";
            }
          }
          // return; // TODO: Could this be the ULTIMATE solution?!
        }
      }
    }

    errs() << "============ getCallResult(cs, Unit()) ============\n";
    this->getCallResult(cs, Unit());
    /*
       This part acts as a pre-filter to
       the eliminate those CallInst(s) which are
       impossible for a critical flow to exist
    */

    // bool proceed = true;
    // if (!F || !F->getName().equals("malloc")) {
    //   proceed = true;
    // } else {
    //   User::const_op_iterator arg = cs.arg_begin(), end = cs.arg_end();
    //   for (; arg != end; arg++) {
    //     // (*arg).get()->dump();
    //     // errs() << isa<Constant>((*arg).get()) << "\n";
    //     if (!isa<Constant>((*arg).get())) {
    //       proceed = true;
    //     }
    //   }
    // }

    // if (proceed) {
    //   this->getCallResult(cs, Unit());
    // }
    errs() << "============ getCallResult(cs, Unit()) - end ============\n";

  } else if (usesExternalSignature(cs)) {
    errs() << "usesExternalSignature(cs)\n";
    Flows recs = signatureRegistrar->process(this->getCurrentContext(), cs);
    flows.insert(flows.end(), recs.begin(), recs.end());
  }

  errs() << "============ invokableCode(cs) ============\n";
  std::set<std::pair<const Function *, const ContextID>> callees =
      this->invokableCode(cs);
  errs() << "============ invokableCode(cs) - end ============\n";
  // Do constraints for each callee
  errs() << "callees' size: " << callees.size() << "\n";
  for (std::set<std::pair<const Function *, const ContextID>>::iterator
           callee = callees.begin(),
           end = callees.end();
       callee != end; ++callee) {
    errs() << "%%%% function: ";
    (*callee).first->dump();
    // (*callee).second->dump();
    constrainCallee((*callee).second, *((*callee).first), cs, flows);
  }
}

void Infoflow::constrainCallee(const ContextID calleeContext,
                               const Function &callee,
                               const ImmutableCallSite &cs, Flows &flows) {
  const ContextID callerContext = this->getCurrentContext();

  // 1) pc of function should be at least
  // as high as current pc + function pointer
  FlowRecord pcFlow = FlowRecord(true, callerContext, calleeContext);
  // caller pc
  pcFlow.addSourceValue(*cs->getParent());
  // caller ptr
  pcFlow.addSourceValue(*cs.getCalledValue());
  // to callee pc
  pcFlow.addSinkValue(callee.getEntryBlock());
  flows.push_back(pcFlow);

  pcFlow.dump();

  // 2) levels of params should be as high as corresponding args
  unsigned int numArgs = cs.arg_size();
  unsigned int numParams = callee.arg_size();

  // Check arities for sanity...
  assert((!callee.isVarArg() || numArgs >= numParams) &&
         "variable arity function called with two few arguments");
  assert((callee.isVarArg() || numArgs == numParams) &&
         "function called with the wrong number of arguments");

  // The level of each non-vararg param should be
  // as high as the corresponding argument
  Function::const_arg_iterator formal = callee.arg_begin();
  for (unsigned int i = 0; i < numParams; i++, ++formal) {
    // Only create a flow when the parameter
    // being passed is not a pointer
    if (!(*formal).getType()->isPointerTy()) {
      const Value &actual = *cs.getArgument(i);
      FlowRecord argFlow = FlowRecord(false, callerContext, calleeContext);
      argFlow.addSourceValue(actual);
      argFlow.addSinkValue(*formal);
      flows.push_back(argFlow);

      argFlow.dump();
    }
  }

  // The remaining arguments provide a bound on the vararg structure
  if (numArgs > numParams) {
    // TODO: this probably should also be changed to accomodate the above
    // changes on the parameter flow of whether it's a pointer
    FlowRecord varargFlow = FlowRecord(false, callerContext, calleeContext);
    for (unsigned int i = numParams; i < numArgs; i++) {
      varargFlow.addSourceValue(*cs.getArgument(i));
    }
    varargFlow.addSinkVarg(callee);
    flows.push_back(varargFlow);
  }

  // 3) result should be at least as high as the possible return values
  for (Function::const_iterator block = callee.begin(), end = callee.end();
       block != end; ++block) {
    const TerminatorInst *terminator = block->getTerminator();
    if (terminator) {
      if (const ReturnInst *retInst = dyn_cast<ReturnInst>(terminator)) {
        FlowRecord retFlow = FlowRecord(false, calleeContext, callerContext);
        retFlow.addSourceValue(*retInst);
        retFlow.addSinkValue(*cs.getInstruction());
        flows.push_back(retFlow);
      }
    }
  }
}

void Infoflow::constrainReturnInst(const ReturnInst &inst, Flows &flows) {
  if (inst.getNumOperands() != 0) {
    operandsAndPCtoValue(inst, flows);
  }
}

// TODO: Revisit and understand this instruction.
// Something to do with exception handling.
void Infoflow::constrainLandingPadInst(const LandingPadInst &inst,
                                       Flows &flows) {
  return operandsAndPCtoValue(inst, flows);
}

// TODO: Revisit and correct
void Infoflow::constrainResumeInst(const ResumeInst &inst, Flows &flows) {
  return operandsAndPCtoValue(inst, flows);
}

///////////////////////////////////////////////////////////////////////////////
/// Intrinsics
///////////////////////////////////////////////////////////////////////////////

void constrainMemcpyOrmove(const IntrinsicInst &intr, Flows &flows) {
  FlowRecord imp = FlowRecord(true);
  FlowRecord exp = FlowRecord(false);
  // Flow from data at source pointer, length, and alignment into
  // data at destination pointer
  exp.addSourceDirectPtr(*intr.getArgOperand(1));
  imp.addSourceValue(*intr.getArgOperand(1));
  imp.addSourceValue(*intr.getArgOperand(2));
  imp.addSourceValue(*intr.getArgOperand(3));
  exp.addSinkDirectPtr(*intr.getArgOperand(0));
  imp.addSinkDirectPtr(*intr.getArgOperand(0));
  flows.push_back(exp);
  flows.push_back(imp);
}

void constrainMemset(const IntrinsicInst &intr, Flows &flows) {
  FlowRecord exp = FlowRecord(false);
  FlowRecord imp = FlowRecord(true);
  // Flow from value, length, and alignment into
  // data at destination pointer
  exp.addSourceValue(*intr.getArgOperand(1));
  imp.addSourceValue(*intr.getArgOperand(2));
  imp.addSourceValue(*intr.getArgOperand(3));
  exp.addSinkDirectPtr(*intr.getArgOperand(0));
  imp.addSinkDirectPtr(*intr.getArgOperand(0));
  flows.push_back(exp);
  flows.push_back(imp);
}

void Infoflow::constrainIntrinsic(const IntrinsicInst &intr, Flows &flows) {
  switch (intr.getIntrinsicID()) {
    // Vararg intrinsics
  case Intrinsic::vastart:
  case Intrinsic::vaend:
  case Intrinsic::vacopy:
    // These should be nops because the actual flows are taken care of as part
    // of function invocation and the va_arg instruction
    return;
    // StdLib memory intrinsics
  case Intrinsic::memcpy:
  case Intrinsic::memmove:
    return constrainMemcpyOrmove(intr, flows);
  case Intrinsic::memset:
    return constrainMemset(intr, flows);
    // StdLib math intrinsics
  case Intrinsic::sqrt:
  case Intrinsic::powi:
  case Intrinsic::sin:
  case Intrinsic::cos:
  case Intrinsic::pow:
  case Intrinsic::exp:
  case Intrinsic::log:
  case Intrinsic::fma:
    return this->operandsAndPCtoValue(intr, flows);
    // dbg
  case Intrinsic::dbg_declare:
  case Intrinsic::dbg_value:
    return;
    // Unsupported intrinsics
  default:
    DEBUG(errs() << "Unsupported intrinsic: "
                 << Intrinsic::getName(intr.getIntrinsicID()) << "\n");
  }
}

// TODO: Update this function to provide information as getCaption does
// for DSNode input.
std::string getCaption(const AbstractHandle *NH, const DSGraph *G) {
  const AbstractHandle NH2 = *NH;
  const AbstractLoc *N = NH->getNode();
  return "NH: " + getCaption(N, G);
}

std::string getCaption(const AbstractLoc *N, const DSGraph *G) {
  std::string empty;
  raw_string_ostream OS(empty);
  const Module *M = 0;

  if (!G)
    G = N->getParentGraph();

  // Get the module from ONE of the functions in the graph it is available.
  if (G && G->retnodes_begin() != G->retnodes_end())
    M = G->retnodes_begin()->first->getParent();
  if (M == 0 && G) {
    // If there is a global in the graph, we can use it to find the module.
    const DSScalarMap &SM = G->getScalarMap();
    if (SM.global_begin() != SM.global_end())
      M = (*SM.global_begin())->getParent();
  }

  if (N->isNodeCompletelyFolded())
    OS << "COLLAPSED";
  else {
    if (N->type_begin() != N->type_end())
      for (DSNode::TyMapTy::const_iterator ii = N->type_begin(),
                                           ee = N->type_end();
           ii != ee; ++ii) {
        OS << ii->first << ": ";
        if (ii->second)
          for (svset<Type *>::const_iterator ni = ii->second->begin(),
                                             ne = ii->second->end();
               ni != ne; ++ni) {
            Type *t = *ni;
            t->print(OS);
            OS << ", ";
          }
        else
          OS << "VOID";
        OS << " ";
      }
    else
      OS << "VOIDTB==TE"; // denote the difference between the VOID labels
    if (N->isArrayNode())
      OS << " array";
  }
  if (unsigned NodeType = N->getNodeFlags()) {
    OS << ": ";
    if (N->isAllocaNode())
      OS << "S";
    if (N->isHeapNode())
      OS << "H";
    if (N->isGlobalNode())
      OS << "G";
    if (N->isUnknownNode())
      OS << "U";
    if (N->isIncompleteNode())
      OS << "I";
    if (N->isCompleteNode())
      OS << "C";
    if (N->isModifiedNode())
      OS << "M";
    if (N->isReadNode())
      OS << "R";
    if (N->isExternalNode())
      OS << "E";
    if (N->isIntToPtrNode())
      OS << "P";
    if (N->isPtrToIntNode())
      OS << "2";
    if (N->isVAStartNode())
      OS << "V";

#ifndef NDEBUG
    if (NodeType & DSNode::DeadNode)
      OS << "<dead>";
#endif
  }

  // Indicate if this is a VANode for some function
  for (DSGraph::vanodes_iterator I = G->vanodes_begin(), E = G->vanodes_end();
       I != E; ++I) {
    DSNodeHandle VANode = I->second;
    if (N == VANode.getNode()) {
      OS << "(VANode for " << I->first->getName().str() << ")\n";
    }
  }

  EquivalenceClasses<const GlobalValue *> *GlobalECs = 0;
  if (G)
    GlobalECs = &G->getGlobalECs();

  for (DSNode::globals_iterator i = N->globals_begin(), e = N->globals_end();
       i != e; ++i) {
    (*i)->print(OS);

    // Figure out how many globals are equivalent to this one.
    if (GlobalECs) {
      EquivalenceClasses<const GlobalValue *>::iterator I =
          GlobalECs->findValue(*i);
      if (I != GlobalECs->end()) {
        unsigned NumMembers =
            std::distance(GlobalECs->member_begin(I), GlobalECs->member_end());
        if (NumMembers != 1)
          OS << " + " << (NumMembers - 1) << " EC";
      }
    }
  }
  return OS.str();
}

std::tuple<std::string, int, std::string>
Infoflow::parseTaintString(std::string line) {
  std::tuple<std::string, int, std::string> ret;
  // Move any extra whitespace to end
  std::string::iterator new_end =
      unique(line.begin(), line.end(),
             [](const char &x, const char &y) { return x == y and x == ' '; });

  // Remove the extra space
  line.erase(new_end, line.end());

  // Delete Trailing White space

  // Split up line
  std::vector<std::string> splits;
  char delimiter = ' ';

  size_t i = 0;
  size_t pos = line.find(delimiter);

  while (pos != std::string::npos) {
    splits.push_back(line.substr(i, pos - i));
    i = pos + 1;
    pos = line.find(delimiter, i);
  }
  splits.push_back(line.substr(i, std::min(pos, line.size()) - i + 1));

  // Create match/offset pair
  if (splits.size() == 1) {
    ret = std::make_tuple(splits[0], -1, "");
  } else if (splits.size() == 2 && isdigit(splits[1][0])) {
    ret = std::make_tuple(splits[0], std::stoi(splits[1]), "");
  } else if (splits.size() == 2) {
    ret = std::make_tuple(splits[0], -1, splits[1]);
  } else if (splits.size() == 3) {
    ret = std::make_tuple(splits[0], std::stoi(splits[1]), splits[2]);
  }

  return ret;
}

void Infoflow::readConfiguration() {
  // Read the config.json file and store it
  DEBUG(errs() << "\n[CONFIG] Start reading configuration file...\n");
  std::ifstream i("config.json");
  i >> config;
  DEBUG(errs() << config.dump(4) << "\n\n");

  // Sanity check: entry
  if (config.contains("entry")) {
    assert(config.at("entry").is_array());
    std::list<json> entries = config.at("entry");
    for (auto e : entries) {
      assert(e.is_string());
    }
  }

  // Read lattice
  assert(config.contains("lattice"));
  json lattice = config.at("lattice");
  assert(lattice.contains("levels") && lattice.contains("compartments"));
  for (json level : lattice.at("levels")) {
    std::vector<std::string> levels;
    for (std::string l : level.at("level")) {
      auto it = std::find(levels.begin(), levels.end(), l);
      assert(it == levels.end() && "Duplicate level names!");
      levels.push_back(l);
    }
    RLConstant::RLLevelMap.insert(
        std::pair<std::string, std::vector<std::string>>(level.at("name"),
                                                         levels));
  }
  for (json set : lattice.at("compartments")) {
    std::set<std::string> compartments;
    for (std::string e : set.at("set")) {
      compartments.insert(e);
    }
    RLConstant::RLCompartmentMap.insert(
        std::pair<std::string, std::set<std::string>>(set.at("name"),
                                                      compartments));
  }

  RLConstant::lockLattice();
  RLConstant::dump_lattice(errs());

  // Read source & sink
  assert(config.contains("source"));
  for (json source : config.at("source")) {
    sourceVariables.push_back(parseConfigVariable(source));
  }
  assert(config.contains("sink"));
  for (json sink : config.at("sink")) {
    sinkVariables.push_back(parseConfigVariable(sink));
  }
}

ConfigVariable Infoflow::parseConfigVariable(json v) {
  std::string fn = v.contains("function") ? v.at("function") : "";
  ConfigVariableType ty = v.at("type") == "argument"
                              ? ConfigVariableType::Argument
                              : ConfigVariableType::Variable;
  std::string name = v.contains("name") ? v.at("name") : "";
  int num = v.contains("number") ? (int)v.at("number") : 0;
  int idx = v.contains("index") ? (int)v.at("index") : -1;

  RLLevel level;
  std::unordered_map<std::string, std::string> lmap = v.at("l");
  for (auto l : lmap) {
    auto v = RLConstant::RLLevelMap.at(l.first);
    auto it = find(v.begin(), v.end(), l.second);
    assert(it != v.end());
    int index = it - v.begin();
    level.insert(std::make_pair(l.first, index));
  }
  RLCompartment compartment;
  std::unordered_map<std::string, std::list<std::string>> cmap = v.at("c");
  for (auto c : cmap) {
    std::set<std::string> set;
    for (auto e : c.second) {
      set.insert(e);
    }
    compartment.insert(std::make_pair(c.first, set));
  }
  RLLabel label(level, compartment);
  return ConfigVariable(fn, ty, name, num, idx, label);
}

int Infoflow::matchValueAndParsedString(
    const Value &value, std::string kind,
    std::tuple<RLLabel, std::string, int, std::string> match) {
  RLLabel label;
  std::string match_name;
  int t_offset;
  std::string fn_name;
  std::tie(label, match_name, t_offset, fn_name) = match;

  errs() << "Matching value with parsed string.\n";

  const Function *fn = findEnclosingFunc(&value);
  if (fn)
    errs() << "\t- found enclosing function: " << fn->getName() << "\n";
  int variable_matches = 0;
  if (fn_name.size() == 0 ||
      (fn && fn->hasName() && fn->getName() == fn_name)) {
    errs() << "\t- function matched\n";
    const MDLocalVariable *local_var;
    if (fn) {
      local_var = findVarNode(&value, fn);
    }
    if (local_var &&
        (local_var->getTag() == 257 || local_var->getTag() == 256)) {
      errs() << "\t- local_var has the name: [" << local_var->getName()
             << "]\n";
      if (local_var->getName() == match_name) {
        variable_matches |= 1;
        errs() << "\t- Found a local variable match\n\n";
      }
    }
    if (value.hasName()) {
      errs() << "\t- value has the name: [" << value.getName() << "]\n";
      if (value.getName() == match_name) {
        variable_matches |= 2;
        errs() << "\t- Found a value name match\n\n";
      }
    }
  }
  // errs() << "\t- Not a match\n\n";
  return variable_matches;
}

void Infoflow::getOrCreateLocationValueMap() {
  errs() << "getOrCreateLocationValueMap\n";
  if (invertedLocConstraintMap.size() > 0) {
    return;
  }

  for (DenseMap<const Value *, const ConsElem *>::const_iterator entry =
           summarySourceValueConstraintMap.begin();
       entry != summarySourceValueConstraintMap.end(); ++entry) {
    const Value &value = *(entry->first);
    if (!isa<BasicBlock>(value)) {
      const std::set<const AbstractLoc *> &locs = locsForValue(value);
      for (std::set<const AbstractLoc *>::const_iterator loc = locs.begin();
           loc != locs.end(); ++loc) {
        (*loc)->dump();
        DenseMap<const AbstractLoc *, std::set<const Value *>>::iterator
            setIter = invertedLocConstraintMap.find(*loc);
        invertedLocConstraintMap[*loc].insert(&value);
        // errs() << "VVVVALUE" << invertedLocConstraintMap[*loc].size() <<
        // "\n";
        value.dump();
      }
    }
  }
}

void Infoflow::removeConstraint(
    std::string kind,
    std::tuple<RLLabel, std::string, int, std::string> match) {
  getOrCreateLocationValueMap();
  errs() << "Removing values tied to " << std::get<1>(match) << "\n";
  for (DenseMap<const Value *, const ConsElem *>::const_iterator
           entry = summarySourceValueConstraintMap.begin(),
           end = summarySourceValueConstraintMap.end();
       entry != end; ++entry) {
    errs() << "=== Iteration starts on a value==="
           << "\n";

    const Value &value = *(entry->first);

    std::string s;
    llvm::raw_string_ostream *ss = new llvm::raw_string_ostream(s);
    *ss << value; // dump value info to ss
    ss->str();    // flush stream to s
    RLLabel label;
    std::string match_name;
    int t_offset;
    std::string fn_name;
    std::tie(label, match_name, t_offset, fn_name) = match;

    errs() << "The value under examination is: [" << s << "]\n"
           << "\twith offset = [" << t_offset << "], and in the function: ["
           << fn_name << "]\n\n";

    const Function *fn = findEnclosingFunc(&value);
    bool function_matches = false;
    if (fn_name.size() == 0 ||
        (fn && fn->hasName() && fn->getName() == fn_name)) {
      function_matches = true;
    }

    bool remove_reg = true, remove_mem = true;
    // if(function_matches && value.hasName() && value.getName() == match_name)
    // {
    if (matchValueAndParsedString(value, kind, match)) {
      // Removing constraints in the registers, i.e., valueConstraintMap
      if (remove_reg) {
        errs() << "Removing constraint from valueConstraintMap\n";
        for (DenseMap<ContextID,
                      DenseMap<const Value *, const ConsElem *>>::iterator
                 id = valueConstraintMap.begin(),
                 end = valueConstraintMap.end();
             id != end; ++id) {
          errs() << "Checking contextID: " << id->first << "\n";
          for (DenseMap<const Value *, const ConsElem *>::iterator
                   I = id->second.begin(),
                   E = id->second.end();
               I != E; ++I) {
            if (I->first == &value) {
              errs() << "Found the matching value in the valueConstraintMap:\n";
              errs() << "\t- value name: " << (*I->first).getName() << "\n";
              errs() << "\t- value addr: " << I->first << "\n";
              const ConsElem *thisElem = I->second;
              errs() << "Removing ConsElem addr: " << thisElem << "\n";
              kit->removeConstraintRHS(kind, *thisElem);
            }
          }
          errs() << "Checking contextID: " << id->first << " finished.\n\n";
        }
      }

      // Removing constraints in the memory, i.e., AbstractLoc set derived from
      // the value
      if (remove_mem) {
        const std::set<const AbstractLoc *> &locs = locsForValue(value);
        errs() << "--" << match_name << " : " << value
               << ", t_offset: " << t_offset << ", locs: " << locs.size()
               << "\n";
        for (std::set<const AbstractLoc *>::const_iterator loc = locs.begin(),
                                                           end = locs.end();
             loc != end; ++loc) {
          DenseMap<const AbstractLoc *,
                   std::map<unsigned, const ConsElem *>>::iterator curElem =
              locConstraintMap.find(*loc);

          std::map<unsigned, const ConsElem *> elemMap;
          if (curElem != locConstraintMap.end()) {
            elemMap = curElem->second;
          }

          if (invertedLocConstraintMap.find(*loc) !=
                  invertedLocConstraintMap.end() &&
              invertedLocConstraintMap.find(*loc)->getSecond().size() > 1) {
            // if the AbsLocation is a merged node, we conservatively kick it
            // out of the whitelisting process
            errs() << "^^^^^: "
                   << invertedLocConstraintMap.find(*loc)->getSecond().size()
                   << "\n";
            invertedLocConstraintMap.find(*loc)->getSecond().erase(&value);
            continue;
          }
          if (t_offset >= 0) {
            // Check if we are loading from a pointer.
            bool linkExists = false;
            if (curElem->first->getSize() > 0)
              linkExists = curElem->first->hasLink(0);

            if (linkExists) {
              // If the value is a pointer, use pointsto analysis to resolve the
              // target
              const DSNodeHandle nh = curElem->first->getLink(0);
              const AbstractLoc *node = nh.getNode();
              errs() << "Linked Node";
              if (node != NULL) {

                node->dump();
                DenseMap<const AbstractLoc *,
                         std::map<unsigned, const ConsElem *>>::iterator
                    childElem = locConstraintMap.find(node);

                // Instead look at this set of constraint elements
                elemMap = childElem->second;
              }
            }

            // Remove the relevant constraint
            removeConstraintFromIndex(kind, *loc, &value, elemMap, t_offset);
          } else {
            // Removes any constraints tied to that AbstractLoc
            for (std::map<unsigned, const ConsElem *>::iterator
                     it = elemMap.begin(),
                     itEnd = elemMap.end();
                 it != itEnd; ++it) {
              const ConsElem *e = it->second;

              errs() << "------"
                     << " conselem addr"
                     << " : " << e << "\n";
              kit->removeConstraintRHS(kind, *e);
            }
          }
        }
      }
    } else if (s.find(match_name) == 0) {
      errs() << "Removing constraint with a no match: ";
      const ConsElem &elem = *(entry->second);
      elem.dump(errs());
      errs() << "\n";
      kit->removeConstraintRHS(kind, elem);
    }
    errs() << "=== Iteration ends ==="
           << "\n\n\n";
  }
}

void Infoflow::constrainAllConsElem(
    std::string kind, std::map<unsigned, const ConsElem *> elemMap,
    RLLabel label) {
  errs() << "Tainting all constraint elements from value\n";
  for (std::map<unsigned, const ConsElem *>::iterator it = elemMap.begin(),
                                                      end = elemMap.end();
       it != end; ++it) {
    // it->second->dump(errs());
    if ((it->second) != NULL) {
      // TODO add debug info
      kit->addConstraint(kind, kit->constant(label), *(it->second),
                         " ;  [ConsDebugTag-22]  \n");
      errs() << " ;  [ConsDebugTag-22]  ";
      errs() << "\n";
    }
  }
}
void Infoflow::constrainAllConsElem(std::string kind,
                                    std::set<const ConsElem *> elems,
                                    RLLabel label) {
  errs() << "Tainting all constraint elements from value\n";
  for (std::set<const ConsElem *>::iterator it = elems.begin(),
                                            end = elems.end();
       it != end; ++it) {
    //(*it)->dump(errs());
    kit->addConstraint(kind, kit->constant(label), *(*it),
                       " ;  [ConsDebugTag-19]  \n");
    errs() << " ;  [ConsDebugTag-19]  ";
    errs() << "\n";
    // TODO add debug info
  }
}
void Infoflow::constrainAllConsElem(std::string kind, const Value &v,
                                    std::set<const ConsElem *> elems,
                                    RLLabel label) {
  errs() << "Tainting all constraint elements from value\n";
  if (elems.size() == 0) {
    setLabel(kind, v, label, true);
  } else {
    constrainAllConsElem(kind, elems, label);
  }
}

// Converts a value and extracts the structure type
// If there are multiple levels of pointers, traverses all the way down to root
// and returns the structure type at the root
StructType *convertValueToStructType(const Value *v) {
  Type *t = v->getType();
  StructType *st = NULL;
  while (t->isPointerTy()) {
    size_t subTypeLength = t->subtypes().size();
    if (subTypeLength == 1) {
      t = t->getContainedType(0);
      if ((st = dyn_cast<StructType>(t))) {
        st->dump();
      }
    } else {
      errs() << "Type has multiple subtypes, unclear how to proceed.\n";
    }
  }
  return st;
}

// Either find the stack allocation for this gep, or return NULL
// Returns NULL if this gep is loaded from anything other than a loadinstruction
const Value *getAllocationValue(const GetElementPtrInst *gep) {
  const Value *v = gep->getPointerOperand();

  const Value *lastValue = v;
  while (v != NULL && !isa<AllocaInst>(v)) {
    if (const LoadInst *li = dyn_cast<LoadInst>(v)) {
      errs() << " allocation intermediate: ";
      v->dump();
      v = li->getPointerOperand();
      errs() << "=>";
      v->dump();
    } else if (const GetElementPtrInst *g = dyn_cast<GetElementPtrInst>(v)) {
      errs() << " allocation intermediate: ";
      v->dump();
      v = g->getPointerOperand();
      errs() << "=>";
      v->dump();
    } else {
      lastValue = v;
      v = NULL;
    }
  }
  if (v == NULL)
    v = lastValue;
  else {
    errs() << "FINAL: ";
    v->dump();
  }

  return v;
}

AbstractLocSet Infoflow::getPointedToAbstractLocs(const Value *v) {
  AbstractLocSet locs;
  if (v == NULL)
    return locs;

  // Get Locations for stack alloc
  AbstractLocSet alloclocs = locsForValue(*v);
  errs() << "\n getPointedToAbstractLocs \n";
  // Check to see if the locs are pointers
  for (auto &l : alloclocs) {
    l->dump();
    if (l->isNodeCompletelyFolded()) {
      locs.insert(l);
    } else {
      for (auto it = l->type_begin(), end = l->type_end(); it != end; ++it) {
        unsigned link_offset = 0;
        errs() << (*it).first << " : ";
        for (auto j = it->second->begin(), setend = it->second->end();
             j != setend; ++j) {
          Type *t = *j;
          t->dump();
          Type *target = t;
          if (t->isPointerTy()) {
            if (t->subtypes().size() == 1) {
              target = t->subtypes()[0];
            }
          }
          target->dump();

          if (target != t) {
            if (l->getSize() > link_offset && l->hasLink(link_offset)) {
              locs.insert(l->getLink(link_offset).getNode());
            }
          }
        }
      }
    }
  }
  return locs;
}

void Infoflow::constrainOffsetFromIndex(
    std::string kind, const AbstractLoc *loc, const Value *v,
    std::map<unsigned, const ConsElem *> elemMap, int fieldIdx) {
// TODO enable this when fixed
#if 0
  if (StructType *st = convertValueToStructType(v)) {
    unsigned offset = findOffsetFromFieldIndex(st, (unsigned)fieldIdx, loc);
    errs() << "Index " << fieldIdx << "->" << offset << "\n";
    if (elemMap.find(offset) != elemMap.end()) {
      const ConsElem *elem = elemMap[offset];
      errs() << "Setting high constant to " << offset << ":";
      // it->second->dump(errs());
      elem->dump(errs());
      errs() << "\n";
      kit->addConstraint(kind, kit->topConstant(), *elem,
                         " ;  [ConsDebugTag-20]  \n");
      errs() << " ;  [ConsDebugTag-20]  ";
      errs() << "\n";
      // TODO add debug info
    } else {
      //TODO enable this when fixed
      // constrainAllConsElem(kind, elemMap);
    }
  } else if (const AllocaInst *al = dyn_cast<AllocaInst>(v)) {
    if (isa<ArrayType>(al->getAllocatedType())) {
      const ConsElem *elem = elemMap[fieldIdx];
      // If it is not a heap array the elemMap should have the same number of
      // elements as the array So just taint that one otherwise taint all
      // elements in the map
      if (elemMap.size() > (unsigned)fieldIdx) {
        kit->addConstraint(kind, kit->topConstant(), *elem,
                           " ;  [ConsDebugTag-21]  \n");
        errs() << " ;  [ConsDebugTag-21]  ";
        errs() << "\n";
        // TODO add debug info
      } else {
        //TODO enable this when fixed
        // constrainAllConsElem(kind, elemMap);
      }
    }
  }
#endif
}

void Infoflow::removeConstraintFromIndex(
    std::string kind, const AbstractLoc *loc, const Value *v,
    std::map<unsigned, const ConsElem *> elemMap, int fieldIdx) {
  DEBUG(errs() << "Looking for field " << fieldIdx << " in ");
  v->dump();
  if (StructType *st = convertValueToStructType(v)) {
    unsigned offset = findOffsetFromFieldIndex(st, (unsigned)fieldIdx, loc);
    std::set<const ConsElem *> elems =
        findRelevantConsElem(loc, elemMap, offset);
    for (std::set<const ConsElem *>::iterator i = elems.begin();
         i != elems.end(); ++i)
      kit->removeConstraintRHS(kind, **i);
  }
}
const ConsElem *
findConsElemAtOffset(std::map<unsigned, const ConsElem *> elemMap,
                     unsigned offset) {
  if (elemMap.find(offset) != elemMap.end()) {
    return elemMap[offset];
  }

  const ConsElem *elem = NULL;
  const ConsElem *lastElem = NULL;
  bool elemAdded = false;

  errs() << "No direct element at offset..searching\n";

  for (std::map<unsigned, const ConsElem *>::iterator it = elemMap.begin(),
                                                      itEnd = elemMap.end();
       it != itEnd; ++it) {
    if ((*it).first > offset && !elemAdded && lastElem != NULL) {
      elem = lastElem;
      elemAdded = true;
    }
    if ((*it).second != NULL) {
      lastElem = (*it).second;
    }
  }

  if (!elemAdded && lastElem != NULL) {
    elem = lastElem;
  }

  return elem;
}

} // namespace deps

#endif
