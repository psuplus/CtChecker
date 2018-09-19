#ifndef TAINT_ANALYSIS_BASE_H
#define TAINT_ANALYSIS_BASE_H

#include "Infoflow.h"

using namespace llvm;

namespace deps {

class Infoflow;

class TaintAnalysisBase {
private:
  Infoflow * ifa;
protected:
  void taintStr(std::string, std::tuple<std::string,int,std::string>);

  bool hasPointerTarget(const AbstractLoc *loc);
  const AbstractLoc * getPointerTarget(const AbstractLoc * loc);

  std::map<unsigned, const ConsElem *> getConstraintMap(const AbstractLoc * loc);

  void constrainValue(std::string kind, const Value &, int, std::string);

  unsigned getNumElements(const Value & v);

  unsigned fieldIndexToByteOffset(int index, const Value *, const AbstractLoc *);

  std::set<const ConsElem *>gatherRelevantConsElems(const AbstractLoc *, unsigned, unsigned);

public:
  void setInfoflow(Infoflow * flow){
    ifa = flow;
  }

  void loadTaintFile(std::string filename = "taint.txt");
  void loadUntrustFile(std::string filnemae = "untrust.txt");
  void loadTaintUntrustFile(std::string, std::string);

};

}

#endif
