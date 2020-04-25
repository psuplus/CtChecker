//===-- constraints/BLConstraintKit.h - Bell-LaPadula Lattice Solver -------*-
// C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file declares a concrete constraint solver for solving constraints
// over the lattice introduced by the Bell-LaPadula security model.
//
//===----------------------------------------------------------------------===//

#ifndef BLCONSTRAINTKIT_H_
#define BLCONSTRAINTKIT_H_

#include "Constraints/BLConstraint.h"
#include "Constraints/ConstraintKit.h"

#include "llvm/ADT/DenseSet.h"
#include "llvm/ADT/StringMap.h"

#include <map>
#include <set>
#include <vector>

namespace deps {

class BLConstant;
class BLConsVar;
class BLJoin;
class PartialSolution;

class BLConstraintKit : public ConstraintKit {
public:
  BLConstraintKit();
  ~BLConstraintKit();

  const ConsElem &consElemConstant() const;

  /// Create a new constraint variable
  virtual const ConsVar &newVar(const std::string description);
  /// Create a new constraint element by taking the upper bound of two
  /// existing elements
  virtual const ConsElem &upperBound(const ConsElem &e1, const ConsElem &e2);
  /// Create a new constraint element by taking the upper bound of two
  /// existing elements. Arguments and return type may be null.
  virtual const ConsElem *upperBound(const ConsElem *e1, const ConsElem *e2);
  /// Create a new constraint element by taking the upper bound of the
  /// given set of elements.
  virtual const ConsElem &upperBound(std::set<const ConsElem *> elems);

  /// Add the constraint lhs <= rhs to the set "kind"
  virtual void addConstraint(const std::string kind, const ConsElem &lhs,
                             const ConsElem &rhs);
  virtual void removeConstraintRHS(const std::string kind, const ConsElem &rhs);

  /// Find the lfp of the constraints in the "kinds" sets
  /// Unconstrained variables will be "Low" (caller delete)
  virtual ConsSoln *leastSolution(const std::set<std::string> kinds);
  /// Find the gfp of the constraints in the "kinds" sets
  /// Unconstrained variables will be "High" (caller delete)
  virtual ConsSoln *greatestSolution(const std::set<std::string> kinds);
  /// return the vars and joins
  std::vector<const BLConsVar *> getVars() { return vars; }
  std::set<BLJoin> &getJoins() { return joins; }

  // Compute both least and greatest solutions simultaneously
  // for the given kind.
  void solveMT(std::string kind);
  // Solve the given kinds in parallel (per thread limit)
  std::vector<PartialSolution *> solveLeastMT(std::vector<std::string> kinds,
                                              bool useDefaultSinks);
  std::vector<BLConstraint> &getOrCreateConstraintSet(const std::string kind);

private:
  static BLConstraintKit *singleton;

  llvm::StringMap<std::vector<BLConstraint>> constraints;
  std::set<std::string> lockedConstraintKinds;

  std::vector<const BLConsVar *> vars;
  std::set<BLJoin> joins;

  // Cached solutions for each kind
  llvm::StringMap<PartialSolution *> leastSolutions;
  llvm::StringMap<PartialSolution *> greatestSolutions;

  void freeUnneededConstraints(std::string kind);
};

} // namespace deps

#endif