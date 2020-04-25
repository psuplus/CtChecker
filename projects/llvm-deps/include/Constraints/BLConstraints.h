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

#ifndef BLCONSTRAINTS_H_
#define BLCONSTRAINTS_H_

#include "Constraints/ConstraintKit.h"
#include <string>

namespace deps {

/// Singleton constants in the Bell-LaPadula lattice
class BLConstant : public ConsElem {
public:
  static const BLConstant &constant(std::string sensitivity,
                                    std::set<std::string> compartments);

  /// Compare with another constraint element.
  /// False if element is not an BLConstant.
  virtual bool leq(const ConsElem &elem) const;

  /// Returns the empty set of constraint variables.
  virtual void variables(std::set<const ConsVar *> &) const {}

  /// Returns the least upper bound of two members of the Bell-LaPadula lattice
  virtual const BLConstant &join(const BLConstant &other) const;
  virtual bool operator==(const ConsElem &c) const;
  virtual void dump(llvm::raw_ostream &o) const;

  /// Support for llvm-style RTTI (isa<>, dyn_cast<>, etc.)
  virtual DepsType type() const { return DT_BLConstant; }
  static inline bool classof(const BLConstant *) { return true; }
  static inline bool classof(const ConsElem *elem) {
    return elem->type() == DT_BLConstant;
  }

protected:
  enum Clearance { PUBLIC, CONFIDENTIAL, SECRET, TOPSECRECT };
  BLConstant(Clearance level);
  BLConstant &operator=(const BLConstant &);

  const Clearance level;
  static std::set<BLConstant *> constants;
};

/// Concrete implementation of constraint variables for use with
/// BLConstraintKit.
class BLConsVar : public ConsVar {
public:
  /// Create a new variable with description
  BLConsVar(const std::string desc);
  /// Compare two elements for constraint satisfaction
  virtual bool leq(const ConsElem &elem) const;
  /// Returns the singleton set containing this variable
  virtual void variables(std::set<const ConsVar *> &set) const {
    set.insert(this);
  }
  virtual bool operator==(const ConsElem &c) const;
  virtual void dump(llvm::raw_ostream &o) const;

  /// Support for llvm-style RTTI (isa<>, dyn_cast<>, etc.)
  virtual DepsType type() const { return DT_BLConsVar; }
  static inline bool classof(const BLConsVar *) { return true; }
  static inline bool classof(const ConsVar *var) {
    return var->type() == DT_BLConsVar;
  }
  static inline bool classof(const ConsElem *elem) {
    return elem->type() == DT_BLConsVar;
  }

  const std::string getDesc() const { return desc; }

private:
  BLConsVar(const BLConsVar &);
  BLConsVar &operator=(const BLConsVar &);
  const std::string desc;
};

/// Constraint element representing the join of L-H lattice elements.
class BLJoin : public ConsElem {
public:
  /// Returns true if all of the elements of the join are leq(elem)
  virtual bool leq(const ConsElem &elem) const;
  /// Returns set of sub-elements that are constraint variables
  virtual void variables(std::set<const ConsVar *> &set) const;
  /// Create a new constraint element by joining two existing constraints
  /// (caller delete)
  static const BLJoin *create(const ConsElem &e1, const ConsElem &e2);
  /// Returns the set of elements joined by this element
  const std::set<const ConsElem *> &elements() const { return elems; }
  virtual bool operator==(const ConsElem &c) const;
  bool operator<(const BLJoin &c) const {
    if (elems.size() != c.elems.size())
      return elems.size() < c.elems.size();
    return elems < c.elems;
  }
  virtual void dump(llvm::raw_ostream &o) const;

  /// Support for llvm-style RTTI (isa<>, dyn_cast<>, etc.)
  virtual DepsType type() const { return DT_BLJoin; }
  static inline bool classof(const BLJoin *) { return true; }
  static inline bool classof(const ConsElem *elem) {
    return elem->type() == DT_BLJoin;
  }
  BLJoin(std::set<const ConsElem *> elems);

private:
  const std::set<const ConsElem *> elems;
  BLJoin &operator=(const BLJoin &);
};

} // namespace deps

#endif
