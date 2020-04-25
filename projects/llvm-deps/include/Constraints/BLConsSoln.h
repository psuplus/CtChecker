//===-- BLConsSoln.h --------------------------------------------*- C++ -*-===//
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

#ifndef BLCONSSOLN_H_
#define BLCONSSOLN_H_

#include "Constraints/BLConstraints.h"
#include "Constraints/ConstraintKit.h"

#include "llvm/ADT/DenseMap.h"
#include "llvm/ADT/DenseSet.h"

#include <deque>
#include <map>
#include <set>
#include <vector>

namespace deps {

class BLConstraint;
class BLConstant;
class BLConstraintKit;

class BLConsSoln : public ConsSoln {
public:
  BLConsSoln(BLConstraintKit &kit, const BLConstant &defaultValue,
             std::vector<const BLConstraint *> *constraints);
  virtual const BLConstant &subst(const ConsElem &elem);

protected:
  BLConstraintKit &kit;

  const BLConstant &defaultValue;
  std::vector<const BLConstraint *> *constraints;

  std::deque<const BLConstraint *> queue;
  llvm::DenseSet<const BLConstraint *> queueSet;

  llvm::DenseSet<const ConsVar *> changed;
  bool solved;

  void solve(void);
  void enqueueConstraints(const std::vector<const BLConstraint *> &constraints);
  const BLConstraint &dequeueConstraint(void);

  virtual ~BLConsSoln();
  virtual void releaseMemory() = 0;
  virtual void satisfyConstraint(const BLConstraint &constraint,
                                 const ConsElem &left,
                                 const ConsElem &right) = 0;
};

class BLConsGreatestSoln : public BLConsSoln {
  llvm::DenseMap<const ConsVar *, std::vector<const BLConstraint *>>
      invalidIfDecreased;
  std::vector<const BLConstraint *> &
  getOrCreateInvalidIfDecreasedSet(const ConsVar *var);
  void addInvalidIfDecreased(const ConsVar *var, const BLConstraint *c);

public:
  BLConsGreatestSoln(BLConstraintKit &kit,
                     std::vector<const BLConstraint *> *constraints);

protected:
  virtual void satisfyConstraint(const BLConstraint &constraint,
                                 const ConsElem &left, const ConsElem &right);
  virtual void releaseMemory() { invalidIfDecreased.clear(); }
};

class BLConsLeastSoln : public BLConsSoln {
  llvm::DenseMap<const ConsVar *, std::vector<const BLConstraint *>>
      invalidIfIncreased;
  std::vector<const BLConstraint *> &
  getOrCreateInvalidIfIncreasedSet(const ConsVar *var);
  void addInvalidIfIncreased(const ConsVar *var, const BLConstraint *c);

public:
  BLConsLeastSoln(BLConstraintKit &kit,
                  std::vector<const BLConstraint *> *constraints);

protected:
  virtual void satisfyConstraint(const BLConstraint &constraint,
                                 const ConsElem &left, const ConsElem &right);
  virtual void releaseMemory() { invalidIfIncreased.clear(); }
};

} // namespace deps

#endif /* BLCONSSOLN_H_ */
