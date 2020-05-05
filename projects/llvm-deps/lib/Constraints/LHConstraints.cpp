//===-- LHConstraints.cpp ---------------------------------------*- C++ -*-===//
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

#include "Constraints/LHConstraints.h"
#include "llvm/Support/Casting.h"

namespace deps {

const CompartmentSet LHConstant::EmptySet;
const CompartmentSet LHConstant::CompleteSet{LHCompartment::CRYPTO,
                                             LHCompartment::NUCLEAR};
LHLabelConstantMap LHConstant::labelConstants;

LHConstant::LHConstant(LHLevel l, CompartmentSet cSet)
    : level(l), compartmentSet(cSet) {}

LHConstant::LHConstant(LHLabel label)
    : level(label.first), compartmentSet(label.second) {}

const LHConstant &LHConstant::bot() {
  return LHConstant::constant(LHLevel::LOW, LHConstant::EmptySet);
}

const LHConstant &LHConstant::top() {
  return LHConstant::constant(LHLevel::HIGH, LHConstant::CompleteSet);
}

const LHConstant &LHConstant::constant(LHLevel l, CompartmentSet cSet) {
  LHLabel label = LHLabel(l, cSet);

  if (LHConstant::labelConstants.find(label) ==
      LHConstant::labelConstants.end()) {
    LHConstant::labelConstants[label] = new LHConstant(l, cSet);
  }
  return *LHConstant::labelConstants[label];
}

const LHConstant &LHConstant::constant(LHLabel label) {
  return constant(label.first, label.second);
}

bool LHConstant::leq(const ConsElem &elem) const {
  const LHConstant *other;
  // TODO not sure if dyn_cast support is set up properly
  if ((other = llvm::dyn_cast<LHConstant>(&elem))) {
    CompartmentSet diff;
    set_difference(compartmentSet.begin(), compartmentSet.end(),
                   other->compartmentSet.begin(), other->compartmentSet.end(),
                   inserter(diff, diff.end()));
    return (this->level <= other->level && diff.size() == 0);
  } else {
    return false;
  }
}

const LHConstant &LHConstant::join(const LHConstant &other) const {
  LHLevel levelUpperBound = level <= other.level ? other.level : level;
  CompartmentSet setUnion;
  set_union(compartmentSet.begin(), compartmentSet.end(),
            other.compartmentSet.begin(), other.compartmentSet.end(),
            inserter(setUnion, setUnion.end()));

  return constant(levelUpperBound, setUnion);
}

const LHLabel LHConstant::upperBoundLabel(const LHConstant &other) const {
  // LHLevel levelUpperBound = level <= other.level ? other.level : level;
  // CompartmentSet setUnion;
  // set_union(compartmentSet.begin(), compartmentSet.end(),
  //           other.compartmentSet.begin(), other.compartmentSet.end(),
  //           inserter(setUnion, setUnion.end()));
  // return make_pair(levelUpperBound, setUnion);
  return upperBoundLabel(make_pair(level, compartmentSet),
                         make_pair(other.level, other.compartmentSet));
}

const LHLabel LHConstant::lowerBoundLabel(const LHConstant &other) const {
  // LHLevel levelLowerBound = level > other.level ? other.level : level;
  // CompartmentSet setIntersection;
  // set_intersection(compartmentSet.begin(), compartmentSet.end(),
  //                  other.compartmentSet.begin(), other.compartmentSet.end(),
  //                  inserter(setIntersection, setIntersection.end()));
  // return make_pair(levelLowerBound, setIntersection);
  return lowerBoundLabel(make_pair(level, compartmentSet),
                         make_pair(other.level, other.compartmentSet));
}

const LHLabel LHConstant::upperBoundLabel(LHLabel label, LHLabel other) {
  LHLevel levelUpperBound =
      label.first < other.first ? other.first : label.first;
  CompartmentSet setUnion;
  set_union(label.second.begin(), label.second.end(), other.second.begin(),
            other.second.end(), inserter(setUnion, setUnion.end()));
  return make_pair(levelUpperBound, setUnion);
}

const LHLabel LHConstant::lowerBoundLabel(LHLabel label, LHLabel other) {
  LHLevel levelLowerBound =
      label.first > other.first ? other.first : label.first;
  CompartmentSet setIntersection;
  set_intersection(label.second.begin(), label.second.end(),
                   other.second.begin(), other.second.end(),
                   inserter(setIntersection, setIntersection.end()));
  return make_pair(levelLowerBound, setIntersection);
}

const LHLabel LHConstant::label() const {
  return make_pair(level, compartmentSet);
}

void LHConstant::dump(llvm::raw_ostream &o) const {
  if (level == LOW) {
    o << "LOW";
  } else if (level == MID) {
    o << "MID";
  } else {
    o << "HIGH";
  }
  o << ", {";
  for (auto c : compartmentSet) {
    if (c == CRYPTO) {
      o << " CRYPTO ";
    } else if (c == NUCLEAR) {
      o << " NUCLEAR ";
    } else if (c == BIO) {
      o << " BIO ";
    }
  }
  o << "}\n";
}

bool LHConstant::operator==(const ConsElem &elem) const {
  if (const LHConstant *other = llvm::dyn_cast<const LHConstant>(&elem)) {
    return (this->level == other->level &&
            this->compartmentSet == other->compartmentSet);
  } else {
    return false;
  }
}

LHConsVar::LHConsVar(const std::string description) : desc(description) {}

bool LHConsVar::leq(const ConsElem &elem) const { return false; }

bool LHConsVar::operator==(const ConsElem &elem) const {
  if (const LHConsVar *other = llvm::dyn_cast<const LHConsVar>(&elem)) {
    return this == other;
  } else {
    return false;
  }
}

void LHConsVar::dump(llvm::raw_ostream &o) const { o << desc; }

LHJoin::LHJoin(std::set<const ConsElem *> elements) : elems(elements) {}

bool LHJoin::leq(const ConsElem &other) const {
  for (std::set<const ConsElem *>::iterator elem = elems.begin(),
                                            end = elems.end();
       elem != end; ++elem) {
    if (!(*elem)->leq(other)) {
      return false;
    }
  }
  return true;
}

void LHJoin::variables(std::set<const ConsVar *> &vars) const {
  for (std::set<const ConsElem *>::iterator elem = elems.begin(),
                                            end = elems.end();
       elem != end; ++elem) {
    (*elem)->variables(vars);
  }
}

const LHJoin *LHJoin::create(const ConsElem &e1, const ConsElem &e2) {
  std::set<const ConsElem *> elements;

  if (const LHJoin *j1 = llvm::dyn_cast<LHJoin>(&e1)) {
    const std::set<const ConsElem *> &j1elements = j1->elements();
    elements.insert(j1elements.begin(), j1elements.end());
  } else {
    elements.insert(&e1);
  }

  if (const LHJoin *j2 = llvm::dyn_cast<LHJoin>(&e2)) {
    const std::set<const ConsElem *> &j2elements = j2->elements();
    elements.insert(j2elements.begin(), j2elements.end());
  } else {
    elements.insert(&e2);
  }

  return new LHJoin(elements);
}

void LHJoin::dump(llvm::raw_ostream &o) const {
  o << "Join (";
  for (std::set<const ConsElem *>::iterator elem = elems.begin(),
                                            end = elems.end();
       elem != end; ++elem) {
    (*elem)->dump(o);
  }
  o << ")";
}

bool LHJoin::operator==(const ConsElem &elem) const {
  if (const LHJoin *other = llvm::dyn_cast<const LHJoin>(&elem)) {
    return this == other;
  } else {
    return false;
  }
}

} // namespace deps
