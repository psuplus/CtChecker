//===-- BLConstraint.h ------------------------------------------*- C++ -*-===//
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

#ifndef BLCONSTRAINT_H_
#define BLCONSTRAINT_H_

#include "llvm/ADT/DenseMap.h"

namespace deps {

class ConsElem;

class BLConstraint {
public:
  BLConstraint(const ConsElem &lhs, const ConsElem &rhs)
      : left(&lhs), right(&rhs) {}
  BLConstraint(const ConsElem *lhs, const ConsElem *rhs)
      : left(lhs), right(rhs) {}
  const ConsElem &lhs() const { return *left; }
  const ConsElem &rhs() const { return *right; }

private:
  const ConsElem *left;
  const ConsElem *right;
  friend struct llvm::DenseMapInfo<BLConstraint>;
};

} // namespace deps

#endif
