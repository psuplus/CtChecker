#include "llvm/IR/InstVisitor.h"
#include "llvm/IR/DebugInfoMetadata.h"
#include "DbgInstVisitor.h"

using namespace llvm;

namespace deps {

void DbgInstVisitor::visitDbgDeclareInst(DbgDeclareInst &I) {
    dbgDeclareInstructions.push_back(&I);
}

void DbgInstVisitor::visitDbgValueInst(DbgValueInst &I) {
    dbgValueInstructions.push_back(&I);
}

void DbgInstVisitor::collectDbgInstructions(const Function &F) {
    visit(const_cast<Function &>(F));
}

}