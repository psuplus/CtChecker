#ifndef TAINT_ANALYSIS_BASE_H
#define TAINT_ANALYSIS_BASE_H

#include "Infoflow.h"
#include "llvm/ADT/Statistic.h"

using namespace llvm;

namespace deps {

class Infoflow;
class ConfigVariable;

class TaintAnalysisBase {
private:
  Infoflow *ifa;

  // performance optimizing variables
  bool valueMapLock = false;
  std::map<std::pair<std::string, std::string>, std::set<const Value *>>
      localVarValueMap;
  std::map<std::string, std::set<const Value *>> varValueMap;

protected:
  bool hasPointerTarget(const AbstractLoc *loc);

  std::map<unsigned, const ConsElem *> getPointerTarget(const AbstractLoc *loc);

  void constrainValue(std::string kind, const Value &, int, std::string,
                      RLLabel);

  unsigned getNumElements(const Value &v);

  unsigned fieldIndexToByteOffset(int index, const Value *,
                                  const AbstractLoc *);

  std::set<const ConsElem *> gatherRelevantConsElems(const AbstractLoc *,
                                                     unsigned, unsigned,
                                                     const Value &, bool);

public:
  void getOrCreateLocalVarValueMap();

  void setInfoflow(Infoflow *flow) { ifa = flow; }

  void labelValue(std::string, std::set<ConfigVariable>, bool);

  void labelSink(std::string);
};

} // namespace deps

#endif
