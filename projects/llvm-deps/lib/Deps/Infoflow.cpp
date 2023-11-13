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
typedef std::set<const ConsElem *> ConsElemSet;
typedef std::set<RLConstraint> ConsSet;
typedef unsigned long FlowRecordID;
typedef DenseMap<const Instruction *, std::pair<Flows, Flows>> InstFlowMap;
typedef DenseMap<FlowRecordID, ConsSet> FlowConsSetMap;
typedef DenseMap<const Instruction *, ConsSet> InstConsSetMap; 
typedef DenseMap<const Value *, const ConsElem *> ValueConsElemMap;

char Infoflow::ID = 42;
char PDTCache::ID = 0;
std::string delim = "|";
std::set<const Value *> Infoflow::tainted;
std::set<const Value *> Infoflow::whitelistPointers;
ConsElemSet Infoflow::solutionSetWLP;
bool Infoflow::WLPTR_ROUND = false;
std::set<ConfigVariable> Infoflow::sourceWhitelistPointers;
std::set<ConfigVariable> Infoflow::fullyTainted;
int Infoflow::iterationTag = 0;
InstConsSetMap Infoflow::instTaintConsSetMap;
InstConsSetMap Infoflow::instWLPConsSetMap;
ConsSet Infoflow::consSetTaint[4];
ConsSet Infoflow::consSetWLP[4];
PointsToInterface *Infoflow::pti;

DenseMap<const AbstractLoc *, std::set<const Value *>>
      Infoflow::invertedLocConstraintMap;
DenseMap<ContextID, ValueConsElemMap> Infoflow::valueConstraintMap;
DenseMap<const AbstractLoc *, std::map<unsigned, const ConsElem *>>
    Infoflow::locConstraintMap;
DenseMap<ContextID, DenseMap<const Function *, const ConsElem *>>
    Infoflow::vargConstraintMap;
ValueConsElemMap Infoflow::summarySinkValueConstraintMap;
ValueConsElemMap Infoflow::summarySourceValueConstraintMap;
DenseMap<const Value *, std::string> Infoflow::valueStringMap;
DenseMap<const Function *, const ConsElem *> Infoflow::summarySinkVargConstraintMap;
DenseMap<const Function *, const ConsElem *> Infoflow::summarySourceVargConstraintMap;

static RegisterPass<Infoflow>
    X("infoflow", "Compute information flow constraints", true, true);

static RegisterPass<PDTCache> Y("pdtcache", "Cache PostDom Analysis Results",
                                true, true);

Infoflow::Infoflow()
    : // The parameters to the template are an input and output type for the
      // user's analysis and a non-negative integer k.
      CallSensitiveAnalysisPass<Unit, Unit, 1, CallerContext>(
          ID, DepsCollapseExtContext, DepsCollapseIndContext) {
  kit = RLConstraintKit::get();
  offset_used = false;
  currentFlowRecord = 0;
}

void Infoflow::doInitialization() {
  readConfiguration();

  // Get the PointsToInterface
  // pti = &getAnalysis<PointsToInterface>();
  // CHANGE
  sourceSinkAnalysis = &getAnalysis<SourceSinkAnalysis>();
  // sourceSinkAnalysis = &getAnalysis<>();
  signatureRegistrar = new SignatureRegistrar();
  registerSignatures();
}

void Infoflow::doFinalization() {
  // delete signatureRegistrar;
  // now deleted in destructor, because we need the registrar
  // for computing propagatesTaint
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

  return Unit();
}

void insertConsVectorIntoConsSet(ConsSet &set, std::vector<RLConstraint> vec) {
  for (auto cons = vec.begin(); cons != vec.end(); cons++) {
    set.insert(*cons);
  }
}
void Infoflow::insertIntoFlowConsSetMap(const FlowRecord &flow, ConsSet &set) {
  if (Infoflow::iterationTag > 1) {
    return;
  }
  std::pair<FlowRecordID, ConsSet> KV;
  KV.first = flow.flowRecordID;
  KV.second = set;
  
  auto result = flowConsSetMap.insert(KV);
  if (result.second) {
    if (iterationTag > 1)
      errs() << "Shouldn't happen!\n";
    else 
      errs() << "Inserted!\n";
  } else {
    if (iterationTag == 1) {
      errs() << "Insert again!\n";
      auto consHere = flowConsSetMap.find(flow.flowRecordID);
      errs() << consHere->second.size() << " constraints before\n";
      consHere->second.insert(set.begin(), set.end());
      consHere = flowConsSetMap.find(flow.flowRecordID);
      errs() << consHere->second.size() << " constraints after\n";
    } else {
      errs() << "Shouldn't happen!\n";
    }
  }
}

void Infoflow::constrainFlowRecord(const FlowRecord &record) {
  ConsSet consSet;
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
      // errs() << "Value: " << getOrCreateStringFromValue(**source);
      // errs() << "\n--$ "; (*source)->dump();
      const ConsElem *elem =
          &getOrCreateConsElem(record.sourceContext(), **source, consSet);
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
          &getOrCreateVargConsElem(record.sourceContext(), **source, consSet);
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
                             *sourceElem, consSet);
    if (sinkFlow)
      putOrConstrainConsElem(implicit, true, record.sinkContext(), **sink,
                             *sinkSourceElem, consSet);
  }
  for (FlowRecord::fun_iterator sink = record.sink_varg_begin(),
                                end = record.sink_varg_end();
       sink != end; ++sink) {
    if (regFlow)
      putOrConstrainVargConsElem(implicit, false, record.sinkContext(), **sink,
                                 *sourceElem, consSet);
    if (sinkFlow)
      putOrConstrainVargConsElem(implicit, true, record.sinkContext(), **sink,
                                 *sinkSourceElem, consSet);
  }

  // To try to save constraint generation, gather memory locations as before:
  constrainSinkMemoryLocations(record, *sourceElem, *sinkSourceElem, regFlow,
                               sinkFlow, consSet);
  insertIntoFlowConsSetMap(record, consSet);
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
  //  NON-GEP values get the corresponding AbsLocs added to the Source/SinkSet
  //  GEP instructions are constrained directly based on offset
  //  TO DISABLE OFFSET:
  //  addDirectValuesToSources(directSource, Sources, SourceLocs, false);
  //  addDirectValuesToSources(directSink, sinkSources, sinkSourceLocs, false);
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
      DEBUG(errs() << "DSOURCEGEP INSTRUCTION "
                   << getOrCreateStringFromValue(**it) << "\n";);
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
    DEBUG(errs() << "REACHABLE SOURCE: "; (*source)->dump(););
    if (!DepsDropAtSink || !sourceSinkAnalysis->reachPtrIsSink(**source)) {
      reachSource.insert(*source);
    } else {
      reachSink.insert(*source);
    }
  }

  // Sort the Sources/Sinks handling the GEPinstructions separately
  //  NON-GEP values get the corresponding AbsLocs added to the Source/SinkSet
  //  GEP instructions are constrained directly based on offset
  //  TO DISABLE OFFSET:
  //  addReachValuesToSources(reachSource, Sources, SourceLocs, false);
  //  addReachValuesToSources(reachSink, sinkSources, sinkSourceLocs, false);
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
      DEBUG(errs() << "RSOURCEGEP INSTRUCTION "
                   << getOrCreateStringFromValue(**it) << "\n";);
      processGetElementPtrInstSource(*it, elems, locs, implicit);
    } else {
      DEBUG(for (auto &l : locs) { l->dump(); });
      locations.insert(locs.begin(), locs.end());
    }
  }
}

void Infoflow::constrainSinkMemoryLocations(const FlowRecord &record,
                                            const ConsElem &source,
                                            const ConsElem &sinkSource,
                                            bool regFlow, bool sinkFlow, ConsSet &consSet) {
  bool implicit = record.isImplicit();
  
  std::set<const AbstractLoc *> SinkLocs;
  constrainDirectSinkLocations(record, SinkLocs, source, sinkSource, regFlow,
                               sinkFlow, consSet);
  constrainReachSinkLocations(record, SinkLocs, source, sinkSource, regFlow,
                              sinkFlow, consSet);

  // And add constraints for each of the sink memory locations
  for (std::set<const AbstractLoc *>::iterator loc = SinkLocs.begin(),
                                               end = SinkLocs.end();
       loc != end; ++loc) {
    if (regFlow)
      putOrConstrainConsElem(implicit, false, **loc, source, consSet);
    if (sinkFlow)
      putOrConstrainConsElem(implicit, true, **loc, sinkSource, consSet);
  }
}

void Infoflow::constrainDirectSinkLocations(const FlowRecord &record,
                                            AbsLocSet &SinkLocs,
                                            const ConsElem &source,
                                            const ConsElem &sinkSource,
                                            bool regFlow, bool sinkFlow, ConsSet &consSet) {
  std::vector<RLConstraint> cons;
  bool implicit = record.isImplicit();
  for (FlowRecord::value_iterator sink = record.sink_directptr_begin(),
                                  end = record.sink_directptr_end();
       sink != end; ++sink) {
    const std::set<const AbstractLoc *> &locs = locsForValue(**sink);
    if (isa<GetElementPtrInst>(*sink) && offset_used) {
      DEBUG(errs() << "DSINKGEP INSTRUCTION "
                   << getOrCreateStringFromValue(**sink) << "\n";);
      if (regFlow)
        processGetElementPtrInstSink(*sink, implicit, false, source, locs, consSet);
      if (sinkFlow)
        processGetElementPtrInstSink(*sink, implicit, true, sinkSource, locs, consSet);
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
                                           bool regFlow, bool sinkFlow, ConsSet &consSet) {
  bool implicit = record.isImplicit();

  for (FlowRecord::value_iterator sink = record.sink_reachptr_begin(),
                                  end = record.sink_reachptr_end();
       sink != end; ++sink) {
    DEBUG(errs() << "RSINKGEP INSTRUCTION "
                 << getOrCreateStringFromValue(**sink) << "\n";);
    const std::set<const AbstractLoc *> &locs = reachableLocsForValue(**sink);
    if (isa<GetElementPtrInst>(*sink) && offset_used) {
      if (regFlow)
        processGetElementPtrInstSink(*sink, implicit, false, source, locs, consSet);
      if (sinkFlow)
        processGetElementPtrInstSink(*sink, implicit, true, sinkSource, locs, consSet);
    }
    SinkLocs.insert(locs.begin(), locs.end());
    for (auto &l : locs) {
      DSNode::LinkMapTy childNodeHandles{l->edge_begin(), l->edge_end()};
      for (auto &handlekv : childNodeHandles) {
        const AbstractLoc *child = handlekv.second.getNode();
        if (child != NULL) {
          SinkLocs.insert(child);
          DEBUG(errs() << "Added child elem: "; child->dump(););
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
    std::set<const AbstractLoc *> locs, ConsSet &consSet) {
  DEBUG(errs() << "[Sink:] " << getOrCreateStringFromValue(*value) << "\n";);
  const GetElementPtrInst *gep = dyn_cast<GetElementPtrInst>(value);
  Type *T = cast<PointerType>(gep->getPointerOperandType())->getElementType();
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
      putOrConstrainConsElem(implicit, sink, **I, lub, consSet);
    }
    return;
  }

  // Otherwise constrain the elements that are at the location of the operands
  unsigned offset = GEPInstCalculateOffset(gep, locs);
  bool structTy = false;
  const StructType *s = dyn_cast<StructType>(gep->getSourceElementType());
  if (s != NULL) {
    DEBUG(errs() << "::IS STRUCT TY::";);
    structTy = true;
  }
  const Value *allocValue = getAllocationValue(gep);
  AbstractLocSet structPtrLocs = getPointedToAbstractLocs(allocValue);

  AbstractLocSet toConstrain{locs.begin(), locs.end()};
  toConstrain.insert(structPtrLocs.begin(), structPtrLocs.end());
  for (std::set<const AbstractLoc *>::iterator loc = toConstrain.begin(),
                                               end = toConstrain.end();
       loc != end; ++loc) {
    if (*loc == NULL) {
      ++loc;
    }
    DEBUG(errs() << "Tainting at offset: " << offset << "\n";);

    // Put additional Copy elements here and reverse the order of the copy
    if (structTy)
      putOrConstrainConsElemStruct(implicit, sink, **loc, lub, offset, consSet, value);

    putOrConstrainConsElem(implicit, sink, **loc, lub, offset, numElements, consSet);
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
  DEBUG(errs() << "[Source:] " << getOrCreateStringFromValue(*source) << "\n";);
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
  unsigned offset = GEPInstCalculateOffset(gep, locs);
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
      DEBUG(errs() << "CONSTRAINING: "; (*i)->dump(errs());
            errs() << *i << "\n";);
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
  DEBUG(errs() << "Trying to find element at offset " << offset << "\n";);

  if (node->isNodeCompletelyFolded()) {
    // All elements are relevant
    for (std::map<unsigned, const ConsElem *>::iterator it = elemMap.begin();
         it != elemMap.end(); ++it) {
      elements.insert(it->second);
    }
  } else if (elemMap.find(offset) != elemMap.end()) {
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
  if (isa<ArrayType>(T) && gep->getNumIndices() == 2) {
    DEBUG(errs() << "ArrayType:";);
    offset = GEPInstCalculateArrayOffset(gep);
  } else if (gep->getNumIndices() == 2) {
    DEBUG(errs() << "StructType:";);
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

unsigned Infoflow::GEPInstCalculateArrayOffset(const GetElementPtrInst *gep) {
  unsigned numElements = GEPInstCalculateNumberElements(gep);

  // *(ptr + i) = 4; ptr is operand 1 and i is operand 2
  ConstantInt *ptr = dyn_cast<ConstantInt>(gep->getOperand(1));
  ConstantInt *ptrOffset = dyn_cast<ConstantInt>(gep->getOperand(2));
  uint64_t ptrIdx = ptr->getZExtValue();
  uint64_t ptrOff = ptrOffset->getZExtValue();
  unsigned offset = ptrIdx * numElements + ptrOff;
  return offset;
}

unsigned
Infoflow::GEPInstCalculateStructOffset(const GetElementPtrInst *gep,
                                       std::set<const AbstractLoc *> locs) {
  // *(ptr + i) = 4; ptr is operand 1 and i is operand 2
  ConstantInt *ptrOffset = dyn_cast<ConstantInt>(gep->getOperand(2));
  uint64_t ptrOff = ptrOffset->getZExtValue();
  unsigned offset = ptrOff;
  StructType *structType = dyn_cast<StructType>(gep->getSourceElementType());

  if (locs.size() > 1) { // if multiple DSNodes just return the offset
    return offset;
  }

  // if the offset is non zero, get offset by adding together largest blocks
  // until the position in the structure is met.
  // Treat offset received from previous line as the index of the actual type in
  // a structure

  offset = findOffsetFromFieldIndex(structType, offset, *(locs.begin()));

  return offset;
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
  const Instruction *inst = cs.getInstruction();
  Flows taintFlows;
  Flows WLPFlows;
  std::pair<Flows, Flows> recs = signatureRegistrar->process(this->getCurrentContext(), cs);
  Flows combinedFlows;
  for (auto flow = recs.first.begin(); flow != recs.first.end(); flow++) {
    (*flow).flowRecordID = currentFlowRecord;
    currentFlowRecord++;
    combinedFlows.push_back(*flow);
  }
  for (auto flow = recs.second.begin(); flow != recs.second.end(); flow++) {
    auto exist = std::find(combinedFlows.begin(), combinedFlows.end(), (*flow));
    if (exist != combinedFlows.end()) {
      (*flow).flowRecordID = (*exist).flowRecordID;
      continue;
    }
    (*flow).flowRecordID = currentFlowRecord;
    currentFlowRecord++;
    combinedFlows.push_back(*flow);
  }
  taintFlows.insert(taintFlows.end(), recs.first.begin(), recs.first.end());
  WLPFlows.insert(WLPFlows.end(), recs.second.begin(), recs.second.end());
  insertIntoInstFlowMap(inst, taintFlows, WLPFlows);
  flowVector.insert(flowVector.end(), combinedFlows.begin(), combinedFlows.end());
  
  if(Infoflow::iterationTag > 1 && !WLPTR_ROUND) {
    auto cons = Infoflow::instTaintConsSetMap.find(inst);
    for (auto con : (*cons).second) {
      if (!con.isImplicit() && Infoflow::solutionSetWLP.find(con.lhs()) != Infoflow::solutionSetWLP.end()) {
        if (auto var = dyn_cast<RLConsVar>(con.rhs())) {
          if (var->getDesc().find("*SummSink*") == std::string::npos) {
            pushToFullyTainted(*inst);
          }
        }
      }
    }
  }

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
	
bool InfoflowSolution::isTainted(const ConsElem &elem) {
  return !(soln->subst(elem) == botConstant);
}

const Function *findEnclosingFunc(const Value *V) {
  if (const Argument *Arg = dyn_cast<Argument>(V)) {
    return Arg->getParent();
  }
  if (const Instruction *I = dyn_cast<Instruction>(V)) {
    return I->getParent()->getParent();
  }
  return NULL;
}

const MDLocation *findVar(const Value *V, const Function *F) {
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

const MDLocalVariable *findVarNode(const Value *V, const Function *F) {
  StringRef vName;
  if (V->hasName()) {
    vName = V->getName();
  }
  DEBUG(errs() << "\t- looking for value [" << vName << "] in function ["
               << F->getName() << "]\n";);
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

void InfoflowSolution::getOriginalLocation(const Value *V) {
  // Global var?
  if (const GlobalVariable *glb = dyn_cast<GlobalVariable>(V)) {
    DEBUG(errs() << "Global var: " << glb->getName(););
    return;
  }

  const MDLocation *Loc;
  // Instruction?
  if (const Instruction *I = dyn_cast<Instruction>(V)) {
    Loc = I->getDebugLoc();
  } else { // try to find the uses of the value
    const Function *F = findEnclosingFunc(V);
    if (!F) {
      DEBUG(errs() << "Unknown location";);
      return;
    }

    // check function parameters
    for (Function::ArgumentListType::const_iterator ite = F->arg_begin(),
                                                    end = F->arg_end();
         ite != end; ++ite) {
      if (&*ite == V) {
        DEBUG(errs() << "Function " << F->getName()
                     << " Arg: " << ite->getName(););
        return;
      }
    }

    // search in all instructions
    Loc = findVar(V, F);
  }

  if (!Loc) {
    DEBUG(errs() << "Unknown location for " << V->getName(););
    return;
  }
  DEBUG(errs() << Loc->getFilename() << " line "
               << std::to_string(Loc->getLine()););
  return;
}

void InfoflowSolution::allTainted() {
  for (DenseMap<const Value *, const ConsElem *>::const_iterator
           entry = valueMap.begin(),
           end = valueMap.end();
       entry != end; ++entry) {
    const Value &v = *(entry->first);
    if (isTainted(v)) {
      DEBUG(errs() << "Tainted! ";);
      // v.dump();
      getOriginalLocation(&v);
      DEBUG(errs() << "\n";);
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

std::set<const ConsElem *> InfoflowSolution::getAllWLPConsElem() {
  std::set<const ConsElem *> ret;
  for (auto con : Infoflow::consSetWLP[0]) {
    const ConsElem *lhs = con.lhs();
    const ConsElem *rhs = con.rhs();
    if (isTainted(*lhs)) {
      ret.insert(lhs);
    }
    if (isTainted(*rhs)) {
      ret.insert(rhs);
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
        if (!(soln->subst(elem) == botConstant)) {
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
        if (!(soln->subst(elem) == botConstant)) {
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
    return (!(soln->subst(elem) == botConstant));
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
                        bool gte, std::string meta) {
  assert(kind != "default" && "Cannot add constraints to the default kind");
  assert(kind != "implicit" && "Cannot add constraints to the implicit kind");

  if (gte)
    putOrConstrainConsElemSummarySource(kind, value, kit->constant(label),
                                        meta);
  else {
    const ConsElem &current = getOrCreateConsElemSummarySink(value);
    kit->addConstraint(kind, current, kit->constant(label),
                       " ;  [ConsDebugTag-1] " + meta);
  }
}

void Infoflow::setUntainted(std::string kind, const Value &value) {
  assert(kind != "default" && "Cannot add constraints to the default kind");
  assert(kind != "implicit" && "Cannot add constraints to the implicit kind");
  const ConsElem &current = getOrCreateConsElemSummarySink(value);
  kit->addConstraint(kind, current, kit->botConstant());
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
  kit->addConstraint(kind, current, kit->botConstant());
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
      kit->addConstraint(kind, elem, kit->botConstant());
    }
    // for(std::map<unsigned, const ConsElem *>::iterator it = elemMap.begin(),
    // itEnd= elemMap.end(); it != itEnd; ++it){ kit->addConstraint(kind,
    // *(*it).second, kit->lowConstant());
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
      kit->addConstraint(kind, kit->topConstant(), elem);
    }
    // for(std::map<unsigned, const ConsElem *>::iterator it = elemMap.begin(),
    // itEnd= elemMap.end(); it != itEnd; ++it){ kit->addConstraint(kind,
    // kit->highConstant(), *(*it).second);
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
      kit->addConstraint(kind, elem, kit->botConstant());
    }
    // for(std::map<unsigned, const ConsElem *>::iterator it = elemMap.begin(),
    // itEnd= elemMap.end(); it != itEnd; ++it){ kit->addConstraint(kind,
    // *(*it).second, kit->lowConstant());
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
      kit->addConstraint(kind, kit->topConstant(), elem);
    }
    // for(std::map<unsigned, const ConsElem *>::iterator it = elemMap.begin(),
    // itEnd= elemMap.end(); it != itEnd; ++it){ kit->addConstraint(kind,
    // kit->highConstant(), *(*it).second);
    // }
  }
}

InfoflowSolution *Infoflow::leastSolution(std::set<std::string> kinds,
                                          bool implicit, bool sinks) {
  if (WLPTR_ROUND) {
    kinds.insert("default-WLP");
  } else {
    kinds.insert("default-taint");
    if (sinks)
      kinds.insert("default-sinks-taint");
    if (implicit)
      kinds.insert("implicit-taint");
    if (implicit && sinks)
      kinds.insert("implicit-sinks-taint");
  }
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

void Infoflow::clearSolutions() {
  kit->clearSolutions();
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

const std::string Infoflow::getOrCreateStringFromValue(const Value &value,
                                                       bool withParent) {
  if (valueStringMap.find(&value) != valueStringMap.end() && withParent) {
    return valueStringMap[&value];
  }
  std::string valueString = "";
  if (auto I = dyn_cast<Instruction>(&value)) {
    if (I->hasName()) {
      if (withParent) {
        valueString = I->getParent()->getParent()->getName().str() + ":" +
                      I->getName().str();
      } else {
        valueString = I->getName();
      }
    } else {
      raw_string_ostream O(valueString);
      I->print(O);
    }
  } else if (auto A = dyn_cast<Argument>(&value)) {
    if (A->hasName()) {
      if (withParent) {
        valueString =
            A->getParent()->getName().str() + ":" + A->getName().str();
      } else {
        valueString = A->getName();
      }
    } else {
      raw_string_ostream O(valueString);
      A->print(O);
    }
  } else if (auto BB = dyn_cast<BasicBlock>(&value)) {
    if (withParent) {
      valueString =
          BB->getParent()->getName().str() + ":" + BB->getName().str();
    } else {
      valueString = BB->getName();
    }
  } else {
    if (isa<GlobalValue>(value)) {
      valueString = "GLOBAL:";
    }
    if (value.hasName()) {
      valueString += value.getName();
    } else {
      raw_string_ostream O(valueString);
      value.print(O);
    }
  }
  valueStringMap.insert(std::make_pair(&value, valueString));
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
      name = getOrCreateStringFromValue(value);
    }
    const ConsElem &elem = kit->newVar(name);
    summarySourceValueConstraintMap.insert(std::make_pair(&value, &elem));
    return elem;
  } else {
    return *(curElem->second);
  }
}

void Infoflow::putOrConstrainConsElemSummarySource(std::string kind,
                                                   const Value &value,
                                                   const ConsElem &lub,
                                                   std::string meta) {
  // errs() << "Adding a constraint...\n";
  const ConsElem &current = getOrCreateConsElemSummarySource(value);
  kit->addConstraint(kind, lub, current, " ;  [ConsDebugTag-3] " + meta);
}

const ConsElem &Infoflow::getOrCreateConsElemSummarySink(const Value &value) {
  DenseMap<const Value *, const ConsElem *>::iterator curElem =
      summarySinkValueConstraintMap.find(&value);
  if (curElem == summarySinkValueConstraintMap.end()) {
    // errs() << "Created a constraint variable...\n";
    const ConsElem &elem = kit->newVar(value.getName().str() + delim +
                    "*SummSink*");
    summarySinkValueConstraintMap.insert(std::make_pair(&value, &elem));
    return elem;
  } else {
    return *(curElem->second);
  }
}

void Infoflow::putOrConstrainConsElemSummarySink(std::string kind,
                                                 const Value &value,
                                                 const ConsElem &lub, ConsSet &consSet) {
  // errs() << "Adding a constraint...\n";
  const ConsElem &current = getOrCreateConsElemSummarySink(value);
  std::vector<RLConstraint> cons = kit->addConstraint(kind, lub, current);
  insertConsVectorIntoConsSet(consSet, cons);
}

const ConsElem &Infoflow::getOrCreateConsElem(const ContextID ctxt,
                                              const Value &value, ConsSet &consSet) {
  DenseMap<const Value *, const ConsElem *> &valueMap =
      getOrCreateValueConstraintMap(ctxt);
  DenseMap<const Value *, const ConsElem *>::iterator curElem =
      valueMap.find(&value);
  if (curElem == valueMap.end()) {
    std::string identifier = "";
    if (value.hasName()) {
      identifier = value.getName();
    } else {
      identifier = getOrCreateStringFromValue(value);
    }

    const ConsElem &elem = kit->newVar(identifier);
    valueMap.insert(std::make_pair(&value, &elem));

    // Hook up the summaries for non-context sensitive interface
    const ConsElem &summarySource = getOrCreateConsElemSummarySource(value);
    std::vector<RLConstraint> cons = kit->addConstraint("default", summarySource, elem);
    insertConsVectorIntoConsSet(consSet, cons);
    putOrConstrainConsElemSummarySink("default", value, elem, consSet);
    return elem;
  } else {
    return *(curElem->second);
  }
}

void Infoflow::putOrConstrainConsElem(bool implicit, bool sink,
                                      const ContextID ctxt, const Value &value,
                                      const ConsElem &lub, ConsSet &consSet) {
  const ConsElem &current = getOrCreateConsElem(ctxt, value, consSet);
  // errs() << "putOrConstrainConsElem:";
  // current.dump(errs()); errs() << " ";
  // lub.dump(errs()); errs() << "\n";
  std::vector<RLConstraint> cons = kit->addConstraint(kindFromImplicitSink(implicit, sink), lub, current);
  insertConsVectorIntoConsSet(consSet, cons);
}

const ConsElem &Infoflow::getOrCreateConsElem(const Value &value, ConsSet &consSet) {
  return getOrCreateConsElem(this->getCurrentContext(), value, consSet);
}

void Infoflow::putOrConstrainConsElem(bool implicit, bool sink,
                                      const Value &value, const ConsElem &lub, ConsSet &consSet) {
  return putOrConstrainConsElem(implicit, sink, this->getCurrentContext(),
                                value, lub, consSet);
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
    const ConsElem &elem = kit->newVar(value.getName());
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
  kit->addConstraint(kind, lub, current);
}

const ConsElem &
Infoflow::getOrCreateVargConsElemSummarySink(const Function &value) {
  DenseMap<const Function *, const ConsElem *>::iterator curElem =
      summarySinkVargConstraintMap.find(&value);
  if (curElem == summarySinkVargConstraintMap.end()) {
    // errs() << "Created a constraint variable...\n";
    const ConsElem &elem = kit->newVar(value.getName());
    summarySinkVargConstraintMap.insert(std::make_pair(&value, &elem));
    return elem;
  } else {
    return *(curElem->second);
  }
}

void Infoflow::putOrConstrainVargConsElemSummarySink(std::string kind,
                                                     const Function &value,
                                                     const ConsElem &lub, ConsSet &consSet) {
  // errs() << "Adding a constraint...\n";
  const ConsElem &current = getOrCreateVargConsElemSummarySink(value);
  std::vector<RLConstraint> cons = kit->addConstraint(kind, lub, current);
  insertConsVectorIntoConsSet(consSet, cons);
}

const ConsElem &Infoflow::getOrCreateVargConsElem(const ContextID ctxt,
                                                  const Function &value, ConsSet &consSet) {
  DenseMap<const Function *, const ConsElem *> &valueMap =
      getOrCreateVargConstraintMap(ctxt);
  DenseMap<const Function *, const ConsElem *>::iterator curElem =
      valueMap.find(&value);
  if (curElem == valueMap.end()) {
    const ConsElem &elem = kit->newVar(value.getName());
    valueMap.insert(std::make_pair(&value, &elem));

    // Hook up the summaries for non-context sensitive interface
    const ConsElem &summarySource = getOrCreateConsElemSummarySource(value);
    std::vector<RLConstraint> cons = kit->addConstraint("default", summarySource, elem);
    insertConsVectorIntoConsSet(consSet, cons);
    putOrConstrainVargConsElemSummarySink("default", value, elem, consSet);

    return elem;
  } else {
    return *(curElem->second);
  }
}

void Infoflow::putOrConstrainVargConsElem(bool implicit, bool sink,
                                          const ContextID ctxt,
                                          const Function &value,
                                          const ConsElem &lub, ConsSet &consSet) {
  const ConsElem &current = getOrCreateVargConsElem(ctxt, value, consSet);
  std::vector<RLConstraint> cons = kit->addConstraint(kindFromImplicitSink(implicit, sink), lub, current);
  insertConsVectorIntoConsSet(consSet, cons);
}

const ConsElem &Infoflow::getOrCreateVargConsElem(const Function &value, ConsSet &consSet) {
  return getOrCreateVargConsElem(this->getCurrentContext(), value, consSet);
}

void Infoflow::putOrConstrainVargConsElem(bool implicit, bool sink,
                                          const Function &value,
                                          const ConsElem &lub, ConsSet &consSet) {
  return putOrConstrainVargConsElem(implicit, sink, this->getCurrentContext(),
                                    value, lub, consSet);
}

std::map<unsigned, const ConsElem *>
Infoflow::getOrCreateConsElemTyped(const AbstractLoc &loc, unsigned numElements,
                                   const Value *v, bool force) {
  DenseMap<const AbstractLoc *, std::map<unsigned, const ConsElem *>>::iterator
      curElem = locConstraintMap.find(&loc);
  if (curElem == locConstraintMap.end() || force) {
    std::string name = getCaption(&loc, NULL);

    if (v != NULL && !loc.isNodeCompletelyFolded()) {
      const GetElementPtrInst *gep = dyn_cast<GetElementPtrInst>(v);
      if (StructType *s = dyn_cast<StructType>(gep->getSourceElementType())) {
        locConstraintMap[&loc] = createConsElemFromStruct(loc, s);
        return locConstraintMap[&loc];
      } else if (numElements == 0) {
        numElements = 1;
      }
    } else if (numElements == 0) {
      numElements = 1;
    }

    DEBUG(errs() << "Created " << numElements
                 << " constraint variable(s) for node of size ";
          errs() << loc.getSize() << "\n";);
    for (unsigned offset = 0; offset < numElements; offset++) {
      const ConsElem &elem =
          kit->newVar(name + ": elem " + std::to_string(offset) + "::");
      locConstraintMap[&loc].insert(std::make_pair(offset, &elem));
    }
    // locConstraintMap.insert(std::make_pair(&loc, &elem));

    return locConstraintMap[&loc];
  } else {
    return (curElem->second);
  }
}

std::map<unsigned, const ConsElem *>
Infoflow::createConsElemFromStruct(const AbstractLoc &loc, StructType *s) {
  std::map<unsigned, const ConsElem *> elemMap;
  const DataLayout &TD = loc.getParentGraph()->getDataLayout();
  const StructLayout *SL = TD.getStructLayout(s);
  std::string name = getCaption(&loc, NULL);
  int index = 0;
  for (Type::subtype_iterator it = s->element_begin(); it != s->element_end();
       ++it, ++index) {
    unsigned start = SL->getElementOffset(index);
    unsigned end = start + TD.getTypeStoreSize(*it);
    std::string label =
        "[" + std::to_string(start) + "," + std::to_string(end) + "]";
    const ConsElem &elem = kit->newVar(name + label);
    elemMap.insert(std::make_pair(start, &elem));
  }
  return elemMap;
}

std::map<unsigned, const ConsElem *>
Infoflow::getOrCreateConsElem(const AbstractLoc &loc) {
  DenseMap<const AbstractLoc *, std::map<unsigned, const ConsElem *>>::iterator
      curElem = locConstraintMap.find(&loc);
  if (curElem == locConstraintMap.end()) {
    DEBUG(errs() << "Creating ConsElem Map for :"; loc.dump();
          loc.dumpParentGraph(););
    std::string name = getCaption(&loc, NULL);
    unsigned size = 1;
    // errs() << "Created " << size << " constraint variable(s)...\n";
    for (unsigned offset = 0; offset < size; offset++) {
      const ConsElem &elem =
          kit->newVar(name + ": elem " + std::to_string(offset) + ":default:");
      locConstraintMap[&loc].insert(std::make_pair(offset, &elem));

      DEBUG(errs() << "CREATED ConsElem at: " << &elem << " text: " << name
                   << ": elem " << std::to_string(offset) << ":default:\n";);
    }

    DSNode::TyMapTy child_loc_types{loc.type_begin(), loc.type_end()};
    DSNode::LinkMapTy links{loc.edge_begin(), loc.edge_end()};

    for (auto l = loc.edge_begin(), end = loc.edge_end(); l != end; ++l) {
      const AbstractLoc *node = l->second.getNode();
      if (node != NULL && child_loc_types.size() > 0) {
        unsigned type_set_size = child_loc_types[l->first]->size();
        DEBUG(errs() << "EDGE: "; errs() << "[" << l->first << ": tymap-size "
                                         << type_set_size << "]:";);
        if (type_set_size == 1) {
          Type *sub_type = *child_loc_types[l->first]->begin();
          if (sub_type->isPointerTy()) {
            Type *sub =
                sub_type
                    ->subtypes()[0]; // If the types are overlapping, uh don't
            if (StructType *st = dyn_cast<StructType>(sub)) {
              if (locConstraintMap.find(node) == locConstraintMap.end() &&
                  !st->isOpaque()) {
                locConstraintMap[node] = createConsElemFromStruct(*node, st);
              }
            }
          }
        }
      }
    }
    return locConstraintMap[&loc];
  } else {
    return (curElem->second);
  }
}

void Infoflow::putOrConstrainConsElem(bool implicit, bool sink,
                                      const AbstractLoc &loc,
                                      const ConsElem &lub, ConsSet &consSet) {
  std::map<unsigned, const ConsElem *> elemMap = getOrCreateConsElem(loc);
  for (std::map<unsigned, const ConsElem *>::iterator it = elemMap.begin(),
                                                      itEnd = elemMap.end();
       it != itEnd; ++it) {
    // errs() << "Creating memlink: "; lub.dump(errs()); errs() << ":<->:";
    // it->second->dump(errs()); errs() << it->second<< "\n";
    std::vector<RLConstraint> cons = kit->addConstraint(kindFromImplicitSink(implicit, sink), lub,
                       *(*it).second);
    insertConsVectorIntoConsSet(consSet, cons);
  }
}

void Infoflow::putOrConstrainConsElemStruct(bool implicit, bool sink,
                                            const AbstractLoc &loc,
                                            const ConsElem &lub,
                                            unsigned offset, ConsSet &consSet, const Value *v) {
  unsigned numElements = 0;
  std::map<unsigned, const ConsElem *> elemMap =
      getOrCreateConsElemTyped(loc, numElements, v);
  if (elemMap.size() == 0)
    return;

  if (elemMap.find(offset) != elemMap.end()) {
    const ConsElem *elem = elemMap[offset];
    std::vector<RLConstraint> cons = kit->addConstraint(kindFromImplicitSink(implicit, sink), lub, *elem);
    insertConsVectorIntoConsSet(consSet, cons);
  } else {
    for (auto &kv : elemMap) {
      std::vector<RLConstraint> cons = kit->addConstraint(kindFromImplicitSink(implicit, sink), lub,
                         *(kv.second));
      insertConsVectorIntoConsSet(consSet, cons);
    }
  }
}
void Infoflow::putOrConstrainConsElem(bool implicit, bool sink,
                                      const AbstractLoc &loc,
                                      const ConsElem &lub, unsigned offset,
                                      unsigned numElements, ConsSet &consSet) {
  std::map<unsigned, const ConsElem *> elemMap =
      getOrCreateConsElemTyped(loc, numElements);
  if (elemMap.size() == 0)
    return;

  if (loc.isNodeCompletelyFolded()) {
    for (std::map<unsigned, const ConsElem *>::iterator it = elemMap.begin(),
                                                        itEnd = elemMap.end();
         it != itEnd; ++it) {
      DEBUG(errs() << "Adding " << elemMap.size() << " elements\n");
      std::vector<RLConstraint> cons = kit->addConstraint(kindFromImplicitSink(implicit, sink), lub,
                         *(*it).second);
      insertConsVectorIntoConsSet(consSet, cons);
    }
  } else {
    std::set<const ConsElem *> elems =
        findRelevantConsElem(&loc, elemMap, offset);
    for (std::set<const ConsElem *>::iterator i = elems.begin();
         i != elems.end(); ++i) {
      std::vector<RLConstraint> cons = kit->addConstraint(kindFromImplicitSink(implicit, sink), lub, *(*i));
      insertConsVectorIntoConsSet(consSet, cons);
    }
  }
}

void Infoflow::generateFunctionConstraints(const Function &f) {
  for (Function::const_iterator bb = f.begin(), end = f.end(); bb != end;
       ++bb) {
    // Build constraints for basic blocks
    // The pc of the entry block will be tainted at any call sites
    generateBasicBlockConstraints(*bb, flowVector);
  }
  if (Infoflow::iterationTag > 1) {
    return;
  }

  for (Flows::iterator flow = flowVector.begin(), end = flowVector.end();
       flow != end; ++flow) {
    if (!(*flow).isImplicit() || IMPLICIT) {
      DEBUG_WITH_TYPE(DEBUG_TYPE_FLOW, (*flow).dump(););
      constrainFlowRecord(*flow);
    }
  }
  flowVector.clear();
  for (auto instFlowKV = instFlowMap.begin(); instFlowKV != instFlowMap.end(); instFlowKV++) {
    std::pair<Flows, Flows> flowPair = (*instFlowKV).second;
    Flows flowsTaint = flowPair.first;
    Flows flowsWLP = flowPair.second;
    std::set<RLConstraint> taintSet;
    std::set<RLConstraint> WLPSet;
    for (auto flow = flowsTaint.begin(); flow != flowsTaint.end(); flow++) {
      auto cons = flowConsSetMap.find((*flow).flowRecordID)->second;
      for (auto con : cons) {
        if (!con.isImplicit() && !con.isSink()){
          consSetTaint[0].insert(con);
        }
        if (con.isImplicit() && !con.isSink()){
          consSetTaint[1].insert(con);
        }
        if (!con.isImplicit() && con.isSink()){
          consSetTaint[2].insert(con);
        }
        if (con.isImplicit() && con.isSink()){
          consSetTaint[3].insert(con);
        }
      }
      taintSet.insert(cons.begin(), cons.end());
    }
    auto instConsSetKVTaint = std::make_pair((*instFlowKV).first, taintSet);
    Infoflow::instTaintConsSetMap.insert(instConsSetKVTaint);

    for (auto flow = flowsWLP.begin(); flow != flowsWLP.end(); flow++) {
      auto cons = flowConsSetMap.find((*flow).flowRecordID)->second;
      for (auto con : cons) {
        if (!con.isImplicit() && !con.isSink()){
          consSetWLP[0].insert(con);
        }
        if (con.isImplicit() && !con.isSink()){
          consSetWLP[1].insert(con);
        }
        if (!con.isImplicit() && con.isSink()){
          consSetWLP[2].insert(con);
        }
        if (con.isImplicit() && con.isSink()){
          consSetWLP[3].insert(con);
        }
      }
      WLPSet.insert(cons.begin(), cons.end());
    }
    auto instConsSetKVWLP = std::make_pair((*instFlowKV).first, WLPSet);
    Infoflow::instWLPConsSetMap.insert(instConsSetKVWLP);
  }
  kit->setConstraints(consSetTaint[0], "default-taint");
  kit->setConstraints(consSetTaint[1], "implicit-taint");
  kit->setConstraints(consSetTaint[2], "default-sink-taint");
  kit->setConstraints(consSetTaint[3], "implicit-sink-taint");
  kit->setConstraints(consSetWLP[0], "default-WLP");
  kit->setConstraints(consSetWLP[1], "implicit-WLP");
  kit->setConstraints(consSetWLP[2], "default-sink-WLP");
  kit->setConstraints(consSetWLP[3], "implicit-sink-WLP");
}

void Infoflow::generateBasicBlockConstraints(const BasicBlock &bb,
                                             Flows &flows) {
  // Build constraints for instructions
  for (BasicBlock::const_iterator inst = bb.begin(), end = bb.end();
       inst != end; ++inst) {
    getInstructionFlowsInternal(*inst, true, flows);
  }
}

void Infoflow::constrainMemoryLocation(bool implicit, bool sink,
                                       const Value &value,
                                       const ConsElem &level, ConsSet &consSet) {
  const std::set<const AbstractLoc *> &locs = locsForValue(value);
  for (std::set<const AbstractLoc *>::iterator loc = locs.begin(),
                                               end = locs.end();
       loc != end; ++loc) {
    // errs() << "Adding consElem: ";
    // (*loc)->dump(); errs() << " and ";
    // level.dump(errs()); errs() << "\n";
    putOrConstrainConsElem(implicit, sink, **loc, level, consSet);
  }
}

void Infoflow::constrainReachableMemoryLocations(bool implicit, bool sink,
                                                 const Value &value,
                                                 const ConsElem &level, ConsSet &consSet) {
  const std::set<const AbstractLoc *> &locs = reachableLocsForValue(value);
  for (std::set<const AbstractLoc *>::iterator loc = locs.begin(),
                                               end = locs.end();
       loc != end; ++loc) {
    // errs() << "Adding consElem: ";
    // (*loc)->dump(); errs() << " and ";
    // level.dump(errs()); errs() << "\n";
    putOrConstrainConsElem(implicit, sink, **loc, level, consSet);
  }
}

const ConsElem &Infoflow::getOrCreateMemoryConsElem(const Value &value) {
  const ConsElem *join = NULL;
  const std::set<const AbstractLoc *> &locs = locsForValue(value);
  unsigned offset = 0;
  bool hasOffset = offsetForValue(value, &offset);
  // errs() << "getOrCreate: " << getOrCreateStringFromValue(value) << "\n";
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
  // errs() << "getOrCreate2: " << getOrCreateStringFromValue(value) << "\n";
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

FlowRecord Infoflow::currentContextFlowRecord(bool implicit) {
  const ContextID currentContext = this->getCurrentContext();
  FlowRecord flow = FlowRecord(implicit, currentContext, currentContext, currentFlowRecord);
  currentFlowRecord++;
  return flow;
}

/// Helper function that computes the join of all operands to an instruction
/// and the pc, and then makes the result of the instruction at least as high.
void Infoflow::operandsAndPCtoValue(const Instruction &inst, Flows &flows) {
  FlowRecord exp = currentContextFlowRecord(false);
  FlowRecord imp = currentContextFlowRecord(true);
  // pc
  imp.addSourceValue(*inst.getParent());
  // operands
  for (User::const_op_iterator op = inst.op_begin(), end = inst.op_end();
       op != end; ++op) {
    exp.addSourceValue(*op->get());
  }
  // to value
  exp.addSinkValue(inst);
  imp.addSinkValue(inst);

  flows.push_back(exp);
  flows.push_back(imp);

  Flows taintFlows;
  Flows WLPFlows;
  taintFlows.push_back(exp);
  WLPFlows.push_back(exp);
  insertIntoInstFlowMap(&inst, taintFlows, WLPFlows);
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
  getInstructionFlowsInternal(inst, false, flows);
  return flows;
}

void Infoflow::getInstructionFlowsInternal(const Instruction &inst,
                                           bool callees, Flows &flows) {
  if (const AtomicCmpXchgInst *i = dyn_cast<AtomicCmpXchgInst>(&inst)) {
    return Infoflow::constrainAtomicCmpXchgInst(*i, flows);
  } else if (const AtomicRMWInst *i = dyn_cast<AtomicRMWInst>(&inst)) {
    return Infoflow::constrainAtomicRMWInst(*i, flows);
  } else if (const BinaryOperator *i = dyn_cast<BinaryOperator>(&inst)) {
    return Infoflow::constrainBinaryOperator(*i, flows);
  } else if (const CallInst *i = dyn_cast<CallInst>(&inst)) {
    return Infoflow::constrainCallInst(*i, callees, flows);
  } else if (const CmpInst *i = dyn_cast<CmpInst>(&inst)) {
    return Infoflow::constrainCmpInst(*i, flows);
  } else if (const ExtractElementInst *i =
                 dyn_cast<ExtractElementInst>(&inst)) {
    return Infoflow::constrainExtractElementInst(*i, flows);
  } else if (const FenceInst *i = dyn_cast<FenceInst>(&inst)) {
    return Infoflow::constrainFenceInst(*i, flows);
  } else if (const GetElementPtrInst *i = dyn_cast<GetElementPtrInst>(&inst)) {
    return Infoflow::constrainGetElementPtrInst(*i, flows);
  } else if (const InsertElementInst *i = dyn_cast<InsertElementInst>(&inst)) {
    return Infoflow::constrainInsertElementInst(*i, flows);
  } else if (const InsertValueInst *i = dyn_cast<InsertValueInst>(&inst)) {
    return Infoflow::constrainInsertValueInst(*i, flows);
  } else if (const LandingPadInst *i = dyn_cast<LandingPadInst>(&inst)) {
    return Infoflow::constrainLandingPadInst(*i, flows);
  } else if (const PHINode *i = dyn_cast<PHINode>(&inst)) {
    return Infoflow::constrainPHINode(*i, flows);
  } else if (const SelectInst *i = dyn_cast<SelectInst>(&inst)) {
    return Infoflow::constrainSelectInst(*i, flows);
  } else if (const ShuffleVectorInst *i = dyn_cast<ShuffleVectorInst>(&inst)) {
    return Infoflow::constrainShuffleVectorInst(*i, flows);
  } else if (const StoreInst *i = dyn_cast<StoreInst>(&inst)) {
    return Infoflow::constrainStoreInst(*i, flows);
  } else if (const TerminatorInst *i = dyn_cast<TerminatorInst>(&inst)) {
    return Infoflow::constrainTerminatorInst(*i, callees, flows);
  } else if (const UnaryInstruction *i = dyn_cast<UnaryInstruction>(&inst)) {
    return Infoflow::constrainUnaryInstruction(*i, flows);
  } else {
    assert(false && "Unsupported instruction type!");
  }
}

void Infoflow::insertIntoInstFlowMap(const Instruction *inst, Flows &taintFlows, Flows &WLPFlows) {
  if (Infoflow::iterationTag > 1) {
    return;
  }
  std::pair<Flows, Flows> flows;
  flows.first = taintFlows;
  flows.second = WLPFlows;
  std::pair<const Instruction *, std::pair<Flows, Flows>> KV;
  KV.first = inst;
  KV.second = flows;
  
  auto result = instFlowMap.insert(KV);
  if (result.second) {
    if (iterationTag > 1)
      errs() << "Shouldn't happen!\n";
    else 
      errs() << "Inserted!\n";
  } else {
    if (iterationTag == 1) {
      errs() << "Insert again!\n";
      auto flowsHere = instFlowMap.find(inst);
      errs() << flowsHere->second.first.size() << " taint flows before\n";
      errs() << flowsHere->second.second.size() << " WLP flows before\n";
      flowsHere->second.first.insert(flowsHere->second.first.end(), taintFlows.begin(), taintFlows.end());
      flowsHere->second.second.insert(flowsHere->second.second.end(), WLPFlows.begin(), WLPFlows.end());
      flowsHere = instFlowMap.find(inst);
      errs() << flowsHere->second.first.size() << " taint flows after\n";
      errs() << flowsHere->second.second.size() << " WLP flows after\n";
    } else {
      errs() << "Shouldn't happen!\n";
    }
  }
}

void Infoflow::pushToFullyTainted(const Instruction &inst) {
  const BasicBlock *bc = inst.getParent();
  const Function *func = bc->getParent();
  json var;
  var["name"] = inst.getName();
  var["function"] = func->getName();
  var["index"] = -1;
  var["c"] = json::object();
  var["l"] = json::object({{"secret", "private"}});
  Infoflow::fullyTainted.insert(parseConfigVariable(var));
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
  	
  Flows taintFlows;
  taintFlows.push_back(expToMem);
  taintFlows.push_back(impToMem);
  Flows WLPFlows;
  insertIntoInstFlowMap(&inst, taintFlows, WLPFlows);
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

  Flows taintFlows;
  taintFlows.push_back(expToMem);
  taintFlows.push_back(impToMem);
  taintFlows.push_back(expFromMem);
  taintFlows.push_back(impFromMem);
  Flows WLPFlows;
  insertIntoInstFlowMap(&inst, taintFlows, WLPFlows);
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
  
  Flows taintFlows;
  Flows WLPFlows;
  taintFlows.push_back(flow);
  insertIntoInstFlowMap(&inst, taintFlows, WLPFlows);
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

  Flows taintFlows;
  Flows WLPFlows;
  taintFlows.push_back(flow);
  insertIntoInstFlowMap(&inst, taintFlows, WLPFlows);
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
  
  Flows taintFlows;
  Flows WLPFlows;
  taintFlows.push_back(flow);
  insertIntoInstFlowMap(&inst, taintFlows, WLPFlows);
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
  	
  Flows taintFlows;
  Flows WLPFlows;
  taintFlows.push_back(exp);
  taintFlows.push_back(imp);
  WLPFlows.push_back(exp);
  insertIntoInstFlowMap(&inst, taintFlows, WLPFlows);
}

/// Load the value from the memory at the pointer operand into the result.
/// Flow from pc, ptr value, and memory to result.
void Infoflow::constrainLoadInst(const LoadInst &inst, Flows &flows) {
  Value *ptr = inst.getOperand(0);
  if (Infoflow::whitelistPointers.find(ptr) != Infoflow::whitelistPointers.end() &&
      !inst.getType()->isPtrOrPtrVectorTy()) {
    pushToFullyTainted(inst);
  }

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
  
  Flows taintFlows;
  Flows WLPFlows;
  taintFlows.push_back(exp);
  taintFlows.push_back(imp);
  WLPFlows.push_back(exp);
  insertIntoInstFlowMap(&inst, taintFlows, WLPFlows);
  if(Infoflow::iterationTag > 1 && !WLPTR_ROUND) {
    auto cons = Infoflow::instTaintConsSetMap.find(&inst);
    for (auto con : (*cons).second) {
      if (!con.isImplicit() &&
          Infoflow::solutionSetWLP.find(con.lhs()) != Infoflow::solutionSetWLP.end() &&
          !inst.getType()->isPtrOrPtrVectorTy()) {
        pushToFullyTainted(inst);
      }
    }
  }
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
  
  Flows taintFlows;
  Flows WLPFlows;
  taintFlows.push_back(exp);
  taintFlows.push_back(imp);
  insertIntoInstFlowMap(&inst, taintFlows, WLPFlows);
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
  if (const IntrinsicInst *intr = dyn_cast<IntrinsicInst>(&inst)) {
    return constrainIntrinsic(*intr, flows);
  } else {
    DEBUG(errs() << "%%% constrainCallSite: " << analyzeCallees << ":";
          inst.dump(););
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
  
  Flows taintFlows;
  Flows WLPFlows;
  taintFlows.push_back(flow);
  insertIntoInstFlowMap(&inst, taintFlows, WLPFlows);
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
  Flows taintFlows;
  Flows WLPFlows;
  const CallInst *callinst = dyn_cast<CallInst>(cs.getInstruction());
  if (analyzeCallees) {
    FlowRecord imp = currentContextFlowRecord(true);
    imp.addSourceValue(*cs->getParent());
    imp.addSinkValue(*cs.getInstruction());
    flows.push_back(imp);
    taintFlows.push_back(imp);
    const CallInst *callinst = dyn_cast<CallInst>(cs.getInstruction());
    DEBUG_WITH_TYPE(DEBUG_TYPE_DEBUG, errs() << "The CallInst is: \n\t";
                    callinst->dump(););

    StringRef fName;

    if (callinst->getCalledFunction() &&
        callinst->getCalledFunction()->hasName()) {
      fName = callinst->getCalledFunction()->getName();
    } else if (auto F = dyn_cast<Function>(
                   callinst->getCalledValue()->stripPointerCasts())) {
      fName = F->getName();
    }
    DEBUG_WITH_TYPE(DEBUG_TYPE_DEBUG,
                    errs() << "Function name: " << fName << "\n";);

    bool callResult = true;
    for (auto var : sinkVariables) {
      if (fName.size() > 0 && fName.equals(var.function)) {
        errs() << "Found function match: " << fName << "\n";
        User::const_op_iterator op_i = cs.arg_begin();
        int arg_idx = 0;
        for (; op_i != cs.arg_end(); op_i++, arg_idx++) {
          if (var.number == -1 || var.number == arg_idx) {
            Value *value = (*op_i).get();
            auto sinkVar = var;
            sinkVar.ctxt = this->getCurrentContext();
            sinkVar.val = value;
            if (auto meta = dyn_cast<Value>(cs.getInstruction())) {
              sinkVar.callsite = getOrCreateStringFromValue(*meta);
            }
            indexedSinkVariables.push_back(sinkVar);
            DEBUG_WITH_TYPE(DEBUG_TYPE_DEBUG,
                            errs() << "\tinserted ["
                                   << getOrCreateStringFromValue(*value)
                                   << "] at offset: " << var.index << "\n";);
          }
        }
        callResult = false;
      }
    }

    if (callResult) {
      this->getCallResult(cs, Unit());
    }
  } else if (usesExternalSignature(cs)) {
    std::pair<Flows, Flows> recs = signatureRegistrar->process(this->getCurrentContext(), cs);
    Flows combinedFlows;
    for (auto flow = recs.first.begin(); flow != recs.first.end(); flow++) {
      (*flow).flowRecordID = currentFlowRecord;
      currentFlowRecord++;
      combinedFlows.push_back(*flow);
    }
    for (auto flow = recs.second.begin(); flow != recs.second.end(); flow++) {
      auto exist = std::find(combinedFlows.begin(), combinedFlows.end(), (*flow));
      if (exist != combinedFlows.end()) {
        (*flow).flowRecordID = (*exist).flowRecordID;
        continue;
      }
      (*flow).flowRecordID = currentFlowRecord;
      currentFlowRecord++;
      combinedFlows.push_back(*flow);
    }
    taintFlows.insert(taintFlows.end(), recs.first.begin(), recs.first.end());
    WLPFlows.insert(WLPFlows.end(), recs.second.begin(), recs.second.end());
    flows.insert(flows.end(), combinedFlows.begin(), combinedFlows.end());
  }

  std::set<std::pair<const Function *, const ContextID>> callees =
      this->invokableCode(cs);
  // Do constraints for each callee
  for (std::set<std::pair<const Function *, const ContextID>>::iterator
           callee = callees.begin(),
           end = callees.end();
       callee != end; ++callee) {
    DEBUG(errs() << "%%%% function: "; (*callee).first->dump(););
    // (*callee).second->dump();
    constrainCallee((*callee).second, *((*callee).first), cs, flows);
  }
  insertIntoInstFlowMap(callinst, taintFlows, WLPFlows);
}

void Infoflow::constrainCallee(const ContextID calleeContext,
                               const Function &callee,
                               const ImmutableCallSite &cs, Flows &flows) {
  const ContextID callerContext = this->getCurrentContext();
  Flows taintFlows;
  Flows WLPFlows;
  // 1) pc of function should be at least as high as current pc + function
  // pointer
  FlowRecord pcFlow = FlowRecord(true, callerContext, calleeContext, currentFlowRecord);
  currentFlowRecord++;
  // caller pc
  pcFlow.addSourceValue(*cs->getParent());
  // caller ptr
  pcFlow.addSourceValue(*cs.getCalledValue());
  // to callee pc
  pcFlow.addSinkValue(callee.getEntryBlock());
  flows.push_back(pcFlow);
  taintFlows.push_back(pcFlow);
  DEBUG(
      errs() << "CALLSITE\n"; cs->dump(); errs() << "SOURCE\n";
      for (FlowRecord::value_iterator ii = pcFlow.source_value_begin();
           ii != pcFlow.source_value_end(); ii++) { (*ii)->dump(); };
      errs() << "SINK\n";
      for (FlowRecord::value_iterator ii = pcFlow.sink_value_begin();
           ii != pcFlow.sink_value_end(); ii++) { (*ii)->dump(); });

  // 2) levels of params should be as high as corresponding args
  unsigned int numArgs = cs.arg_size();
  unsigned int numParams = callee.arg_size();
  DEBUG(errs() << "numArgs = cs.arg_size() = " << numArgs << "\n";
        errs() << "numParams = callee.arg_size() = " << numParams << "\n";);

  // Check arities for sanity...
  assert((!callee.isVarArg() || numArgs >= numParams) &&
         "variable arity function called with two few arguments");
  assert((callee.isVarArg() || numArgs == numParams) &&
         "function called with the wrong number of arguments");

  // The level of each non-vararg param should be as high as the corresponding
  // argument
  Function::const_arg_iterator param = callee.arg_begin();
  for (unsigned int i = 0; i < numParams; i++) {
    FlowRecord argFlow = FlowRecord(false, callerContext, calleeContext, currentFlowRecord);
    currentFlowRecord++;
    argFlow.addSourceValue(*cs.getArgument(i));
    argFlow.addSinkValue(*param);
    flows.push_back(argFlow);
    taintFlows.push_back(argFlow);
    WLPFlows.push_back(argFlow);
    DEBUG(
        errs() << "CALLSITE\n"; cs->dump(); errs() << "SOURCE\n";
        for (FlowRecord::value_iterator ii = argFlow.source_value_begin();
             ii != argFlow.source_value_end(); ii++) {
          (*ii)->dump();
          const Value *value = (*ii);
          const std::set<const AbstractLoc *> &locs = locsForValue(*value);
          for (std::set<const AbstractLoc *>::const_iterator loc = locs.begin(),
                                                             end = locs.end();
               loc != end; ++loc) {
            (*loc)->dump();
          }
        };
        errs() << "SINK\n";
        for (FlowRecord::value_iterator ii = argFlow.sink_value_begin();
             ii != argFlow.sink_value_end(); ii++) {
          (*ii)->dump();
          const Value *value = (*ii);
          const std::set<const AbstractLoc *> &locs = locsForValue(*value);
          for (std::set<const AbstractLoc *>::const_iterator loc = locs.begin(),
                                                             end = locs.end();
               loc != end; ++loc) {
            (*loc)->dump();
          }
        });
    ++param;
  }
  // The remaining arguments provide a bound on the vararg structure
  if (numArgs > numParams) {
    FlowRecord varargFlow = FlowRecord(false, callerContext, calleeContext, currentFlowRecord);
    currentFlowRecord++;
    for (unsigned int i = numParams; i < numArgs; i++) {
      varargFlow.addSourceValue(*cs.getArgument(i));
    }
    varargFlow.addSinkVarg(callee);
    flows.push_back(varargFlow);
    taintFlows.push_back(varargFlow);
    WLPFlows.push_back(varargFlow);
  }

  // 3) result should be at least as high as the possible return values
  for (Function::const_iterator block = callee.begin(), end = callee.end();
       block != end; ++block) {
    const TerminatorInst *terminator = block->getTerminator();
    if (terminator) {
      if (const ReturnInst *retInst = dyn_cast<ReturnInst>(terminator)) {
        FlowRecord retFlow = FlowRecord(false, calleeContext, callerContext, currentFlowRecord);
        currentFlowRecord++;
        retFlow.addSourceValue(*retInst);
        retFlow.addSinkValue(*cs.getInstruction());
        flows.push_back(retFlow);
        taintFlows.push_back(retFlow);
        WLPFlows.push_back(retFlow);
      }
    }
  }
  insertIntoInstFlowMap(cs.getInstruction(), taintFlows, WLPFlows);
}

void Infoflow::constrainReturnInst(const ReturnInst &inst, Flows &flows) {
  if (inst.getNumOperands() != 0) {
    operandsAndPCtoValue(inst, flows);
  }
}

// TODO: Revisit and understand this instruction. Something to do with exception
// handling.
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

void Infoflow::constrainMemcpyOrmove(const IntrinsicInst &intr, Flows &flows) {
  FlowRecord imp = FlowRecord(true);
  imp.flowRecordID = currentFlowRecord++;
  FlowRecord exp = FlowRecord(false);
  exp.flowRecordID = currentFlowRecord++;
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
  	
  Flows taintFlows;
  Flows WLPFlows;
  taintFlows.push_back(exp);
  taintFlows.push_back(imp);
  WLPFlows.push_back(exp);
  insertIntoInstFlowMap(&intr, taintFlows, WLPFlows);
}

void Infoflow::constrainMemset(const IntrinsicInst &intr, Flows &flows) {
  FlowRecord exp = FlowRecord(false);
  exp.flowRecordID = currentFlowRecord++;
  FlowRecord imp = FlowRecord(true);
  imp.flowRecordID = currentFlowRecord++;
  // Flow from value, length, and alignment into
  // data at destination pointer
  exp.addSourceValue(*intr.getArgOperand(1));
  imp.addSourceValue(*intr.getArgOperand(2));
  imp.addSourceValue(*intr.getArgOperand(3));
  exp.addSinkDirectPtr(*intr.getArgOperand(0));
  imp.addSinkDirectPtr(*intr.getArgOperand(0));
  flows.push_back(exp);
  flows.push_back(imp);
  	
  Flows taintFlows;
  Flows WLPFlows;
  taintFlows.push_back(exp);
  taintFlows.push_back(imp);
  insertIntoInstFlowMap(&intr, taintFlows, WLPFlows);
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
  DEBUG_WITH_TYPE(DEBUG_TYPE_DEBUG,
                  errs() << "\n[CONFIG] Start reading configuration file...\n");
  std::ifstream i("config.json");
  i >> config;
  DEBUG_WITH_TYPE(DEBUG_TYPE_DEBUG, errs() << config.dump(4) << "\n\n");

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
    RLConstant::BotLabel.first[level.at("name")] = 0;
    RLConstant::TopLabel.first[level.at("name")] = levels.size() - 1;
  }
  for (json set : lattice.at("compartments")) {
    std::set<std::string> compartments;
    for (std::string e : set.at("set")) {
      compartments.insert(e);
    }
    RLConstant::RLCompartmentMap.insert(
        std::pair<std::string, std::set<std::string>>(set.at("name"),
                                                      compartments));

    RLConstant::BotLabel.second[set.at("name")] = std::set<std::string>();
    RLConstant::TopLabel.second[set.at("name")] = compartments;
  }

  RLConstant::lockLattice();
  DEBUG_WITH_TYPE(DEBUG_TYPE_DEBUG, RLConstant::dump_lattice(errs());;);

  // Read source & sink
  assert(config.contains("ptr_whitelist"));
  for (json ptr : config.at("ptr_whitelist")) {
    Infoflow::sourceWhitelistPointers.insert(parseConfigVariable(ptr));
  }
  assert(config.contains("source"));
  for (json source : config.at("source")) {
    ConfigVariable srcVar = parseConfigVariable(source);
    if (Infoflow::sourceWhitelistPointers.find(srcVar) == Infoflow::sourceWhitelistPointers.end()){
      sourceVariables.insert(parseConfigVariable(source));
    }
  }
  assert(config.contains("sink"));
  for (json sink : config.at("sink")) {
    sinkVariables.push_back(parseConfigVariable(sink));
  }
  assert(config.contains("using_whitelist"));
  if (config.at("using_whitelist")) {
    assert(config.contains("whitelist"));
    for (json whitelist : config.at("whitelist")) {
      whitelistVariables.push_back(parseConfigVariable(whitelist));
    }
  }
}

ConfigVariable Infoflow::parseConfigVariable(json v) {
  std::string fn = v.contains("function") ? v.at("function") : "";
  ConfigVariableType ty = ConfigVariableType::Variable;
  if (v.contains("type")) {
    std::string type = v.at("type");
    if (type == "argument")
      ty = ConfigVariableType::Argument;
    else if (type == "variable")
      ty = ConfigVariableType::Variable;
    else if (type == "constant")
      ty = ConfigVariableType::Constant;
  }
  std::string name = v.contains("name") ? v.at("name") : "";
  int num = v.contains("number") ? (int)v.at("number") : 0;
  int idx = v.contains("index") ? (int)v.at("index") : -1;

  RLLevel level;
  RLCompartment compartment;
  if (v.contains("l") && v.contains("c")) {
    std::unordered_map<std::string, std::string> lmap = v.at("l");
    for (auto l : lmap) {
      auto v = RLConstant::RLLevelMap.at(l.first);
      auto it = find(v.begin(), v.end(), l.second);
      assert(it != v.end());
      int index = it - v.begin();
      level.insert(std::make_pair(l.first, index));
    }
    std::unordered_map<std::string, std::list<std::string>> cmap = v.at("c");
    for (auto c : cmap) {
      std::set<std::string> set;
      for (auto e : c.second) {
        set.insert(e);
      }
      compartment.insert(std::make_pair(c.first, set));
    }
  }
  RLLabel label(level, compartment);

  // for constants
  std::string file = v.contains("file") ? v.at("file") : "";
  int line = v.contains("line") ? (unsigned int)v.at("line") : 0;
  long value = v.contains("value") ? (long)v.at("value") : 0;

  return ConfigVariable(fn, ty, name, num, idx, file, line, value, label);
}

int Infoflow::matchValueAndParsedString(const Value &value, std::string kind,
                                        ConfigVariable var) {
  DEBUG(errs() << "Matching value with parsed string.\n";);
  const Function *fn = findEnclosingFunc(&value);
  if (fn)
    DEBUG(errs() << "\t- found enclosing function: " << fn->getName() << "\n";);
  int variable_matches = 0;
  if (var.function.size() == 0 ||
      (fn && fn->hasName() && fn->getName() == var.function)) {
    DEBUG(errs() << "\t- function matched\n";);
    const MDLocalVariable *local_var;
    if (fn) {
      local_var = findVarNode(&value, fn);
    }
    if (local_var &&
        (local_var->getTag() == 257 || local_var->getTag() == 256)) {
      DEBUG(errs() << "\t- local_var has the name: [" << local_var->getName()
                   << "]\n";);
      if (local_var->getName() == var.name) {
        variable_matches |= 1;
        DEBUG(errs() << "\t- Found a local variable match\n\n";);
      }
    }
    if (value.hasName()) {
      DEBUG(errs() << "\t- value has the name: [" << value.getName() << "]\n";);
      if (value.getName() == var.name) {
        variable_matches |= 2;
        DEBUG(errs() << "\t- Found a value name match\n\n";);
      }
    }
  }
  // errs() << "\t- Not a match\n\n";
  return variable_matches;
}

void Infoflow::getOrCreateLocationValueMap() {
  DEBUG(errs() << "getOrCreateLocationValueMap\n";);
  if (invertedLocConstraintMap.size() > 0) {
    return;
  }

  for (DenseMap<const Value *, const ConsElem *>::const_iterator entry =
           summarySourceValueConstraintMap.begin();
       entry != summarySourceValueConstraintMap.end(); ++entry) {
    const Value &value = *(entry->first);
    // const Function *fn = findEnclosingFunc(&value);
    // int variable_matches = 0;
    // if (!fn || (fn && fn->hasName())) {
    //   const MDLocalVariable *local_var;
    //   if (fn) {
    //     local_var = findVarNode(&value, fn);
    //   }
    //   if (local_var &&
    //       (local_var->getTag() == 257 || local_var->getTag() == 256)) {
    //     variable_matches |= 1;
    //   }
    // }
    if (!isa<BasicBlock>(value)) {
      const std::set<const AbstractLoc *> &locs = locsForValue(value);
      for (std::set<const AbstractLoc *>::const_iterator loc = locs.begin();
           loc != locs.end(); ++loc) {
        DenseMap<const AbstractLoc *, std::set<const Value *>>::iterator
            setIter = invertedLocConstraintMap.find(*loc);
        // if (setIter != invertedLocConstraintMap.end()) {
        //   errs() << "FOUNND\n";
        //   (*setIter).second.insert(&value);
        // } else {
        //   std::set<const Value *> vSet;
        //   invertedLocConstraintMap[*loc] = vSet;
        //   vSet.insert(&value);
        // }
        invertedLocConstraintMap[*loc].insert(&value);
        DEBUG(errs() << "VVVVALUE" << invertedLocConstraintMap[*loc].size()
                     << "\n";
              value.dump(););
      }
    }
  }
}

void Infoflow::removeConstraint(std::string kind, ConfigVariable whitelist) {
  getOrCreateLocationValueMap();
  DEBUG(errs() << "Removing values tied to " << whitelist.name << "\n";);
  for (DenseMap<const Value *, const ConsElem *>::const_iterator
           entry = summarySourceValueConstraintMap.begin(),
           end = summarySourceValueConstraintMap.end();
       entry != end; ++entry) {
    DEBUG(errs() << "=== Iteration starts on a value==="
                 << "\n";);

    const Value &value = *(entry->first);

    std::string match_name = whitelist.name;
    int t_offset = whitelist.index;
    std::string fn_name = whitelist.function;

    const Function *fn = findEnclosingFunc(&value);
    bool function_matches = false;
    if (fn_name.size() == 0 ||
        (fn && fn->hasName() && fn->getName() == fn_name)) {
      function_matches = true;
    }

    bool remove_reg = true, remove_mem = true;
    // if(function_matches && value.hasName() && value.getName() ==
    // whitelist.name)
    // {
    if (matchValueAndParsedString(value, kind, whitelist)) {
      // Removing constraints in the registers, i.e., valueConstraintMap
      if (remove_reg) {
        DEBUG(errs() << "Removing constraint from valueConstraintMap\n";);
        for (DenseMap<ContextID,
                      DenseMap<const Value *, const ConsElem *>>::iterator
                 id = valueConstraintMap.begin(),
                 end = valueConstraintMap.end();
             id != end; ++id) {
          DEBUG(errs() << "Checking contextID: " << id->first << "\n";);
          for (DenseMap<const Value *, const ConsElem *>::iterator
                   I = id->second.begin(),
                   E = id->second.end();
               I != E; ++I) {
            if (I->first == &value) {
              const ConsElem *thisElem = I->second;
              DEBUG(errs() << "Found the matching value in the "
                              "valueConstraintMap:\n";
                    errs() << "\t- value name: " << (*I->first).getName()
                           << "\n";
                    errs() << "\t- value addr: " << I->first << "\n";
                    errs() << "Removing ConsElem addr: " << thisElem << "\n";);
              kit->removeConstraintRHS(kind, *thisElem);
            }
          }
          DEBUG(errs() << "Checking contextID: " << id->first
                       << " finished.\n\n";);
        }
      }

      // Removing constraints in the memory, i.e., AbstractLoc set derived
      // from the value
      if (remove_mem) {
        const std::set<const AbstractLoc *> &locs = locsForValue(value);
        DEBUG(errs() << "--" << whitelist.name << " : " << value
                     << ", t_offset: " << t_offset << ", locs: " << locs.size()
                     << "\n";);
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
            DEBUG(errs()
                      << "^^^^^: "
                      << invertedLocConstraintMap.find(*loc)->getSecond().size()
                      << "\n";);
            invertedLocConstraintMap.find(*loc)->getSecond().erase(&value);
            continue;
          }
          if (t_offset >= 0) {
            // Check if we are loading from a pointer.
            bool linkExists = false;
            if (curElem->first->getSize() > 0)
              linkExists = curElem->first->hasLink(0);

            if (linkExists) {
              // If value is a pointer, use points-to analysis to resolve the
              // target
              const DSNodeHandle nh = curElem->first->getLink(0);
              const AbstractLoc *node = nh.getNode();
              DEBUG(errs() << "Linked Node";);
              if (node != NULL) {
                DEBUG_WITH_TYPE(DEBUG_TYPE_DEBUG, node->dump(););
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

              DEBUG(errs() << "------ conselem addr: " << e << "\n";);
              kit->removeConstraintRHS(kind, *e);
            }
          }
        }
      }
    } else if (getOrCreateStringFromValue(value).find(whitelist.name) == 0) {
      const ConsElem &elem = *(entry->second);
      DEBUG(errs() << "Removing constraint with a no match: ";
            elem.dump(errs()); errs() << "\n";);
      kit->removeConstraintRHS(kind, elem);
    }
    DEBUG(errs() << "=== Iteration ends ==="
                 << "\n\n\n";);
  }
}

void Infoflow::constrainAllConsElem(
    std::string kind, std::map<unsigned, const ConsElem *> elemMap,
    RLLabel label, std::string meta) {
  for (std::map<unsigned, const ConsElem *>::iterator it = elemMap.begin(),
                                                      end = elemMap.end();
       it != end; ++it) {
    // it->second->dump(errs());
    if ((it->second) != NULL)
      kit->addConstraint(kind, kit->constant(label), *(it->second),
                         " ;  [ConsDebugTag-22]" + meta);
  }
}

void Infoflow::constrainAllConsElem(std::string kind,
                                    std::set<const ConsElem *> elems,
                                    RLLabel label, std::string meta) {
  for (std::set<const ConsElem *>::iterator it = elems.begin(),
                                            end = elems.end();
       it != end; ++it) {
    kit->addConstraint(kind, kit->constant(label), *(*it),
                       " ;  [ConsDebugTag-19] " + meta);
  }
}

void Infoflow::constrainAllConsElem(std::string kind, const Value &v,
                                    std::set<const ConsElem *> elems,
                                    RLLabel label, std::string meta) {
  if (elems.size() == 0) {
    setLabel(kind, v, label, true, meta);
  } else {
    constrainAllConsElem(kind, elems, label, meta);
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
        DEBUG(st->dump(););
      }
    } else {
      DEBUG(errs() << "Type has multiple subtypes, unclear how to proceed.\n";);
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
      // errs() << " allocation intermediate: ";
      // v->dump();
      v = li->getPointerOperand();
      // errs() << "=>";
      // v->dump();
    } else if (const GetElementPtrInst *g = dyn_cast<GetElementPtrInst>(v)) {
      // errs() << " allocation intermediate: ";
      // v->dump();
      v = g->getPointerOperand();
      // errs() << "=>";
      // v->dump();
    } else {
      lastValue = v;
      v = NULL;
    }
  }
  if (v == NULL)
    v = lastValue;
  else {
    DEBUG(errs() << "FINAL: "; v->dump(););
  }

  return v;
}

AbstractLocSet Infoflow::getPointedToAbstractLocs(const Value *v) {
  AbstractLocSet locs;
  if (v == NULL)
    return locs;

  // Get Locations for stack alloc
  AbstractLocSet alloclocs = locsForValue(*v);

  // Check to see if the locs are pointers
  for (auto &l : alloclocs) {
    if (l->isNodeCompletelyFolded()) {
      locs.insert(l);
    } else {
      for (auto it = l->type_begin(), end = l->type_end(); it != end; ++it) {
        unsigned link_offset = 0;
        for (auto j = it->second->begin(), setend = it->second->end();
             j != setend; ++j) {
          Type *t = *j;
          Type *target = t;
          if (t->isPointerTy()) {
            if (t->subtypes().size() == 1) {
              target = t->subtypes()[0];
            }
          }

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
                         " ;  [ConsDebugTag-20]");
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
                           " ;  [ConsDebugTag-21]");
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
  DEBUG(errs() << "Looking for field " << fieldIdx << " in "; v->dump(););
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

  DEBUG(errs() << "No direct element at offset..searching\n";);

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
