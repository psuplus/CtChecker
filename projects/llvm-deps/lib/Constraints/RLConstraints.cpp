//===-- RLConstraints.cpp ---------------------------------------*- C++ -*-===//
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

#include "Constraints/RLConstraints.h"
#include "llvm/Support/Casting.h"

namespace deps {

const CompartmentSet RLConstant::EmptySet;
const CompartmentSet RLConstant::CompleteSet{RLCompartment::CRYPTO,
                                             RLCompartment::NUCLEAR};
RLLabelConstantMap RLConstant::labelConstants;

RLConstant::RLConstant(RLLevel l, CompartmentSet cSet)
    : level(l), compartmentSet(cSet) {}

RLConstant::RLConstant(RLLabel label)
    : level(label.first), compartmentSet(label.second) {}

const RLConstant &RLConstant::bot() {
  return RLConstant::constant(RLLevel::LOW, RLConstant::EmptySet);
}

const RLConstant &RLConstant::top() {
  return RLConstant::constant(RLLevel::HIGH, RLConstant::CompleteSet);
}

const RLConstant &RLConstant::constant(RLLevel l, CompartmentSet cSet) {
  RLLabel label = RLLabel(l, cSet);

  if (RLConstant::labelConstants.find(label) ==
      RLConstant::labelConstants.end()) {
    RLConstant::labelConstants[label] = new RLConstant(l, cSet);
  }
  return *RLConstant::labelConstants[label];
}

const RLConstant &RLConstant::constant(RLLabel label) {
  return constant(label.first, label.second);
}

bool RLConstant::leq(const ConsElem &elem) const {
  const RLConstant *other;
  // TODO not sure if dyn_cast support is set up properly
  if ((other = llvm::dyn_cast<RLConstant>(&elem))) {
    CompartmentSet diff;
    set_difference(compartmentSet.begin(), compartmentSet.end(),
                   other->compartmentSet.begin(), other->compartmentSet.end(),
                   inserter(diff, diff.end()));
    return (this->level <= other->level && diff.size() == 0);
  } else {
    return false;
  }
}

const RLConstant &RLConstant::join(const RLConstant &other) const {
  RLLevel levelUpperBound = level <= other.level ? other.level : level;
  CompartmentSet setUnion;
  set_union(compartmentSet.begin(), compartmentSet.end(),
            other.compartmentSet.begin(), other.compartmentSet.end(),
            inserter(setUnion, setUnion.end()));

  return constant(levelUpperBound, setUnion);
}

const RLLabel RLConstant::upperBoundLabel(const RLConstant &other) const {
  // RLLevel levelUpperBound = level <= other.level ? other.level : level;
  // CompartmentSet setUnion;
  // set_union(compartmentSet.begin(), compartmentSet.end(),
  //           other.compartmentSet.begin(), other.compartmentSet.end(),
  //           inserter(setUnion, setUnion.end()));
  // return make_pair(levelUpperBound, setUnion);
  return upperBoundLabel(make_pair(level, compartmentSet),
                         make_pair(other.level, other.compartmentSet));
}

const RLLabel RLConstant::lowerBoundLabel(const RLConstant &other) const {
  // RLLevel levelLowerBound = level > other.level ? other.level : level;
  // CompartmentSet setIntersection;
  // set_intersection(compartmentSet.begin(), compartmentSet.end(),
  //                  other.compartmentSet.begin(), other.compartmentSet.end(),
  //                  inserter(setIntersection, setIntersection.end()));
  // return make_pair(levelLowerBound, setIntersection);
  return lowerBoundLabel(make_pair(level, compartmentSet),
                         make_pair(other.level, other.compartmentSet));
}

const RLLabel RLConstant::upperBoundLabel(RLLabel label, RLLabel other) {
  RLLevel levelUpperBound =
      label.first < other.first ? other.first : label.first;
  CompartmentSet setUnion;
  set_union(label.second.begin(), label.second.end(), other.second.begin(),
            other.second.end(), inserter(setUnion, setUnion.end()));
  return make_pair(levelUpperBound, setUnion);
}

const RLLabel RLConstant::lowerBoundLabel(RLLabel label, RLLabel other) {
  RLLevel levelLowerBound =
      label.first > other.first ? other.first : label.first;
  CompartmentSet setIntersection;
  set_intersection(label.second.begin(), label.second.end(),
                   other.second.begin(), other.second.end(),
                   inserter(setIntersection, setIntersection.end()));
  return make_pair(levelLowerBound, setIntersection);
}

const RLLabel RLConstant::label() const {
  return make_pair(level, compartmentSet);
}

void RLConstant::dump(llvm::raw_ostream &o) const {
  o << "[ ";
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
  o << "} ]";
}

bool RLConstant::operator==(const ConsElem &elem) const {
  if (const RLConstant *other = llvm::dyn_cast<const RLConstant>(&elem)) {
    return (this->level == other->level &&
            this->compartmentSet == other->compartmentSet);
  } else {
    return false;
  }
}

RLConsVar::RLConsVar(const std::string description) : desc(description) {}

bool RLConsVar::leq(const ConsElem &elem) const { return false; }

bool RLConsVar::operator==(const ConsElem &elem) const {
  if (const RLConsVar *other = llvm::dyn_cast<const RLConsVar>(&elem)) {
    return this == other;
  } else {
    return false;
  }
}

void RLConsVar::dump(llvm::raw_ostream &o) const { o << desc; }

RLJoin::RLJoin(std::set<const ConsElem *> elements) : elems(elements) {}

bool RLJoin::leq(const ConsElem &other) const {
  for (std::set<const ConsElem *>::iterator elem = elems.begin(),
                                            end = elems.end();
       elem != end; ++elem) {
    if (!(*elem)->leq(other)) {
      return false;
    }
  }
  return true;
}

void RLJoin::variables(std::set<const ConsVar *> &vars) const {
  for (std::set<const ConsElem *>::iterator elem = elems.begin(),
                                            end = elems.end();
       elem != end; ++elem) {
    (*elem)->variables(vars);
  }
}

const RLJoin *RLJoin::create(const ConsElem &e1, const ConsElem &e2) {
  std::set<const ConsElem *> elements;

  if (const RLJoin *j1 = llvm::dyn_cast<RLJoin>(&e1)) {
    const std::set<const ConsElem *> &j1elements = j1->elements();
    elements.insert(j1elements.begin(), j1elements.end());
  } else {
    elements.insert(&e1);
  }

  if (const RLJoin *j2 = llvm::dyn_cast<RLJoin>(&e2)) {
    const std::set<const ConsElem *> &j2elements = j2->elements();
    elements.insert(j2elements.begin(), j2elements.end());
  } else {
    elements.insert(&e2);
  }

  return new RLJoin(elements);
}

void RLJoin::dump(llvm::raw_ostream &o) const {
  o << "Join (";
  for (std::set<const ConsElem *>::iterator elem = elems.begin(),
                                            end = elems.end();
       elem != end; ++elem) {
    (*elem)->dump(o);
  }
  o << ")";
}

bool RLJoin::operator==(const ConsElem &elem) const {
  if (const RLJoin *other = llvm::dyn_cast<const RLJoin>(&elem)) {
    return this == other;
  } else {
    return false;
  }
}

} // namespace deps
