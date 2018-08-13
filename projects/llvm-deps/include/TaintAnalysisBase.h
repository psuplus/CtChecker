#ifndef TAINT_ANALYSIS_BASE_H
#define TAINT_ANALYSIS_BASE_H

#include "Infoflow.h"

using namespace llvm;

namespace deps {

class Infoflow;

class TaintAnalysisBase {
private:
  Infoflow * ifa;
public:
  void taintStr(std::string, std::tuple<std::string,int,std::string>);

  bool hasPointerTarget(const AbstractLoc *loc);

  std::map<unsigned, const ConsElem *> getPointerTarget(const AbstractLoc * loc);

  void constrainValue(std::string kind, const Value &, int, std::string);

  void setInfoflow(Infoflow * flow){
    ifa = flow;
  }

};

}

#endif
