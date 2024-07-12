#include "llvm/IR/DebugInfoMetadata.h"
#include "llvm/IR/InstVisitor.h"

using namespace llvm;

namespace deps {

class DbgInstVisitor : public InstVisitor<DbgInstVisitor> {
public:
  void visitDbgDeclareInst(DbgDeclareInst &I);

  void visitDbgValueInst(DbgValueInst &I);

  void collectDbgInstructions(const Function &F);

  const std::vector<DbgValueInst *> &getDbgValueInstructions() const {
    return dbgValueInstructions;
  }

  const std::vector<DbgDeclareInst *> &getDbgDeclareInstructions() const {
    return dbgDeclareInstructions;
  }

private:
  std::vector<DbgDeclareInst *> dbgDeclareInstructions;
  std::vector<DbgValueInst *> dbgValueInstructions;
};

} // namespace deps