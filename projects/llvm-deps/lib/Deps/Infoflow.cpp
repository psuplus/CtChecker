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
// information flow analysis for a two-level security lattice (Untainted--Tainted).
// While the analysis is context-sensitive, the Infoflow pass interface is not.
//
//===----------------------------------------------------------------------===//

//CHANGE
#ifndef DEBUG_TYPE
#define DEBUG_TYPE "deps"

#include "Infoflow.h"
#include "SignatureLibrary.h"

#include "llvm/IR/InstIterator.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/DebugInfoMetadata.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/CommandLine.h"
#include <fstream>
#include <iterator>

namespace deps {

using namespace llvm;

static cl::opt<bool> DepsCollapseExtContext(
  "deps-collapse-external", cl::desc("Use the default context for all ExternalCallingNode calls"),
  cl::init(true));
static cl::opt<bool> DepsCollapseIndContext(
  "deps-collapse-indirect", cl::desc("Use the default context for all indirect calls"),
  cl::init(true));
static cl::opt<bool> DepsDropAtSink(
  "deps-drop-sink-flows", cl::desc("Cut dependencies from sinks to other values"),
  cl::init(false));

typedef Infoflow::Flows Flows;

char Infoflow::ID = 42;
char PDTCache::ID = 0;

static RegisterPass<Infoflow>
X ("infoflow", "Compute information flow constraints", true, true);

static RegisterPass<PDTCache>
Y ("pdtcache", "Cache PostDom Analysis Results", true, true);

Infoflow::Infoflow () :
    // The parameters to the template are an input and output type for the user's analysis and a non-negative integer k.
    CallSensitiveAnalysisPass<Unit,Unit,1,CallerContext>(ID, DepsCollapseExtContext, DepsCollapseIndContext),
    kit(new LHConstraintKit()) { }

void
Infoflow::doInitialization() {
  // Get the PointsToInterface
  pti = &getAnalysis<PointsToInterface>();
  // CHANGE
  sourceSinkAnalysis = &getAnalysis<SourceSinkAnalysis>();
  // sourceSinkAnalysis = &getAnalysis<>();
  signatureRegistrar = new SignatureRegistrar();
  registerSignatures();
}

void
Infoflow::doFinalization() {
  // delete signatureRegistrar;
  // now deleted in destructor, because we need the registrar
  // for computing propagatesTaint
}

void Infoflow::registerSignatures() {
  RegisterSignature<OverflowChecks> OverflowChecks (*signatureRegistrar);
  RegisterSignature<StdLib>         StdLib(*signatureRegistrar);

  // For now, if we don't know the call don't bother with this.
  // It's expensive for the crazy amount of external calls to various
  // libraries that one encounters, and we don't have time to fix that.
  RegisterSignature<TaintReachable> TaintReachable(*signatureRegistrar);
  //RegisterSignature<ArgsToRet> ArgsToRet(*signatureRegistrar);
}

const Unit
Infoflow::bottomInput() const {
  return Unit();
}

const Unit
Infoflow::bottomOutput() const {
  return Unit();
}

const Unit
Infoflow::runOnContext(const Infoflow::AUnitType unit, const Unit input) {
  DEBUG(errs() << "Running on " << unit.function().getName() << " in context [";
  CM.getContextFor(unit.context()).dump();
  errs() << "]\n");

  // start only from entry functions, if "entry.txt" is specified
  bool needAnalysis = true;
  if (unit.context() == DefaultID) { // top-level function
    std::ifstream fentry("entry.txt");
    if (fentry.good()) { // file exists
      needAnalysis = false;  // ignore if there is no match
      std::string line;
      while (std::getline(fentry, line)) {
        if (unit.function().getName() == line) {
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
  // std::vector<const LHConsVar *> vars = kit->getVars();
  // for (std::vector<const LHConsVar *>::iterator var = vars.begin(), end = vars.end();
  //  var != end; ++var) {
  //    if((*var)->getDesc() != "")
  //       errs() << (*var)->getDesc() << "\n";
  // }

  // kit->getOrCreateConstraintSet(kind)
  //errs() << "----- Trying to print out kit->joins -----\n";
  //std::set<LHJoin> joins = kit->getJoins();
  //for (std::set<LHJoin>::iterator join = joins.begin(), end = joins.end();
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
  std::vector<LHConstraint> set = kit->getOrCreateConstraintSet("default");
  /// set contains all constraints, constraints are pairs of ConsElem
  /// can't joint on rhs, only on lhs
  for(std::vector<LHConstraint>::iterator constraint = set.begin(), end = set.end();
      constraint != end; ++constraint) {
    //       /// a constraint contains two ConElem: lhs and rhs.
    //       /// We need to search through valueMap, locMap and vargMap to get the
    //       /// value paired to both ConElems.

    // print lhs
    (*constraint).lhs().dump(errs());
    errs() << "-->";
    (*constraint).rhs().dump(errs());
    errs()  << "\n";
  }
#endif

  return Unit();
}

void
Infoflow::constrainFlowRecord(const FlowRecord &record) {
  const ConsElem *sourceElem = NULL;
  const ConsElem *sinkSourceElem = NULL;

  // First, build up the set of ConsElem's that represent the sources:
  std::set<const ConsElem *> Sources;
  std::set<const ConsElem *> sinkSources;
  {
    // For variables and vargs elements, add all of these directly to 'Sources'
    for (FlowRecord::value_iterator source = record.source_value_begin(), end = record.source_value_end();
        source != end; ++source) {
      const ConsElem * elem  = &getOrCreateConsElem(record.sourceContext(), **source);
      if (!DepsDropAtSink || !sourceSinkAnalysis->valueIsSink(**source)) {
	       Sources.insert(elem);
      } else {
	       sinkSources.insert(elem);
      }
    }

    for (FlowRecord::fun_iterator source = record.source_varg_begin(), end = record.source_varg_end();
        source != end; ++source) {
      const ConsElem * elem = &getOrCreateVargConsElem(record.sourceContext(), **source);
      if (!DepsDropAtSink || !sourceSinkAnalysis->vargIsSink(**source)) {
	       Sources.insert(elem);
      } else {
	       sinkSources.insert(elem);
      }
    }

    // For memory-based sources, build up the set of memory locations that act
    // as sources for this record...
    std::set<const AbstractLoc *> SourceLocs;
    std::set<const AbstractLoc *> sinkSourceLocs;

    constrainDirectSourceLocations(record, Sources, sinkSources, SourceLocs, sinkSourceLocs);

    constrainReachSourceLocations(record, Sources, sinkSources, SourceLocs, sinkSourceLocs);

    // ...And convert those locs into ConsElem's and store them into Sources
    for(std::set<const AbstractLoc *>::const_iterator I = SourceLocs.begin(),
        E = SourceLocs.end(); I != E; ++I) {
      std::map<unsigned, const ConsElem *> elemMap = getOrCreateConsElem(**I);
      for(std::map<unsigned, const ConsElem *>::const_iterator it = elemMap.begin(), itEnd = elemMap.end();
          it != itEnd; ++it){
        Sources.insert((*it).second);
      }
    }
    for(std::set<const AbstractLoc *>::const_iterator I = sinkSourceLocs.begin(),
        E = sinkSourceLocs.end(); I != E; ++I) {
      std::map<unsigned, const ConsElem *> elemMap = getOrCreateConsElem(**I);
      for(std::map<unsigned, const ConsElem *>::const_iterator it = elemMap.begin(), itEnd = elemMap.end();
          it != itEnd; ++it){
        sinkSources.insert((*it).second);
      }
    }
  }

  bool regFlow = !Sources.empty();
  bool sinkFlow = !sinkSources.empty();

  // This assert *should* be true expect that we're getting
  // DirectPtr sources that don't have any corresponding abstract locations
  //assert((DepsDropAtSink || regFlow) && "FlowRecord must have at least one source!");

  // Take join of all sources, this is sourceElem
  if (regFlow)
    sourceElem = &kit->upperBound(Sources);
  if (sinkFlow)
    sinkSourceElem = &kit->upperBound(sinkSources);

  // Now we want to add constraints that *each* sink is greater
  // than the join of all the sources, computed above as sourceElem.
  bool implicit = record.isImplicit();

  // For values and varargs, just do this directly
  for (FlowRecord::value_iterator sink = record.sink_value_begin(), end = record.sink_value_end();
      sink != end; ++sink) {
    if (regFlow)
      putOrConstrainConsElem(implicit, false, record.sinkContext(), **sink, *sourceElem);
    if (sinkFlow)
      putOrConstrainConsElem(implicit, true, record.sinkContext(), **sink, *sinkSourceElem);
  }
  for (FlowRecord::fun_iterator sink = record.sink_varg_begin(), end = record.sink_varg_end();
      sink != end; ++sink) {
    if (regFlow)
      putOrConstrainVargConsElem(implicit, false, record.sinkContext(), **sink, *sourceElem);
    if (sinkFlow)
      putOrConstrainVargConsElem(implicit, true, record.sinkContext(), **sink, *sinkSourceElem);
  }

  // To try to save constraint generation, gather memory locations as before:
  std::set<const AbstractLoc *> SinkLocs;
  for (FlowRecord::value_iterator sink = record.sink_directptr_begin(), end = record.sink_directptr_end();
      sink != end; ++sink) {
    const std::set<const AbstractLoc *> & locs = locsForValue(**sink);
    if(isa<GetElementPtrInst>(*sink)){
      if (regFlow)
        processGetElementPtrInstSink(*sink, implicit, false, *sourceElem, locs);
      if (sinkFlow)
        processGetElementPtrInstSink(*sink, implicit, true, *sinkSourceElem, locs);
    } else {
      SinkLocs.insert(locs.begin(), locs.end());
    }
  }
  for (FlowRecord::value_iterator sink = record.sink_reachptr_begin(), end = record.sink_reachptr_end();
      sink != end; ++sink) {
    const std::set<const AbstractLoc *> & locs = reachableLocsForValue(**sink);
    if(isa<GetElementPtrInst>(*sink)) {
      if (regFlow)
        processGetElementPtrInstSink(*sink,implicit, false, *sourceElem, locs);
      if (sinkFlow)
        processGetElementPtrInstSink(*sink, implicit, true, *sinkSourceElem, locs);
    }
    SinkLocs.insert(locs.begin(), locs.end());
  }

  // And add constraints for each of the sink memory locations
  for (std::set<const AbstractLoc *>::iterator loc = SinkLocs.begin(), end = SinkLocs.end();
      loc != end ; ++loc) {
    if (regFlow)
      putOrConstrainConsElem(implicit, false, **loc, *sourceElem);
    if (sinkFlow)
      putOrConstrainConsElem(implicit, true, **loc, *sinkSourceElem);
  }
}


void
Infoflow::constrainDirectSourceLocations(const FlowRecord & record, ConsElemSet & Sources, ConsElemSet & sinkSources, AbsLocSet & SourceLocs, AbsLocSet & sinkSourceLocs){
  
  FlowRecord::value_set directSource;
  FlowRecord::value_set directSink;
    for (FlowRecord::value_iterator source = record.source_directptr_begin(), end = record.source_directptr_end();
         source != end; ++source) {
      if (!DepsDropAtSink || !sourceSinkAnalysis->directPtrIsSink(**source)) {
        directSource.insert(*source);
      } else {
        directSink.insert(*source);
      }
    }

    //Sort the Sources/Sinks handling the GEPinstructions separately
    // NON-GEP values get the corresponding AbsLocs added to the Source/SinkSet
    // GEP instructions are constrained directly based on offset
    // TO DISABLE OFFSET:
    // constrainDirectValuesIncludingOffset(directSource, Sources, SourceLocs, false);
    // constrainDirectValuesIncludingOffset(directSink, sinkSources, sinkSourceLocs, false);
    constrainDirectValuesIncludingOffset(directSource, Sources, SourceLocs);
    constrainDirectValuesIncludingOffset(directSink, sinkSources, sinkSourceLocs);
}

void
Infoflow::constrainDirectValuesIncludingOffset(FlowRecord::value_set values, ConsElemSet & elems, AbsLocSet & locations, bool offset_used) {
  for (FlowRecord::value_iterator it = values.begin(); it != values.end(); ++it) {
    const std::set<const AbstractLoc *> & locs = locsForValue(**it);
    if(isa<GetElementPtrInst>(*it) && offset_used){
      processGetElementPtrInstSource(*it, elems, locs);
    } else {
      locations.insert(locs.begin(), locs.end());
    }
  }
}

void
Infoflow::constrainReachSourceLocations(const FlowRecord & record, ConsElemSet & Sources, ConsElemSet & sinkSources, AbsLocSet & SourceLocs, AbsLocSet & sinkSourceLocs){
  
  FlowRecord::value_set reachSource;
  FlowRecord::value_set reachSink;
    for (FlowRecord::value_iterator source = record.source_reachptr_begin(), end = record.source_reachptr_end();
         source != end; ++source) {
      if (!DepsDropAtSink || !sourceSinkAnalysis->reachPtrIsSink(**source)) {
        reachSource.insert(*source);
      } else {
        reachSink.insert(*source);
      }
    }

    //Sort the Sources/Sinks handling the GEPinstructions separately
    // NON-GEP values get the corresponding AbsLocs added to the Source/SinkSet
    // GEP instructions are constrained directly based on offset
    // TO DISABLE OFFSET:
    // constrainReachValuesIncludingOffset(reachSource, Sources, SourceLocs, false);
    // constrainReachValuesIncludingOffset(reachSink, sinkSources, sinkSourceLocs, false);
    constrainReachValuesIncludingOffset(reachSource, Sources, SourceLocs);
    constrainReachValuesIncludingOffset(reachSink, sinkSources, sinkSourceLocs);
}

void
Infoflow::constrainReachValuesIncludingOffset(FlowRecord::value_set values, ConsElemSet & elems, AbsLocSet & locations, bool offset_used) {
  for (FlowRecord::value_iterator it = values.begin(); it != values.end(); ++it) {
    const std::set<const AbstractLoc *> & locs = reachableLocsForValue(**it);
    if(isa<GetElementPtrInst>(*it) && offset_used){
      processGetElementPtrInstSource(*it, elems, locs);
    } else {
      locations.insert(locs.begin(), locs.end());
    }
  }
}
///
/// This function takes any GetElementPtrInst values and extracts the offset
/// the instruction is dealing with. That offset is used to constrain the
/// element from the instruction more specifically
///
void
Infoflow::processGetElementPtrInstSink(const Value *value, bool implicit, bool sink, const ConsElem &lub, std::set<const AbstractLoc*> locs) {
  errs() << "[Sink:] " << stringFromValue(*value) << "\n";
  const GetElementPtrInst *gep = dyn_cast<GetElementPtrInst>(value);
  Type *T = cast<PointerType>(gep->getPointerOperandType())->getElementType();
  unsigned numElements = 0;
  if(isa<ArrayType>(T))
    numElements = GEPInstCalculateNumberElements(gep);

  // If operands are not constant constrain all ConsElems
  // i.e. Operands are variables or values loaded from a register
  if(!checkGEPOperandsConstant(gep)){
    //errs() << "Non-constant ptr or offset\n";
    for(std::set<const AbstractLoc *>::const_iterator I = locs.begin(), E = locs.end();
        I != E; ++I){
      putOrConstrainConsElem(implicit, sink, **I, lub);
    }
    return;
  }

  // Otherwise constrain the elements that are at the location of the operands
  unsigned offset = GEPInstCalculateOffset(gep, locs);
  bool structTy = false;
  const StructType* s = dyn_cast<StructType>(gep->getSourceElementType());
  if (s != NULL){
    structTy = true;
  }

  for(std::set<const AbstractLoc *>::iterator loc = locs.begin(), end = locs.end();
      loc != end; ++loc){
    errs() << "Tainting at offset: " << offset << "\n";
    if(structTy)
      putOrConstrainConsElemStruct(implicit, sink, **loc, lub, offset, value);

    putOrConstrainConsElem(implicit, sink, **loc, lub, offset, numElements);
  }
}

///
/// This function takes any GetElementPtrInst values and extracts the offset
/// the instruction is dealing with. That offset is used to find the correct
/// ConsElem related to the value and add that to the corresponding source set.
///
void Infoflow::processGetElementPtrInstSource(const Value *source, std::set<const ConsElem *>& sourceSet, std::set<const AbstractLoc *> locs) {
  //get ConsElem from Value
  errs() << "[Source:] " << stringFromValue(*source) << "\n";
  const GetElementPtrInst *gep = dyn_cast<GetElementPtrInst>(source);
  Type *T = cast<PointerType>(gep->getPointerOperandType())->getElementType();
  unsigned numElements = 0;
  if(isa<ArrayType>(T))
    numElements = GEPInstCalculateNumberElements(gep);

  // If operands are not constant taint all consElems
  if(!checkGEPOperandsConstant(gep)){
    //errs() << "Non-constant ptr or offset\n";
    for(std::set<const AbstractLoc *>::const_iterator I = locs.begin(), E = locs.end();
        I != E; ++I){
      std::map<unsigned, const ConsElem *> elemMap;
      elemMap = getOrCreateConsElemTyped(**I, numElements, source);

      for(std::map<unsigned, const ConsElem *>::iterator i = elemMap.begin(), e = elemMap.end();
          i != e; ++i){
        sourceSet.insert((*i).second);
      }
    }
    return;
  }

  // If operands are constant taint only that element
  unsigned offset = GEPInstCalculateOffset(gep,locs);
  errs() << "\nSourceOffset: " << offset << "\n";
  for(std::set<const AbstractLoc *>::const_iterator I = locs.begin(), E = locs.end();
      I != E; ++I){
    (*I)->dump();
    std::map<unsigned, const ConsElem *> elemMap;
    elemMap = getOrCreateConsElemTyped(**I, numElements, source);

    // ElemMap should match the number of elements unless
    // the number is not known at compile time
    // If the offset is somehow larger than the map, add all
    // constraint elements to the sourceSet
    // Collapsed nodes contain no type info, so also taint all elems
    std::set<const ConsElem*> sourceElems = findRelevantConsElem(*I, elemMap, offset);
    for(std::set<const ConsElem *>::iterator i = sourceElems.begin(); i != sourceElems.end(); ++i)
      sourceSet.insert(*i);
  }
}


// Returns a set of the correct constraint elements to be handled
std::set<const ConsElem*> Infoflow::findRelevantConsElem(const AbstractLoc* node, std::map<unsigned, const ConsElem *> elemMap, unsigned offset){

  std::set<const ConsElem*> elements;

  if (node->isNodeCompletelyFolded()){
    // All elements are relevant
    for(std::map<unsigned, const ConsElem*>::iterator it = elemMap.begin(); it!= elemMap.end(); ++it){
      elements.insert(it->second);
    }
  } else if (elemMap.find(offset) != elemMap.end()){
    // Add the element which matches the offset
    elements.insert(elemMap[offset]);
  } else {
    // Do a search to find the element which spans the range of the offset requested
    // if elements 0-4 4-8  exist and offset is 5, return element 4-8
    // TODO: Handle if the element selected spans more than one constraint element.

    if (elemMap.begin() != elemMap.end()){
      const ConsElem * prevElem = NULL;
      bool elemAdded = false;
      for(std::map<unsigned, const ConsElem *>::iterator it = elemMap.begin(), itEnd= elemMap.end();
          it != itEnd && !elemAdded; ++it){
        if (it->first > offset){
          if (prevElem == NULL){
            prevElem = it->second;
          } else {
            elemAdded = true;
            elements.insert(prevElem);
          }
        }

        prevElem = it->second;
      }

      // In case end of map reached and no element added
      if (prevElem != NULL && !elemAdded){
        elements.insert(prevElem);
      }
    }
  }

  DEBUG(errs() << "SIZE OF ELEMENTS : " << elements.size() << "\n");
  return elements;
}

//
// Funtctions to parse teh GetElementPtrInst and return the correct offset
// to find the correct ConsElem to add to the constraint sets
//
// This handles the different types of  GEPInstructions that can occur
// and calls the correct parsing function
unsigned Infoflow::GEPInstCalculateOffset(const GetElementPtrInst* gep, std::set<const AbstractLoc*> locs) {
  Type *T = cast<PointerType>(gep->getPointerOperandType())->getElementType();
  unsigned offset = 0;
  if(isa<ArrayType>(T) && gep->getNumIndices() == 2) {
    errs() << "ArrayType:";
    offset = GEPInstCalculateArrayOffset(gep);
  } else if (gep->getNumIndices() == 2) {
    errs() << "StructType:";
    offset = GEPInstCalculateStructOffset(gep, locs);
  } else {
    ConstantInt *ptrIdx = dyn_cast<ConstantInt>(gep->getOperand(1));
    offset = ptrIdx->getZExtValue();
  }

  return offset;
}

unsigned Infoflow::GEPInstCalculateNumberElements(const GetElementPtrInst *gep) {
  Type *T = cast<PointerType>(gep->getPointerOperandType())->getElementType();
  unsigned numElements = cast<ArrayType>(T)->getNumElements();
  //errs() << "GEP # elements in array: " << numElements << "\n";
  return numElements;
}

unsigned Infoflow::GEPInstCalculateArrayOffset(const GetElementPtrInst* gep) {
  unsigned numElements = GEPInstCalculateNumberElements(gep);

  // *(ptr + i) = 4; ptr is operand 1 and i is operand 2
  ConstantInt *ptr = dyn_cast<ConstantInt>(gep->getOperand(1));
  ConstantInt *ptrOffset = dyn_cast<ConstantInt>(gep->getOperand(2));
  uint64_t ptrIdx = ptr->getZExtValue();
  uint64_t ptrOff = ptrOffset->getZExtValue();
  unsigned offset = ptrIdx * numElements + ptrOff;
  return offset;
}

unsigned Infoflow::GEPInstCalculateStructOffset(const GetElementPtrInst* gep, std::set<const AbstractLoc*> locs) {
  // *(ptr + i) = 4; ptr is operand 1 and i is operand 2
  ConstantInt *ptrOffset = dyn_cast<ConstantInt>(gep->getOperand(2));
  uint64_t ptrOff = ptrOffset->getZExtValue();
  unsigned offset = ptrOff;
  StructType* structType = dyn_cast<StructType>(gep->getSourceElementType());

  if (locs.size() > 1){   // if multiple DSNodes just return the offset
    return offset;
  }


  // if the offset is non zero, get offset by adding together largest blocks
  // until the position in the structure is met.
  // Treat offset received from previous line as the index of the actual type in a structure

  offset = findOffsetFromFieldIndex(structType, offset, *(locs.begin()));

  return offset;
}

// findOffsetFromFieldIndex is called from the GEPInstCalculateStructOffset function
// This function takes the type information from the LLVM type and walks through and finds
// the relevant byte offset that the field index (last operand of GEP inst) is located within
// the structure. This method allows for the gaps in the structure to be properly marked
// even when the is type information missing in the AbstractLoc's type information map for that node
unsigned Infoflow::findOffsetFromFieldIndex(StructType* type, unsigned fieldIdx, const AbstractLoc* loc) {
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
bool Infoflow::checkGEPOperandsConstant(const GetElementPtrInst* gep) {
  Type *T = cast<PointerType>(gep->getPointerOperandType())->getElementType();
  // If array, check both indices ptr+offset (operand 1 and 2)
  if(isa<ArrayType>(T) && gep->getNumIndices() == 2){
    if( ! isa<ConstantInt>(gep->getOperand(1)))
      return false;
    if( ! isa<ConstantInt>(gep->getOperand(2)))
      return false;
    return true;
  } else if (gep->getNumIndices() == 2){
    // if structure check the offset (operand 2)
    if( ! isa<ConstantInt>(gep->getOperand(2)))
      return false;
    return true;
  } else {
    if ( ! isa<ConstantInt>(gep->getOperand(1)))
      return false;
    return true;
  }
}

const Unit
Infoflow::signatureForExternalCall(const ImmutableCallSite & cs, const Unit input) {
  std::vector<FlowRecord> flowRecords = signatureRegistrar->process(this->getCurrentContext(), cs);

  // For each flow record returned by the signature, update the constraint sets
  for (std::vector<FlowRecord>::iterator rec = flowRecords.begin(), rend = flowRecords.end();
          rec != rend; ++rec) {
    constrainFlowRecord(*rec);
  }

  return bottomOutput();
}

///////////////////////////////////////////////////////////////////////////////
/// InfoflowSolution
///////////////////////////////////////////////////////////////////////////////

InfoflowSolution::~InfoflowSolution() {
  if (soln != NULL) delete soln;
}

bool
InfoflowSolution::isTainted(const Value & value) {
  DenseMap<const Value *, const ConsElem *>::iterator entry = valueMap.find(&value);
  if (entry != valueMap.end()) {
    const ConsElem & elem = *(entry->second);
    return (soln->subst(elem) == highConstant);
  } else {
    DEBUG(errs() << "not in solution: " << value << "\n");
    return defaultTainted;
  }
}

const Function* findEnclosingFunc(const Value* V) {
  if (const Argument* Arg = dyn_cast<Argument>(V)) {
    return Arg->getParent();
  }
  if (const Instruction* I = dyn_cast<Instruction>(V)) {
    return I->getParent()->getParent();
  }
  return NULL;
}

const MDLocation* findVar(const Value* V, const Function* F) {
  for (const_inst_iterator Iter = inst_begin(F), End = inst_end(F); Iter != End; ++Iter) {
    const Instruction* I = &*Iter;
    for (unsigned i=0; i< I->getNumOperands(); i++) {
      if (V == I->getOperand(i)) {
        return I->getDebugLoc();
      }
    }
  }
  return NULL;
}

void 
InfoflowSolution::getOriginalLocation(const Value* V) {
  // Global var?
  if (const GlobalVariable* glb = dyn_cast<GlobalVariable>(V)) {
    errs() << "Global var: " << glb->getName();
    return;
  }

  const MDLocation* Loc;
  // Instruction?
  if (const Instruction* I = dyn_cast<Instruction>(V)) {
    Loc = I->getDebugLoc();
  }
  else {  // try to find the uses of the value
    const Function* F = findEnclosingFunc(V);
    if (!F) {errs() << "Unknown location"; return;}

    // check function parameters
    for (Function::ArgumentListType::const_iterator ite = F->arg_begin(), end = F->arg_end();
         ite != end; ++ite) {
      if (&*ite == V) {
        errs() << "Function " << F->getName() << " Arg: " << ite->getName();
        return;
      }
    }

    // search in all instructions
    Loc = findVar(V, F);
  }

  if (!Loc) {errs() << "Unknown location for " << V->getName(); return;}
  errs() << Loc->getFilename() << " line " << std::to_string(Loc->getLine());
  return;
}

void
InfoflowSolution::allTainted( ) {
  for (DenseMap<const Value *, const ConsElem *>::const_iterator entry = valueMap.begin(), end = valueMap.end();
         entry != end; ++entry) {
    const Value& v = *(entry->first);
    if (isTainted(v)) {
      errs() << "Tainted! ";
      // v.dump();
      getOriginalLocation(&v);
      errs() << "\n";
    }
  }
}

std::set<const Value*> 
InfoflowSolution::getAllTaintValues( ) {
  std::set<const Value*> ret;
  for (DenseMap<const Value *, const ConsElem *>::const_iterator entry = valueMap.begin(), end = valueMap.end();
         entry != end; ++entry) {
    const Value* v = (entry->first);
    if (isTainted(*v)) {
      ret.insert(v);
    }
  }
  return ret;
}

bool
InfoflowSolution::isDirectPtrTainted(const Value & value) {
  const std::set<const AbstractLoc *> & locs = infoflow.locsForValue(value);
  for (std::set<const AbstractLoc *>::const_iterator loc = locs.begin(), end = locs.end();
        loc != end; ++loc) {
    DenseMap<const AbstractLoc *, std::map<unsigned, const ConsElem *> >::iterator entry = locMap.find(*loc);
    if (entry != locMap.end()) {
      std::map<unsigned, const ConsElem *>::iterator it = entry->second.begin();
      std::map<unsigned, const ConsElem *>::iterator itEnd = entry->second.end();
      for(; it != itEnd; ++it){
        const ConsElem & elem = *(*it).second;
        if (soln->subst(elem) == highConstant) {
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

bool
InfoflowSolution::isReachPtrTainted(const Value & value) {
  const std::set<const AbstractLoc *> & locs = infoflow.reachableLocsForValue(value);
  for (std::set<const AbstractLoc *>::iterator loc = locs.begin(), end = locs.end();
        loc != end; ++loc) {
    DenseMap<const AbstractLoc *, std::map<unsigned, const ConsElem *> >::iterator entry = locMap.find(*loc);
    if (entry != locMap.end()) {
      std::map<unsigned, const ConsElem *>::iterator it = entry->second.begin();
      std::map<unsigned, const ConsElem *>::iterator itEnd = entry->second.end();
      for(; it != itEnd; ++it){
        const ConsElem & elem = *(*it).second;
        if (soln->subst(elem) == highConstant) {
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

bool
InfoflowSolution::isVargTainted(const Function & fun) {
  DenseMap<const Function *, const ConsElem *>::iterator entry = vargMap.find(&fun);
  if (entry != vargMap.end()) {
    const ConsElem & elem = *(entry->second);
    return (soln->subst(elem) == highConstant);
  } else {
    DEBUG(errs() << "not in solution: varargs of " << fun.getName() << "\n");
    return defaultTainted;
  }
}

///////////////////////////////////////////////////////////////////////////////
/// Infoflow
///////////////////////////////////////////////////////////////////////////////
bool
Infoflow::DropAtSinks() const  { return DepsDropAtSink; }

void
Infoflow::setUntainted(std::string kind, const Value & value) {
  assert(kind != "default" && "Cannot add constraints to the default kind");
  assert(kind != "implicit" && "Cannot add constraints to the implicit kind");
  const ConsElem & current = getOrCreateConsElemSummarySink(value);
  kit->addConstraint(kind, current, kit->lowConstant());
}

void
Infoflow::setTainted(std::string kind, const Value & value) {
  assert(kind != "default" && "Cannot add constraints to the default kind");
  assert(kind != "implicit" && "Cannot add constraints to the implicit kind");
  putOrConstrainConsElemSummarySource(kind, value, kit->highConstant());
}

void
Infoflow::setVargUntainted(std::string kind, const Function & fun) {
  assert(kind != "default" && "Cannot add constraints to the default kind");
  assert(kind != "implicit" && "Cannot add constraints to the implicit kind");
  const ConsElem & current = getOrCreateVargConsElemSummarySink(fun);
  kit->addConstraint(kind, current, kit->lowConstant());
}

void
Infoflow::setVargTainted(std::string kind, const Function & fun) {
  assert(kind != "default" && "Cannot add constraints to the default kind");
  assert(kind != "implicit" && "Cannot add constraints to the implicit kind");
  putOrConstrainVargConsElemSummarySource(kind, fun, kit->highConstant());
}

void
Infoflow::setDirectPtrUntainted(std::string kind, const Value & value) {
  assert(kind != "default" && "Cannot add constraints to the default kind");
  assert(kind != "implicit" && "Cannot add constraints to the implicit kind");
  const std::set<const AbstractLoc *> & locs = locsForValue(value);
  unsigned offset = 0;
  bool hasOffset = offsetForValue(value, &offset);
  for (std::set<const AbstractLoc *>::iterator loc = locs.begin(), end = locs.end();
        loc != end; ++loc) {
    std::map<unsigned, const ConsElem *> elemMap = getOrCreateConsElem(**loc);
    if(hasOffset){
      const ConsElem & elem = *elemMap[offset];
      kit->addConstraint(kind, elem, kit->lowConstant());
    }
    // for(std::map<unsigned, const ConsElem *>::iterator it = elemMap.begin(), itEnd= elemMap.end();
    // it != itEnd; ++it){
    // kit->addConstraint(kind, *(*it).second, kit->lowConstant());
    // }
  }
}

void
Infoflow::setDirectPtrTainted(std::string kind, const Value & value) {
  assert(kind != "default" && "Cannot add constraints to the default kind");
  assert(kind != "implicit" && "Cannot add constraints to the implicit kind");
  const std::set<const AbstractLoc *> & locs = locsForValue(value);
  unsigned offset = 0;
  bool hasOffset = offsetForValue(value, &offset);
  for (std::set<const AbstractLoc *>::iterator loc = locs.begin(), end = locs.end();
        loc != end; ++loc) {
    std::map<unsigned, const ConsElem *> elemMap = getOrCreateConsElem(**loc);
    if (hasOffset){
      const ConsElem & elem = *elemMap[offset];
      kit->addConstraint(kind, kit->highConstant(), elem);
    }
    // for(std::map<unsigned, const ConsElem *>::iterator it = elemMap.begin(), itEnd= elemMap.end();
    // it != itEnd; ++it){
    // kit->addConstraint(kind, kit->highConstant(), *(*it).second);
    // }
  }
}

void
Infoflow::setReachPtrUntainted(std::string kind, const Value & value) {
  assert(kind != "default" && "Cannot add constraints to the default kind");
  assert(kind != "implicit" && "Cannot add constraints to the implicit kind");
  const std::set<const AbstractLoc *> & locs = reachableLocsForValue(value);
  unsigned offset = 0;
  bool hasOffset = offsetForValue(value, &offset);
  for (std::set<const AbstractLoc *>::iterator loc = locs.begin(), end = locs.end();
        loc != end; ++loc) {
    std::map<unsigned, const ConsElem *> elemMap = getOrCreateConsElem(**loc);
    if(hasOffset){
      const ConsElem & elem = *elemMap[offset];
      kit->addConstraint(kind, elem, kit->lowConstant());
    }
    // for(std::map<unsigned, const ConsElem *>::iterator it = elemMap.begin(), itEnd= elemMap.end();
    // it != itEnd; ++it){
    // kit->addConstraint(kind, *(*it).second, kit->lowConstant());
    // }
  }
}

void
Infoflow::setReachPtrTainted(std::string kind, const Value & value) {
  assert(kind != "default" && "Cannot add constraints to the default kind");
  assert(kind != "implicit" && "Cannot add constraints to the implicit kind");
  const std::set<const AbstractLoc *> & locs = reachableLocsForValue(value);
  unsigned offset = 0;
  bool hasOffset = offsetForValue(value, &offset);
  for (std::set<const AbstractLoc *>::iterator loc = locs.begin(), end = locs.end();
        loc != end; ++loc) {
    std::map<unsigned, const ConsElem *> elemMap = getOrCreateConsElem(**loc);
    if (hasOffset){
      const ConsElem & elem = *elemMap[offset];
      kit->addConstraint(kind, kit->highConstant(), elem);
    }
    // for(std::map<unsigned, const ConsElem *>::iterator it = elemMap.begin(), itEnd= elemMap.end();
    // it != itEnd; ++it){
    // kit->addConstraint(kind, kit->highConstant(), *(*it).second);
    // }
  }
}

InfoflowSolution *
Infoflow::leastSolution(std::set<std::string> kinds, bool implicit, bool sinks) {
  kinds.insert("default");
  if (sinks) kinds.insert("default-sinks");
  if (implicit) kinds.insert("implicit");
  if (implicit && sinks) kinds.insert("implicit-sinks");
  return new InfoflowSolution(*this,                            //infoflow
                              kit->leastSolution(kinds),        //ConsSoln* s
                              kit->highConstant(),              //const ConsElem & high
                              false, /* default to untainted */
                              summarySinkValueConstraintMap,    // valueMap
                              locConstraintMap,                 // locMap
                              summarySinkVargConstraintMap);    // vargMap
}

InfoflowSolution *
Infoflow::greatestSolution(std::set<std::string> kinds, bool implicit) {
  kinds.insert("default");
  kinds.insert("default-sinks");
  if (implicit) {
    kinds.insert("implicit");
    kinds.insert("implicit-sinks");
  }
  return new InfoflowSolution(*this,                            //infoflow
                              kit->greatestSolution(kinds),     //ConsSoln* s
                              kit->highConstant(),              //const ConsElem & high
                              true, /* default to tainted */
                              summarySourceValueConstraintMap,  // valueMap
                              locConstraintMap,                 // locMap
                              summarySourceVargConstraintMap);  // vargMap
}

const std::set<const AbstractLoc *> &
Infoflow::locsForValue(const Value & value) const {
  return *pti->getAbstractLocSetForValue(&value);
}

const std::set<const AbstractLoc *> &
Infoflow::reachableLocsForValue(const Value & value) const {
  return *pti->getReachableAbstractLocSetForValue(&value);
}

bool Infoflow::offsetForValue(const Value & value, unsigned *Offset) {
  if(const GetElementPtrInst *gep = dyn_cast<GetElementPtrInst>(&value)){
    std::set<const AbstractLoc *> locs = locsForValue(value);
    if(checkGEPOperandsConstant(gep)){
      *Offset = GEPInstCalculateOffset(gep, locs);
      return true;
    } else {
      return false;
    }
  } else if (isa<AllocaInst>(value) || isa<Argument>(value)){
    return false;
  }
  return pti->getOffsetForValue(&value, Offset);
}

const std::set<const AbstractHandle *> &
Infoflow::HandlesForValue(const Value & value) const {
  return *pti->getAbstractHandleSetForValue(&value);
}

const std::set<const AbstractHandle *> &
Infoflow::reachableHandlesForValue(const Value & value) const {
  return *pti->getReachableAbstractHandleSetForValue(&value);
}

const std::string
Infoflow::kindFromImplicitSink(bool implicit, bool sink) const {
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

const std::string
Infoflow::stringFromValue(const Value &value){
  raw_string_ostream* valueStream;
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

const ConsElem &
Infoflow::getOrCreateConsElemSummarySource(const Value &value) {
  DenseMap<const Value *, const ConsElem *>::iterator curElem = summarySourceValueConstraintMap.find(&value);
  if (curElem == summarySourceValueConstraintMap.end()) {
      //errs() << "Created a constraint variable...\n";
      std::string name;
      if(value.hasName()) {
          name = value.getName();
      } else {
          name = stringFromValue(value);
      }
      const ConsElem & elem = kit->newVar(name);
      summarySourceValueConstraintMap.insert(std::make_pair(&value, &elem));
      return elem;
  } else {
      return *(curElem->second);
  }
}

void
Infoflow::putOrConstrainConsElemSummarySource(std::string kind, const Value &value, const ConsElem &lub) {
  //errs() << "Adding a constraint...\n";
  const ConsElem & current = getOrCreateConsElemSummarySource(value);
  kit->addConstraint(kind, lub, current);
}

const ConsElem &
Infoflow::getOrCreateConsElemSummarySink(const Value &value) {
  DenseMap<const Value *, const ConsElem *>::iterator curElem = summarySinkValueConstraintMap.find(&value);
  if (curElem == summarySinkValueConstraintMap.end()) {
      //errs() << "Created a constraint variable...\n";
      const ConsElem & elem = kit->newVar(value.getName());
      summarySinkValueConstraintMap.insert(std::make_pair(&value, &elem));
      return elem;
  } else {
      return *(curElem->second);
  }
}

void
Infoflow::putOrConstrainConsElemSummarySink(std::string kind, const Value &value, const ConsElem &lub) {
  //errs() << "Adding a constraint...\n";
  const ConsElem & current = getOrCreateConsElemSummarySink(value);
  kit->addConstraint(kind, lub, current);
}

const ConsElem &
Infoflow::getOrCreateConsElem(const ContextID ctxt, const Value &value) {
  DenseMap<const Value *, const ConsElem *> & valueMap = getOrCreateValueConstraintMap(ctxt);
  DenseMap<const Value *, const ConsElem *>::iterator curElem = valueMap.find(&value);
  if (curElem == valueMap.end()) {
      std::string identifier = "";
      if (value.hasName()){
          identifier = value.getName();
      } else {
          identifier = stringFromValue(value);
      }

      const ConsElem & elem = kit->newVar(identifier);
      valueMap.insert(std::make_pair(&value, &elem));

      // Hook up the summaries for non-context sensitive interface
      const ConsElem & summarySource = getOrCreateConsElemSummarySource(value);
      kit->addConstraint("default",summarySource,elem);
      putOrConstrainConsElemSummarySink("default", value, elem);
      return elem;
  } else {
      return *(curElem->second);
  }
}

void
Infoflow::putOrConstrainConsElem(bool implicit, bool sink, const ContextID ctxt, const Value &value, const ConsElem &lub) {
  const ConsElem & current = getOrCreateConsElem(ctxt, value);
  // errs() << "putOrConstrainConsElem:";
  // current.dump(errs()); errs() << " ";
  // lub.dump(errs()); errs() << "\n";
  kit->addConstraint(kindFromImplicitSink(implicit,sink), lub, current);
}

const ConsElem &
Infoflow::getOrCreateConsElem(const Value &value) {
  return getOrCreateConsElem(this->getCurrentContext(), value);
}

void
Infoflow::putOrConstrainConsElem(bool implicit, bool sink, const Value &value, const ConsElem &lub) {
  return putOrConstrainConsElem(implicit, sink, this->getCurrentContext(), value, lub);
}

DenseMap<const Function *, const ConsElem *> &
Infoflow::getOrCreateVargConstraintMap(const ContextID context) {
  return vargConstraintMap[context];
}

const ConsElem &
Infoflow::getOrCreateVargConsElemSummarySource(const Function &value) {
  DenseMap<const Function *, const ConsElem *>::iterator curElem = summarySourceVargConstraintMap.find(&value);
  if (curElem == summarySourceVargConstraintMap.end()) {
      //errs() << "Created a constraint variable...\n";
      const ConsElem & elem = kit->newVar(value.getName());
      summarySourceVargConstraintMap.insert(std::make_pair(&value, &elem));
      return elem;
  } else {
      return *(curElem->second);
  }
}

void
Infoflow::putOrConstrainVargConsElemSummarySource(std::string kind, const Function &value, const ConsElem &lub) {
  //errs() << "Adding a constraint...\n";
  const ConsElem & current = getOrCreateVargConsElemSummarySource(value);
  kit->addConstraint(kind, lub, current);
}

const ConsElem &
Infoflow::getOrCreateVargConsElemSummarySink(const Function &value) {
  DenseMap<const Function *, const ConsElem *>::iterator curElem = summarySinkVargConstraintMap.find(&value);
  if (curElem == summarySinkVargConstraintMap.end()) {
      //errs() << "Created a constraint variable...\n";
      const ConsElem & elem = kit->newVar(value.getName());
      summarySinkVargConstraintMap.insert(std::make_pair(&value, &elem));
      return elem;
  } else {
      return *(curElem->second);
  }
}

void
Infoflow::putOrConstrainVargConsElemSummarySink(std::string kind, const Function &value, const ConsElem &lub) {
  //errs() << "Adding a constraint...\n";
  const ConsElem & current = getOrCreateVargConsElemSummarySink(value);
  kit->addConstraint(kind, lub, current);
}

const ConsElem &
Infoflow::getOrCreateVargConsElem(const ContextID ctxt, const Function &value) {
  DenseMap<const Function *, const ConsElem *> & valueMap = getOrCreateVargConstraintMap(ctxt);
  DenseMap<const Function *, const ConsElem *>::iterator curElem = valueMap.find(&value);
  if (curElem == valueMap.end()) {
      const ConsElem & elem = kit->newVar(value.getName());
      valueMap.insert(std::make_pair(&value, &elem));

      // Hook up the summaries for non-context sensitive interface
      const ConsElem & summarySource = getOrCreateConsElemSummarySource(value);
      kit->addConstraint("default",summarySource,elem);
      putOrConstrainVargConsElemSummarySink("default", value, elem);

      return elem;
  } else {
      return *(curElem->second);
  }
}

void
Infoflow::putOrConstrainVargConsElem(bool implicit, bool sink, const ContextID ctxt, const Function &value, const ConsElem &lub) {
  const ConsElem & current = getOrCreateVargConsElem(ctxt, value);
  kit->addConstraint(kindFromImplicitSink(implicit,sink), lub, current);
}

const ConsElem &
Infoflow::getOrCreateVargConsElem(const Function &value) {
  return getOrCreateVargConsElem(this->getCurrentContext(), value);
}

void
Infoflow::putOrConstrainVargConsElem(bool implicit, bool sink, const Function &value, const ConsElem &lub) {
  return putOrConstrainVargConsElem(implicit, sink, this->getCurrentContext(), value, lub);
}

std::map<unsigned, const ConsElem *>
Infoflow::getOrCreateConsElemTyped(const AbstractLoc &loc, unsigned numElements, const Value* v) {
  DenseMap<const AbstractLoc *, std::map<unsigned, const ConsElem *>>::iterator curElem = locConstraintMap.find(&loc);
  if (curElem == locConstraintMap.end()) {
    std::string name = getCaption(&loc, NULL);

    if (v != NULL && !loc.isNodeCompletelyFolded()) {
      const GetElementPtrInst *gep = dyn_cast<GetElementPtrInst>(v);
      if (StructType* s = dyn_cast<StructType>(gep->getSourceElementType())){
        const DataLayout &TD = loc.getParentGraph()->getDataLayout();
        const StructLayout *SL = TD.getStructLayout(s);
        int index = 0;
        for(Type::subtype_iterator it = s->element_begin(); it != s->element_end(); ++it, ++index){
          unsigned start = SL->getElementOffset(index);
          unsigned end = start + TD.getTypeStoreSize(*it);
          std::string label = "[" + std::to_string(start) + "," + std::to_string(end) + "]";
          const ConsElem & elem = kit->newVar(name+label);
          locConstraintMap[&loc].insert(std::make_pair(start, &elem));
        }
        return locConstraintMap[&loc];
      } else if (numElements == 0) {
        numElements = 1;
      }
    } else if (numElements == 0){
      numElements = 1;
    }

    errs() << "Created " << numElements << " constraint variable(s) for node of size ";
    errs() << loc.getSize() << "\n";
    for(unsigned offset = 0; offset < numElements; offset++ ){
      const ConsElem & elem = kit->newVar(name+": elem " + std::to_string(offset) + "::");
      locConstraintMap[&loc].insert(std::make_pair(offset,&elem));
    }
    //locConstraintMap.insert(std::make_pair(&loc, &elem));

    return locConstraintMap[&loc];
  } else {
    return (curElem->second);
  }
}

std::map<unsigned, const ConsElem *>
Infoflow::getOrCreateConsElem(const AbstractLoc &loc) {
  DenseMap<const AbstractLoc *, std::map<unsigned, const ConsElem *>>::iterator curElem = locConstraintMap.find(&loc);
  if (curElem == locConstraintMap.end()) {
    std::string name = getCaption(&loc, NULL);
    unsigned size = loc.getSize()/4;
    size = (loc.getSize() % 4 == 0) ? size : size + 1;
    //errs() << "Created " << size << " constraint variable(s)...\n";
    for(unsigned offset = 0; offset < size; offset++ ){
      const ConsElem & elem = kit->newVar(name+": elem " + std::to_string(offset) + "::");
      locConstraintMap[&loc].insert(std::make_pair(offset,&elem));
    }

    return locConstraintMap[&loc];
  } else {
    return (curElem->second);
  }
}

void
Infoflow::putOrConstrainConsElem(bool implicit, bool sink, const AbstractLoc &loc, const ConsElem &lub) {
  std::map<unsigned, const ConsElem *> elemMap = getOrCreateConsElem(loc);
  for(std::map<unsigned, const ConsElem *>::iterator it = elemMap.begin(), itEnd= elemMap.end();
      it != itEnd; ++it){
    kit->addConstraint(kindFromImplicitSink(implicit,sink), lub, *(*it).second);
  }
}

void
Infoflow::putOrConstrainConsElemStruct(bool implicit, bool sink, const AbstractLoc &loc,const ConsElem &lub, unsigned offset, const Value* v) {
  unsigned numElements = 0;
  std::map<unsigned, const ConsElem *> elemMap = getOrCreateConsElemTyped(loc, numElements, v);
  if(elemMap.size() == 0)
    return;

  if(elemMap.find(offset) != elemMap.end()){
    const  ConsElem* elem = elemMap[offset];
    kit->addConstraint(kindFromImplicitSink(implicit,sink), lub, *elem);
  } else {
    errs() << "StructConstraint - elem not found\n";
  }
}
void
Infoflow::putOrConstrainConsElem(bool implicit, bool sink, const AbstractLoc &loc, const ConsElem &lub, unsigned offset, unsigned numElements) {
  std::map<unsigned, const ConsElem *> elemMap = getOrCreateConsElemTyped(loc, numElements);
  loc.dump();
  if(elemMap.size() == 0)
    return;

  if(loc.isNodeCompletelyFolded()){
    for(std::map<unsigned, const ConsElem *>::iterator it = elemMap.begin(), itEnd= elemMap.end();
        it != itEnd; ++it){
      DEBUG(errs() << "Adding " << elemMap.size() << " elements\n");
      kit->addConstraint(kindFromImplicitSink(implicit,sink), lub, *(*it).second);
    }
  } else {
    std::set<const ConsElem *> elems = findRelevantConsElem(&loc, elemMap, offset);
    for(std::set<const ConsElem*>::iterator i = elems.begin(); i != elems.end(); ++i){
      kit->addConstraint(kindFromImplicitSink(implicit,sink), lub, *(*i));
    }
  }
}

void
Infoflow::generateFunctionConstraints(const Function& f) {
    std::vector<FlowRecord> flows;
    for (Function::const_iterator bb = f.begin(), end = f.end(); bb != end; ++bb) {
      // Build constraints for basic blocks
      // The pc of the entry block will be tainted at any call sites
      generateBasicBlockConstraints(*bb, flows);
    }

    for (std::vector<FlowRecord>::iterator flow = flows.begin(), flowend = flows.end();
        flow != flowend; ++flow) {
      constrainFlowRecord(*flow);
    }
}

void
Infoflow::generateBasicBlockConstraints(const BasicBlock & bb, Flows & flows) {
    // Build constraints for instructions
    for (BasicBlock::const_iterator inst = bb.begin(), end = bb.end(); inst != end; ++inst) {
        getInstructionFlowsInternal(*inst, true, flows);
    }
}

void
Infoflow::constrainMemoryLocation(bool implicit, bool sink, const Value & value, const ConsElem & level) {
    const std::set<const AbstractLoc *> & locs = locsForValue(value);
    for (std::set<const AbstractLoc *>::iterator loc = locs.begin(), end = locs.end();
            loc != end ; ++loc) {
      // errs() << "Adding consElem: ";
      // (*loc)->dump(); errs() << " and ";
      // level.dump(errs()); errs() << "\n";
      putOrConstrainConsElem(implicit, sink, **loc, level);
    }
}

void
Infoflow::constrainReachableMemoryLocations(bool implicit, bool sink, const Value & value, const ConsElem & level) {
    const std::set<const AbstractLoc *> & locs = reachableLocsForValue(value);
    for (std::set<const AbstractLoc *>::iterator loc = locs.begin(), end = locs.end();
            loc != end ; ++loc) {
      // errs() << "Adding consElem: ";
      // (*loc)->dump(); errs() << " and ";
      // level.dump(errs()); errs() << "\n";
      putOrConstrainConsElem(implicit, sink, **loc, level);
    }
}

const ConsElem &
Infoflow::getOrCreateMemoryConsElem(const Value & value) {
    const ConsElem *join = NULL;
    const std::set<const AbstractLoc *> & locs = locsForValue(value);
    unsigned offset = 0;
    bool hasOffset = offsetForValue(value, &offset);
    // errs() << "getOrCreate: " << stringFromValue(value) << "\n";
    for (std::set<const AbstractLoc *>::iterator loc = locs.begin(), end = locs.end();
            loc != end ; ++loc) {
      std::map<unsigned, const ConsElem *> elemMap = getOrCreateConsElem(**loc);
      if(hasOffset){
        const ConsElem * elem = elemMap[offset];
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
Infoflow::getOrCreateReachableMemoryConsElem(const Value & value) {
  const ConsElem *join = NULL;
  const std::set<const AbstractLoc *> & locs = reachableLocsForValue(value);
  unsigned offset = 0;
  bool hasOffset = offsetForValue(value, &offset);
  // errs() << "getOrCreate2: " << stringFromValue(value) << "\n";
  for (std::set<const AbstractLoc *>::iterator loc = locs.begin(), end = locs.end();
       loc != end ; ++loc) {
    std::map<unsigned, const ConsElem *> elemMap = getOrCreateConsElem(**loc);
    if (hasOffset) {
      const ConsElem * elem = elemMap[offset];
      if (join == NULL) {
        join = elem;
      } else {
        join = &kit->upperBound(*join, *elem);
      }
    }
  }
  return *join;
}

FlowRecord
Infoflow::currentContextFlowRecord(bool implicit) const {
  const ContextID currentContext = this->getCurrentContext();
  return FlowRecord(implicit,currentContext,currentContext);
}

/// Helper function that computes the join of all operands to an instruction
/// and the pc, and then makes the result of the instruction at least as high.
void
Infoflow::operandsAndPCtoValue(const Instruction & inst, Flows &flows) {
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
}

void
Infoflow::constrainConditionalSuccessors(const TerminatorInst & term, FlowRecord & rec) {
    std::set<const BasicBlock *> visited;
    std::deque<const BasicBlock *> workqueue;
    const BasicBlock *bb = term.getParent();

    for (unsigned i = 0, end = term.getNumSuccessors(); i < end; ++i) {
        workqueue.push_back(term.getSuccessor(i));
    }

    PostDominatorTree &pdt = getAnalysis<PDTCache>().get(term.getParent()->getParent());

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

Flows
Infoflow::getInstructionFlows(const Instruction & inst) {
  Flows flows;
  getInstructionFlowsInternal(inst, false, flows);
  return flows;
}

void
Infoflow::getInstructionFlowsInternal(const Instruction & inst, bool callees,
                                      Flows & flows) {
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
    } else if (const ExtractElementInst *i = dyn_cast<ExtractElementInst>(&inst)) {
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

void
Infoflow::constrainUnaryInstruction(const UnaryInstruction & inst, Flows & flows)
{
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

void
Infoflow::constrainTerminatorInst(const TerminatorInst & inst, bool callees, Flows & flows)
{
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

/// AtomicRMWInst updates a memory location atomically by applying a fixed operation
/// to the current memory value and a value operand.
/// XXX pc, ptr, and operand to memory
void
Infoflow::constrainAtomicRMWInst(const AtomicRMWInst & inst, Flows & flows)
{
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
void
Infoflow::constrainAtomicCmpXchgInst(const AtomicCmpXchgInst & inst, Flows &flows)
{
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
void
Infoflow::constrainCmpInst(const CmpInst & inst, Flows & flows)
{
  return operandsAndPCtoValue(inst, flows);
}

/// 'select' instruction is used to choose one value based on a condition,
/// without branching. Flow from operands and pc to value.
void
Infoflow::constrainSelectInst(const SelectInst & inst, Flows & flows)
{
  return operandsAndPCtoValue(inst, flows);
}

/// Binary operators compute a result from two operands
/// Flow from pc and operands to result
void
Infoflow::constrainBinaryOperator(const BinaryOperator & inst, Flows & flows)
{
  return operandsAndPCtoValue(inst, flows);
}

/// Instructions in this category are the conversion instructions (casting)
/// which all take a single operand and a type. They perform various bit
/// conversions on the operand. Flow is from operands and pc to value.
void
Infoflow::constrainCastInst(const CastInst & inst, Flows & flows)
{
  return operandsAndPCtoValue(inst, flows);
}

///////////////////////////////////////////////////////////////////////////////
/// Control flow operations
///////////////////////////////////////////////////////////////////////////////

/// Value of PHI node depends on values of incoming edges (the operands)
/// and on pc.
void
Infoflow::constrainPHINode(const PHINode & inst, Flows & flows)
{
  return operandsAndPCtoValue(inst, flows);
}

/// Conditional branches cause a flow from the condition and pc to all
/// successors that do not post-dominate the current instruction.
void
Infoflow::constrainBranchInst(const BranchInst & inst, Flows & flows)
{
  // Only additional flow for conditional branch
  if (!inst.isConditional()) return;

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
/// the arguments indicate the full set of possible destinations that the address
/// may point to. Blocks are allowed to occur multiple times in the destination
/// list, though this isn't particularly useful.
///
/// Flow from the pc and address to the pc of all successor basic blocks (that
/// aren't post-dominators)
void
Infoflow::constrainIndirectBrInst(const IndirectBrInst & inst, Flows & flows)
{
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
void
Infoflow::constrainSwitchInst(const SwitchInst & inst, Flows & flows)
{
  FlowRecord flow = currentContextFlowRecord(true);
  // pc
  flow.addSourceValue(*inst.getParent());
  // condition
  flow.addSourceValue(*inst.getCondition());

  constrainConditionalSuccessors(inst, flow);

  flows.push_back(flow);
}

/// 'unreachable' instruction has no defined semantics. This instruction is used
/// to inform the optimizer that a particular portion of the code is not reachable.
/// Since this instruction is never executed and has no semantics, there is no flow.
void
Infoflow::constraintUnreachableInst(const UnreachableInst & inst, Flows & flows) {
  // Intentionally blank
}

///////////////////////////////////////////////////////////////////////////////
/// Memory operations
///////////////////////////////////////////////////////////////////////////////

/// Compute a pointer value, depending on the pc and operands.
void
Infoflow::constrainGetElementPtrInst(const GetElementPtrInst & inst, Flows & flows)
{
  return operandsAndPCtoValue(inst, flows);
}

/// Store a value into a memory location. Flow from pc, pointer value, and value
/// into the memory location. Has no return value.
void
Infoflow::constrainStoreInst(const StoreInst & inst, Flows & flows)
{
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
void
Infoflow::constrainLoadInst(const LoadInst & inst, Flows & flows)
{
  FlowRecord exp = currentContextFlowRecord(false);
  FlowRecord imp = currentContextFlowRecord(true);
  // pc
  imp.addSourceValue(*inst.getParent());
  // ptr
  //imp.addSourceValue(*inst.getPointerOperand());
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
void
Infoflow::constrainFenceInst(const FenceInst & inst, Flows & flows)
{
  // TODO: support for multi-threaded info. flow?
  assert(false && "Unsupported instruction type: fence");
}

/// 'alloca' instruction allocates memory on the stack frame of the currently
/// executing function, to be automatically released when this function returns
/// to its caller. Returns a pointer. Flow from pc and operands to value.
void
Infoflow::constrainAllocaInst(const AllocaInst & inst, Flows & flows)
{
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
void
Infoflow::constrainVAArgInst(const VAArgInst & inst, Flows & flows)
{
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
void
Infoflow::constrainShuffleVectorInst(const ShuffleVectorInst & inst, Flows & flows)
{
  return operandsAndPCtoValue(inst, flows);
}

/// The 'insertelement' instruction inserts a scalar element into a vector at
/// a specified index. The result is a vector of the same type as val. Its
/// element values are those of val except at position idx, where it gets the
/// value elt. If idx exceeds the length of val, the results are undefined.
/// Flow is from pc and all operands into the result.
void
Infoflow::constrainInsertElementInst(const InsertElementInst & inst, Flows & flows)
{
  return operandsAndPCtoValue(inst, flows);
}

/// The 'extractelement' instruction extracts a single scalar element from a
/// vector at a specified index. Flow is from operands and pc to value.
void
Infoflow::constrainExtractElementInst(const ExtractElementInst & inst, Flows & flows)
{
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
void
Infoflow::constrainInsertValueInst(const InsertValueInst & inst, Flows & flows)
{
  return operandsAndPCtoValue(inst, flows);
}

/// The 'extractvalue' instruction extracts the value of a member field from
/// an aggregate value. The first operand of an 'extractvalue' instruction is
/// a value of struct or array type. The operands are constant indices to
/// specify which value to extract. The result is the value at the position
/// in the aggregate specified by the index operands.
/// Flow from operands and pc to value. Note no need for abstract locs since
/// the aggregate is a value not a pointer.
void
Infoflow::constrainExtractValueInst(const ExtractValueInst & inst, Flows & flows)
{
  return operandsAndPCtoValue(inst, flows);
}

///////////////////////////////////////////////////////////////////////////////
/// Function invocation and exception handling
///////////////////////////////////////////////////////////////////////////////

void
Infoflow::constrainCallInst(const CallInst & inst, bool analyzeCallees, Flows & flows)
{
    // TODO: filter out and handle Intrinsics here instead of deferring
    // to the Signature mechanism...
  if (const IntrinsicInst *intr = dyn_cast<IntrinsicInst>(&inst)) {
    return constrainIntrinsic(*intr, flows);
  } else {
    return constrainCallSite(ImmutableCallSite(&inst), analyzeCallees, flows);
  }
}

void
Infoflow::constrainInvokeInst(const InvokeInst & inst, bool analyzeCallees, Flows & flows)
{
    constrainCallSite(ImmutableCallSite(&inst), analyzeCallees, flows);

    // Since an invoke instruction may not return to the same program point
    // there is an additional information flow to all nodes that are not
    // post-dominators

    // 1) pc of function should be at least as high as current pc + function pointer
    // Handle flow due to the possibility of multiple return sites
    FlowRecord flow = currentContextFlowRecord(true);
    // pc
    flow.addSourceValue(*inst.getParent());
    // condition
    flow.addSourceValue(*inst.getCalledValue());
    // Gather constraints
    constrainConditionalSuccessors(inst, flow);

    flows.push_back(flow);
}

void
Infoflow::constrainCallSite(const ImmutableCallSite & cs, bool analyzeCallees, Flows & flows) {
  // For all functions that could possibly be invoked by this call
  // 1) pc of function should be at least as high as current pc + function pointer
  // 2) levels of params should be as high as corresponding args
  // Result should be at least as high as the possible return values

  // Invoke the analysis on callees, if we're actually generating constraints
  // XXX HACK if we're not doing analysis on callees, we need to add any signature flows here
  if (analyzeCallees) {
    this->getCallResult(cs, Unit());
  } else if (usesExternalSignature(cs)) {
    Flows recs = signatureRegistrar->process(this->getCurrentContext(), cs);
    flows.insert(flows.end(), recs.begin(), recs.end());
  }

  std::set<std::pair<const Function *, const ContextID> > callees = this->invokableCode(cs);
  // Do constraints for each callee
  for (std::set<std::pair<const Function *, const ContextID> >::iterator callee = callees.begin(), end = callees.end();
       callee != end; ++callee) {
    constrainCallee((*callee).second, *((*callee).first), cs, flows);
  }
}

void
Infoflow::constrainCallee(const ContextID calleeContext, const Function & callee, const ImmutableCallSite & cs, Flows & flows) {
    const ContextID callerContext = this->getCurrentContext();

    // 1) pc of function should be at least as high as current pc + function pointer
    FlowRecord pcFlow = FlowRecord(true,callerContext, calleeContext);
    // caller pc
    pcFlow.addSourceValue(*cs->getParent());
    // caller ptr
    pcFlow.addSourceValue(*cs.getCalledValue());
    // to callee pc
    pcFlow.addSinkValue(callee.getEntryBlock());
    flows.push_back(pcFlow);

    // 2) levels of params should be as high as corresponding args
    unsigned int numArgs = cs.arg_size();
    unsigned int numParams = callee.arg_size();

    // Check arities for sanity...
    assert((!callee.isVarArg() || numArgs >= numParams)
	   && "variable arity function called with two few arguments");
    assert((callee.isVarArg() || numArgs == numParams)
	   && "function called with the wrong number of arguments");

    // The level of each non-vararg param should be as high as the corresponding argument
    Function::const_arg_iterator param = callee.arg_begin();
    for (unsigned int i = 0; i < numParams; i++) {
        FlowRecord argFlow = FlowRecord(false,callerContext, calleeContext);
	argFlow.addSourceValue(*cs.getArgument(i));
	argFlow.addSinkValue(*param);
	flows.push_back(argFlow);
	++param;
    }
    // The remaining arguments provide a bound on the vararg structure
    if (numArgs > numParams) {
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
        const TerminatorInst * terminator = block->getTerminator();
        if (terminator) {
	    if (const ReturnInst * retInst = dyn_cast<ReturnInst>(terminator)) {
	      FlowRecord retFlow = FlowRecord(false, calleeContext, callerContext);
		retFlow.addSourceValue(*retInst);
		retFlow.addSinkValue(*cs.getInstruction());
		flows.push_back(retFlow);
	    }
	}
    }

}

void
Infoflow::constrainReturnInst(const ReturnInst & inst, Flows & flows)
{
  if (inst.getNumOperands() != 0) {
    operandsAndPCtoValue(inst, flows);
  }
}


// TODO: Revisit and understand this instruction. Something to do with exception handling.
void
Infoflow::constrainLandingPadInst(const LandingPadInst & inst, Flows & flows)
{
    return operandsAndPCtoValue(inst, flows);
}

// TODO: Revisit and correct
void
Infoflow::constrainResumeInst(const ResumeInst & inst, Flows & flows)
{
    return operandsAndPCtoValue(inst, flows);
}

///////////////////////////////////////////////////////////////////////////////
/// Intrinsics
///////////////////////////////////////////////////////////////////////////////

void
constrainMemcpyOrmove(const IntrinsicInst & intr, Flows & flows) {
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

void
constrainMemset(const IntrinsicInst & intr, Flows & flows) {
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

void
Infoflow::constrainIntrinsic(const IntrinsicInst & intr, Flows & flows) {
  switch (intr.getIntrinsicID()) {
  // Vararg intrinsics
  case Intrinsic::vastart:
  case Intrinsic::vaend:
  case Intrinsic::vacopy:
    // These should be nops because the actual flows are taken care of as part
    // of function invocation and the va_arg instruction
    return ;
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
    DEBUG(errs() << "Unsupported intrinsic: " << Intrinsic::getName(intr.getIntrinsicID()) << "\n");
  }
}


// TODO: Update this function to provide information as getCaption does
// for DSNode input.
std::string getCaption(const AbstractHandle *NH, const DSGraph *G) {
  const AbstractHandle NH2 = *NH;
  const AbstractLoc * N = NH->getNode();
  return "NH: " + getCaption(N,G);
}

std::string getCaption(const AbstractLoc *N, const DSGraph *G) {
  std::string empty;
  raw_string_ostream OS(empty);
  const Module *M = 0;

  if (!G) G = N->getParentGraph();

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
           ee = N->type_end(); ii != ee; ++ii) {
        OS << ii->first << ": ";
        if (ii->second)
          for (svset<Type*>::const_iterator ni = ii->second->begin(),
               ne = ii->second->end(); ni != ne; ++ni) {
            Type * t = *ni;
            t->print (OS);
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
    if (NodeType & DSNode::AllocaNode       ) OS << "S";
    if (NodeType & DSNode::HeapNode         ) OS << "H";
    if (NodeType & DSNode::GlobalNode       ) OS << "G";
    if (NodeType & DSNode::UnknownNode      ) OS << "U";
    if (NodeType & DSNode::IncompleteNode   ) OS << "I";
    if (NodeType & DSNode::ModifiedNode     ) OS << "M";
    if (NodeType & DSNode::ReadNode         ) OS << "R";
    if (NodeType & DSNode::ExternalNode     ) OS << "E";
    if (NodeType & DSNode::ExternFuncNode   ) OS << "X";
    if (NodeType & DSNode::IntToPtrNode     ) OS << "P";
    if (NodeType & DSNode::PtrToIntNode     ) OS << "2";
    if (NodeType & DSNode::VAStartNode      ) OS << "V";

#ifndef NDEBUG
    if (NodeType & DSNode::DeadNode       ) OS << "<dead>";
#endif
  }

  //Indicate if this is a VANode for some function
  for (DSGraph::vanodes_iterator I = G->vanodes_begin(), E = G->vanodes_end();
      I != E; ++I) {
    DSNodeHandle VANode = I->second;
    if (N == VANode.getNode()) {
      OS << "(VANode for " << I->first->getName().str() << ")\n";
    }
  }

  EquivalenceClasses<const GlobalValue*> *GlobalECs = 0;
  if (G) GlobalECs = &G->getGlobalECs();

  for (DSNode::globals_iterator i = N->globals_begin(), e = N->globals_end(); 
       i != e; ++i) {
    (*i)->print(OS);

    // Figure out how many globals are equivalent to this one.
    if (GlobalECs) {
      EquivalenceClasses<const GlobalValue*>::iterator I =
        GlobalECs->findValue(*i);
      if (I != GlobalECs->end()) {
        unsigned NumMembers =
          std::distance(GlobalECs->member_begin(I), GlobalECs->member_end());
        if (NumMembers != 1) OS << " + " << (NumMembers-1) << " EC";
      }
    }
  }
  return OS.str();
}

std::tuple<std::string, int, std::string>
Infoflow::parseTaintString(std::string line) {
  std::tuple<std::string, int, std::string> ret;
  // Move any extra whitespace to end
  std::string::iterator new_end = unique(line.begin(), line.end(), [] (const char &x, const char &y) {
      return x == y and x == ' ';
    });

  // Remove the extra space
  line.erase(new_end, line.end());

  // Delete Trailing White space
  while (line[line.length() - 1]  == ' ') {
    line.pop_back();
  }

  // Split up line
  std::vector<std::string> splits;
  char delimiter = ' ';

  size_t i  = 0;
  size_t pos = line.find(delimiter);

  while (pos != std::string::npos) {
    splits.push_back(line.substr(i, pos-i));
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

void
Infoflow::removeConstraint(std::string kind, std::tuple<std::string, int, std::string> match) {
  errs() << "Removing values tied to " << std::get<0>(match) << "\n";
  for (DenseMap<const Value *, const ConsElem *>::const_iterator entry = summarySourceValueConstraintMap.begin(),
         end = summarySourceValueConstraintMap.end(); entry != end; ++entry) {
    const Value & value = *(entry->first);

    std::string s;
    llvm::raw_string_ostream* ss = new llvm::raw_string_ostream(s);
    *ss << value; // dump value info to ss
    ss->str(); // flush stream to s

    std::string match_name;
    int t_offset;
    std::string fn_name;
    std::tie(match_name, t_offset, fn_name) = match;

    const Function * fn = findEnclosingFunc(&value);
    bool function_matches = false;
    if(fn_name.size() == 0 || (fn && fn->hasName() && fn->getName() == fn_name)) {
      function_matches = true;
    }

    if(function_matches  && value.hasName() && value.getName() == match_name) {
      const std::set<const AbstractLoc *> &locs = locsForValue(value);
      for(std::set<const AbstractLoc* >::const_iterator loc = locs.begin(), end = locs.end(); loc != end; ++loc) {
        DenseMap<const AbstractLoc *, std::map<unsigned, const ConsElem *>>::iterator curElem = locConstraintMap.find(*loc);

        std::map<unsigned, const ConsElem *> elemMap;
        if (curElem != locConstraintMap.end()) {
          elemMap = curElem->second;
        }

        if (t_offset >= 0) {
          // Check if we are loading from a pointer.
          bool linkExists = false;
          if(curElem->first->getSize() > 0)
            linkExists = curElem->first->hasLink(0);

          if (linkExists) {
            // If the value is a pointer, use pointsto analysis to resolve the target
            const DSNodeHandle nh = curElem->first->getLink(0);
            const AbstractLoc * node = nh.getNode();
            errs() << "Linked Node";
            node->dump();
            DenseMap<const AbstractLoc *, std::map<unsigned, const ConsElem *>>::iterator childElem = locConstraintMap.find(node);

            // Instead look at this set of constraint elements
            elemMap = childElem->second;
          }

          // Remove the relevant constraint
          removeConstraintFromIndex(kind, *loc, &value, elemMap, t_offset);
        } else {
          // Removes any constraints tied to that AbstractLoc
          for(std::map<unsigned, const ConsElem *>::iterator it = elemMap.begin(), itEnd= elemMap.end();
              it != itEnd; ++it){
            const ConsElem * e = it->second;
            kit->removeConstraintRHS(kind, *e);
          }
        }
      }
    } else if (s.find(match_name) == 0 ) {
      errs() << "Removing constraint ";
      const ConsElem & elem = *(entry->second);
      elem.dump(errs());
      errs() << "\n";
      kit->removeConstraintRHS(kind, elem);
    }
  }
}

void
Infoflow::constrainAllConsElem(std::string kind, std::map<unsigned, const ConsElem*> elemMap) {
  //errs() << "Tainting all constraint elements from value\n";
  for(std::map<unsigned, const ConsElem*>::iterator it = elemMap.begin(), end = elemMap.end(); it != end; ++it){
    //it->second->dump(errs());
    kit->addConstraint(kind, kit->highConstant(), *(it->second));
  }
}
void
Infoflow::constrainAllConsElem(std::string kind, std::set<const ConsElem*> elems) {
  //errs() << "Tainting all constraint elements from value\n";
  for(std::set<const ConsElem*>::iterator it = elems.begin(), end = elems.end(); it != end; ++it){
    //(*it)->dump(errs());
    kit->addConstraint(kind, kit->highConstant(), *(*it));
  }
}


// Converts a value and extracts the structure type
// If there are multiple levels of pointers, traverses all the way down to root
// and returns the structure type at the root
StructType* convertValueToStructType(const Value * v) {
  Type* t = v->getType();
  StructType* st = NULL;
  while (t->isPointerTy()){
    size_t subTypeLength = t->subtypes().size();
    if (subTypeLength == 1) {
      t = t->getContainedType(0);
      if((st = dyn_cast<StructType>(t))){
        st->dump();
      }
    } else {
      errs() << "Type has multiple subtypes, unclear how to proceed.\n";
    }
  }
  return st;
}

void Infoflow::constrainOffsetFromIndex(std::string kind, const AbstractLoc* loc, const Value * v, std::map<unsigned, const ConsElem*> elemMap, int fieldIdx) {
  if (StructType* st = convertValueToStructType(v)) {
    unsigned offset = findOffsetFromFieldIndex(st, (unsigned) fieldIdx, loc);
    errs() << "Index " << fieldIdx << "->" << offset << "\n";
    if (elemMap.find(offset) != elemMap.end()){
      const ConsElem * elem = elemMap[offset];
      errs() << "Setting high constant to " << offset << ":";
      //it->second->dump(errs());
      elem->dump(errs());
      errs() << "\n";
      kit->addConstraint(kind, kit->highConstant(), *elem);
    } else {
      constrainAllConsElem(kind,elemMap);
    }
  } else if(const AllocaInst *al = dyn_cast<AllocaInst>(v)){
    if (isa<ArrayType>(al->getAllocatedType())) {
      const ConsElem * elem = elemMap[fieldIdx];
      // If it is not a heap array the elemMap should have the same number of elements as the array
      // So just taint that one otherwise taint all elements in the map
      if (elemMap.size() > (unsigned) fieldIdx) {
        kit->addConstraint(kind, kit->highConstant(), *elem);
      }else {
        constrainAllConsElem(kind, elemMap);
      }
    }
  }

}

void Infoflow::removeConstraintFromIndex(std::string kind, const AbstractLoc* loc, const Value * v, std::map<unsigned, const ConsElem*> elemMap, int fieldIdx){
  DEBUG(errs() << "Looking for field " << fieldIdx << " in ");
  v->dump();
  if (StructType* st = convertValueToStructType(v)) {
    unsigned offset = findOffsetFromFieldIndex(st, (unsigned) fieldIdx, loc);
    std::set<const ConsElem*> elems = findRelevantConsElem(loc, elemMap, offset);
    for(std::set<const ConsElem*>::iterator i = elems.begin(); i != elems.end(); ++i)
      kit->removeConstraintRHS(kind, **i);
  }
}
const ConsElem * findConsElemAtOffset(std::map<unsigned, const ConsElem *> elemMap, unsigned offset){
  if (elemMap.find(offset) != elemMap.end()) {
    return elemMap[offset];
  }

  const ConsElem * elem = NULL;
  const ConsElem * lastElem = NULL;
  bool elemAdded = false;

  errs() << "No direct element at offset..searching\n";

  for(std::map<unsigned, const ConsElem *>::iterator it = elemMap.begin(), itEnd= elemMap.end();
      it != itEnd; ++it){
    if((*it).first > offset && !elemAdded && lastElem != NULL){
      elem = lastElem;
      elemAdded = true;
    }
    if((*it).second != NULL){
      lastElem = (*it).second;
    }
  }

  if(!elemAdded && lastElem != NULL){
    elem = lastElem;
  }

  return elem;
}

}


#endif
