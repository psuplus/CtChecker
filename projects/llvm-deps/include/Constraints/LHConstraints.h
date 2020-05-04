//===-- constraints/LHConstraints - LH Constraint Classes -------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file declares concrete classes of constraint elements for use with
// the LHConstraintKit.
//
//===----------------------------------------------------------------------===//

#ifndef LHCONSTRAINTS_H_
#define LHCONSTRAINTS_H_

#include "Constraints/ConstraintKit.h"
#include <map>
#include <string>

namespace deps {

class LHConstant;

enum LHLevel { LOW, MID, HIGH };
enum LHCompartment { NUCLEAR, CRYPTO, BIO };
typedef std::set<LHCompartment> CompartmentSet;
typedef std::pair<LHLevel, CompartmentSet> LHLabel;
typedef std::map<LHLabel, LHConstant *> LHLabelConstantMap;

/// Singleton constants in the lattice
class LHConstant : public ConsElem {
public:
  /// Get a reference to the constant (do not delete!)
  static const LHConstant &bot();
  static const LHConstant &top();
  // static const LHConstant &mid();
  static const LHConstant &constant(LHLevel level, CompartmentSet compartments);
  static const LHConstant &constant(LHLabel label);

  /// Compare with another constraint element.
  /// False if element is not an LHConstant.
  virtual bool leq(const ConsElem &elem) const;

  /// Returns the empty set of constraint variables.
  virtual void variables(std::set<const ConsVar *> &) const {}

  /// Returns the least upper bound of two members of the lattice
  virtual const LHConstant &join(const LHConstant &other) const;

  virtual const LHLabel upperBoundLabel(const LHConstant &other) const;
  virtual const LHLabel lowerBoundLabel(const LHConstant &other) const;

  static const LHLabel upperBoundLabel(LHLabel label, LHLabel other);
  static const LHLabel lowerBoundLabel(LHLabel label, LHLabel other);

  virtual const LHLabel label() const;

  virtual bool operator==(const ConsElem &c) const;

  virtual void dump(llvm::raw_ostream &o) const;

  /// Support for llvm-style RTTI (isa<>, dyn_cast<>, etc.)
  virtual DepsType type() const { return DT_LHConstant; }
  static inline bool classof(const LHConstant *) { return true; }
  static inline bool classof(const ConsElem *elem) {
    return elem->type() == DT_LHConstant;
  }

  static const CompartmentSet EmptySet;
  static const CompartmentSet CompleteSet;

protected:
  LHConstant(LHLevel level, CompartmentSet cSet);
  LHConstant(LHLabel label);
  LHConstant &operator=(const LHConstant &);
  const LHLevel level;
  const CompartmentSet compartmentSet;

  static LHLabelConstantMap labelConstants;
};

/// Concrete implementation of constraint variables for use with
/// LHConstraintKit.
class LHConsVar : public ConsVar {
public:
  /// Create a new variable with description
  LHConsVar(const std::string desc);
  /// Compare two elements for constraint satisfaction
  virtual bool leq(const ConsElem &elem) const;
  /// Returns the singleton set containing this variable
  virtual void variables(std::set<const ConsVar *> &set) const {
    set.insert(this);
  }
  virtual bool operator==(const ConsElem &c) const;
  virtual void dump(llvm::raw_ostream &o) const;

  /// Support for llvm-style RTTI (isa<>, dyn_cast<>, etc.)
  virtual DepsType type() const { return DT_LHConsVar; }
  static inline bool classof(const LHConsVar *) { return true; }
  static inline bool classof(const ConsVar *var) {
    return var->type() == DT_LHConsVar;
  }
  static inline bool classof(const ConsElem *elem) {
    return elem->type() == DT_LHConsVar;
  }

  const std::string getDesc() const { return desc; }

private:
  LHConsVar(const LHConsVar &);
  LHConsVar &operator=(const LHConsVar &);
  const std::string desc;
};

/// Constraint element representing the join of L-H lattice elements.
class LHJoin : public ConsElem {
public:
  /// Returns true if all of the elements of the join are leq(elem)
  virtual bool leq(const ConsElem &elem) const;
  /// Returns set of sub-elements that are constraint variables
  virtual void variables(std::set<const ConsVar *> &set) const;
  /// Create a new constraint element by joining two existing constraints
  /// (caller delete)
  static const LHJoin *create(const ConsElem &e1, const ConsElem &e2);
  /// Returns the set of elements joined by this element
  const std::set<const ConsElem *> &elements() const { return elems; }
  virtual bool operator==(const ConsElem &c) const;
  bool operator<(const LHJoin &c) const {
    if (elems.size() != c.elems.size())
      return elems.size() < c.elems.size();
    return elems < c.elems;
  }
  virtual void dump(llvm::raw_ostream &o) const;

  /// Support for llvm-style RTTI (isa<>, dyn_cast<>, etc.)
  virtual DepsType type() const { return DT_LHJoin; }
  static inline bool classof(const LHJoin *) { return true; }
  static inline bool classof(const ConsElem *elem) {
    return elem->type() == DT_LHJoin;
  }
  LHJoin(std::set<const ConsElem *> elems);

private:
  const std::set<const ConsElem *> elems;
  LHJoin &operator=(const LHJoin &);
};

} // namespace deps

#endif /* LHCONSTRAINTS_H_ */
