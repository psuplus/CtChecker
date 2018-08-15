#include <fstream>

#include "TaintAnalysisBase.h"
#include "ValueToStruct.h"

using namespace llvm;
namespace deps {

const Function* findEnclosingFunc(const Value* V) {
  if (const Argument* Arg = dyn_cast<Argument>(V)) {
    return Arg->getParent();
  }
  if (const Instruction* I = dyn_cast<Instruction>(V)) {
    return I->getParent()->getParent();
  }
  return NULL;
}

bool TaintAnalysisBase::hasPointerTarget(const AbstractLoc * loc) {
  bool linkExists = false;
  if (loc->getSize() > 0)
    linkExists = loc->hasLink(0);

  if(linkExists)
    linkExists = loc->getLink(0).getNode()->getSize() > 0;

  return linkExists;
}

std::map<unsigned, const ConsElem *> TaintAnalysisBase::getPointerTarget(const AbstractLoc * loc) {
    // If the value is a pointer, use pointsto analysis to resolve the target
    const DSNodeHandle nh = loc->getLink(0);
    const AbstractLoc * node = nh.getNode();
    errs() << "Linked Node";
    if ( node == NULL || node->getSize () == 0)
      return std::map<unsigned, const ConsElem *>();

    node->dump();
    DenseMap<const AbstractLoc *, std::map<unsigned, const ConsElem *>>::iterator childElem = ifa->locConstraintMap.find(node);
    // Instead look at this set of constraint elements
    return childElem->second;
}

void TaintAnalysisBase::constrainValue(std::string kind, const Value & value, int t_offset, std::string match_name) {

  std::string s = value.getName();
  const std::set<const AbstractLoc *> & locs = ifa->locsForValue(value);
  if(locs.size() == 0) {
    ifa->setTainted(kind,value);
  }

  unsigned offset = 0;
  //errs() << "Trying to get offset.. for  "<< s << "\n";
  bool hasOffset = ifa->offsetForValue(value, &offset);
  unsigned numElements = getNumElements(value);
  value.dump();
  errs() << " has " << numElements << " elements.\n";


  if ( !ifa->offset_used ){
    t_offset = -1; // if offset is disabled ignore offset from taintfile
    hasOffset = false;
  }


  std::set<const AbstractLoc *>::const_iterator loc = locs.begin();
  std::set<const AbstractLoc *>::const_iterator end = locs.end();


  for(;loc != end; ++loc){

    std::set<const ConsElem *> elementsToConstrain;
    if (t_offset >= 0 ) {
      offset = fieldIndexToByteOffset(t_offset, &value, *loc);
      hasOffset = true;
    }

    if(hasOffset)
      elementsToConstrain = gatherRelevantConsElems(*loc, offset, numElements);

    errs() << "Number of elements to constrain: " << elementsToConstrain.size() << "\n";
    ifa->constrainAllConsElem(kind, value, elementsToConstrain);

  }
}


std::set<const ConsElem *>
TaintAnalysisBase::gatherRelevantConsElems(const AbstractLoc * node, unsigned offset, unsigned numElements) {
  DenseMap<const AbstractLoc *, std::map<unsigned, const ConsElem *> >::iterator curElem = ifa->locConstraintMap.find(node);
  std::map<unsigned, const ConsElem *> elemMap;
  std::set<const ConsElem *> relevant;
  if(curElem == ifa->locConstraintMap.end())
    return relevant;

  elemMap = curElem->second;
  if(hasPointerTarget(node)){
    elemMap = getPointerTarget(node);
  }

  if(numElements == elemMap.size()) {
    relevant = ifa->findRelevantConsElem(node, elemMap, offset);
  }

  return relevant;

}
/** Taint a Value whose name matches s */
void
TaintAnalysisBase::taintStr (std::string kind, std::tuple<std::string,int,std::string> match) {
  for (DenseMap<const Value *, const ConsElem *>::const_iterator entry = ifa->summarySourceValueConstraintMap.begin(), end = ifa->summarySourceValueConstraintMap.end(); entry != end; ++entry) {
    const Value& value = *(entry->first);

    // errs() << "Visiting ";
    // value.dump();
    std::string match_name;
    int t_offset;
    std::string fn_name;
    std::tie(match_name, t_offset, fn_name) = match;

    // Only taint variables defined in taint files if the function matches
    const Function * fn = findEnclosingFunc(&value);
    bool function_matches = false;
    if(fn_name.size() == 0 || (fn && fn->hasName() && fn->getName() == fn_name)) {
      function_matches = true;
    }

    if (function_matches && value.hasName() && value.getName() == match_name ) {
      constrainValue(kind, value, t_offset, match_name);
    } else {
      std::string s;
      llvm::raw_string_ostream* ss = new llvm::raw_string_ostream(s);
      *ss << value; // dump value info to ss
      ss->str(); // flush stream to s
      if (s.find(match_name) == 0 && function_matches) {// test if the value's content starts with match
        ifa->setTainted(kind, value);
        errs() << "Match Detected for " << s  << "\n";
      }
    }
  }
  errs() << "DONE\n";
}

unsigned
TaintAnalysisBase::fieldIndexToByteOffset(int index, const Value * v, const AbstractLoc * loc) {
  unsigned offset = 0;
  if(StructType * st = convertValueToStructType(v)){
    offset = ifa->findOffsetFromFieldIndex(st, index, loc);
  } else if (const AllocaInst * al = dyn_cast<AllocaInst> (v)) {
    if(isa<ArrayType>(al->getAllocatedType())){
      offset = index;
    }
  }
  return offset;
}


void
TaintAnalysisBase::loadTaintFile(std::string filename) {
  loadTaintUntrustFile("taint", filename);
}

void
TaintAnalysisBase::loadUntrustFile(std::string filename) {
  loadTaintUntrustFile("untrust", filename);
}

void
TaintAnalysisBase::loadTaintUntrustFile(std::string kind, std::string filename) {
  std::ifstream infile(filename); // read tainted values from txt file
  std::string line;
  while (std::getline(infile, line)) {
    std::tuple<std::string, int, std::string> match = ifa->parseTaintString(line);
    taintStr (kind, match);
  }
}

unsigned
TaintAnalysisBase::getNumElements(const Value & value) {

  if(const GetElementPtrInst *gep = dyn_cast<GetElementPtrInst>(&value)) {
    return gep->getNumIndices();
  }

  Type * t = value.getType();
  // If necessary strip pointers away
  while(t->isPointerTy()){
    t = t->getContainedType(0);
  }

  if(StructType * structType = dyn_cast<StructType>(t)){
    return structType->getNumElements();
  } else if (ArrayType * arrayType = dyn_cast<ArrayType>(t)){
    return arrayType->getNumElements();
  }

  return 1;
}

}
