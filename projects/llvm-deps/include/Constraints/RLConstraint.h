//===-- RLConstraint.h ------------------------------------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// TODO Description
//
//===----------------------------------------------------------------------===//

#ifndef RLCONSTRAINT_H_
#define RLCONSTRAINT_H_

#include "RLConstraints.h"

#include "llvm/ADT/DenseMap.h"
#include "llvm/Support/Casting.h"

namespace deps {

class ConsElem;
class Predicate;

class RLConstraint {
private:
  void printCosntraint(const ConsElem &lhs, const ConsElem &rhs,
                       const Predicate &pred) {
    pred.dump();
    if (llvm::isa<RLConstant>(&lhs)) {
      std::string constant;
      llvm::raw_string_ostream *ss = new llvm::raw_string_ostream(constant);
      lhs.dump(*ss);
      ss->str();
      llvm::errs() << constant;
    } else {
      llvm::errs() << "CE" << &lhs; // address
      llvm::errs() << "[";
      lhs.dump(llvm::errs()); // description
      llvm::errs() << "]";
    }
    llvm::errs() << " <: ";
    if (llvm::isa<RLConstant>(&rhs)) {
      std::string constant;
      llvm::raw_string_ostream *ss = new llvm::raw_string_ostream(constant);
      rhs.dump(*ss);
      ss->str();
      llvm::errs() << constant;
    } else {
      llvm::errs() << "CE" << &rhs;
      llvm::errs() << "[";
      rhs.dump(llvm::errs());
      llvm::errs() << "]";
    }
  }

public:
  RLConstraint(const ConsElem &lhs, const ConsElem &rhs, const Predicate &pred,
               bool implicit)
      : left(&lhs), right(&rhs), pred(&pred), implicit(implicit) {
    if (!implicit)
      printCosntraint(lhs, rhs, pred);
  }
  RLConstraint(const ConsElem *lhs, const ConsElem *rhs, const Predicate *pred,
               bool implicit)
      : left(lhs), right(rhs), pred(pred), implicit(implicit) {
    if (!implicit)
      printCosntraint(*lhs, *rhs, *pred);
  }
  const ConsElem &lhs() const { return *left; }
  const ConsElem &rhs() const { return *right; }
  const Predicate &predicate() const { return *pred; }

private:
  const ConsElem *left;
  const ConsElem *right;
  const Predicate *pred;
  bool implicit;
  friend struct llvm::DenseMapInfo<RLConstraint>;
};

} // namespace deps

#endif /* RLCONSTRAINT_H_ */
