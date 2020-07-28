//===-- LHConstraint.h ------------------------------------------*- C++ -*-===//
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

#ifndef LHCONSTRAINT_H_
#define LHCONSTRAINT_H_

#include "LHConstraints.h"

#include "llvm/ADT/DenseMap.h"
#include "llvm/Support/Casting.h"

namespace deps {

class ConsElem;

class LHConstraint {
private:
  void printCosntraint(const ConsElem &lhs, const ConsElem &rhs) {
    if (llvm::isa<LHConstant>(&lhs)) {
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
    if (llvm::isa<LHConstant>(&rhs)) {
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
  LHConstraint(const ConsElem &lhs, const ConsElem &rhs, bool implicit)
      : left(&lhs), right(&rhs) {
    if (!implicit)
      printCosntraint(lhs, rhs);
  }

  LHConstraint(const ConsElem *lhs, const ConsElem *rhs, bool implicit)
      : left(lhs), right(rhs) {
    if (!implicit)
      printCosntraint(*lhs, *rhs);
  }

  const ConsElem &lhs() const { return *left; }
  const ConsElem &rhs() const { return *right; }

private:
  const ConsElem *left;
  const ConsElem *right;
  friend struct llvm::DenseMapInfo<LHConstraint>;
};

} // namespace deps

#endif /* LHCONSTRAINT_H_ */
