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

#include "llvm/ADT/DenseMap.h"

namespace deps {

class ConsElem;

class RLConstraint {
public:
  RLConstraint(const ConsElem &lhs, const ConsElem &rhs)
      : left(&lhs), right(&rhs) {}
  RLConstraint(const ConsElem *lhs, const ConsElem *rhs)
      : left(lhs), right(rhs) {}
  const ConsElem &lhs() const { return *left; }
  const ConsElem &rhs() const { return *right; }

private:
  const ConsElem *left;
  const ConsElem *right;
  friend struct llvm::DenseMapInfo<RLConstraint>;
};

} // namespace deps

#endif /* RLCONSTRAINT_H_ */
