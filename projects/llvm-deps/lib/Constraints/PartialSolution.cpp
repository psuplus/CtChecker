//===-- PartialSolution.cpp -------------------------------------*- C++ -*-===//
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

#include "Constraints/PartialSolution.h"

#include "llvm/Support/Casting.h"

#include <deque>

using namespace deps;
using namespace llvm;

// Helper function
static const LHConstant &levelToLHC(LHConstant::LHLevel l) {
  switch (l) {
  case LHConstant::LOW:
    return LHConstant::low();
    break;
  case LHConstant::MID:
    return LHConstant::mid();
    break;
  case LHConstant::HIGH:
    return LHConstant::high();
    break;
  }
}

LHConstant::LHLevel PartialSolution::isChanged(const ConsVar *V) {
  LHConstant::LHLevel level;
  if (initial) {
    level = LHConstant::HIGH;
  } else {
    level = LHConstant::LOW;
  }

  for (std::vector<PartialSolution *>::iterator CI = Chained.begin();
       CI != Chained.end(); ++CI) {
    if (initial) {
      for (auto set : (*CI)->VSet) {
        if (set.second.count(V)) {
          // V->dump(errs());
          // errs() << " : " << set.first << " greatest\n";
          if (level > set.first) {
            level = set.first;
          }
        }
      }
      return level;
    } else {
      for (auto set : (*CI)->VSet) {
        if (set.second.count(V)) {
          // V->dump(errs());
          // errs() << " : " << set.first << " least\n";
          if (level < set.first) {
            level = set.first;
          }
        }
      }
      return level;
    }
  }
  return level;
}

const LHConstant &PartialSolution::subst(const ConsElem &E) {
  // If this is a variable, look it up in VSet:
  if (const LHConsVar *V = dyn_cast<LHConsVar>(&E))
    return levelToLHC(isChanged(V));

  // If this is already a constant, return it
  if (const LHConstant *LHC = dyn_cast<LHConstant>(&E))
    return *LHC;

  // Otherwise, this better be a join (asserting cast)
  const LHJoin *J = cast<LHJoin>(&E);
  // Find all elements of the join, and evaluate it recursively
  const std::set<const ConsElem *> &elements = J->elements();

  // XXX: LHConsSoln starts with substVal as the defaultValue,
  // which ...seems wrong?  Seems like this would make all join's
  // evaluate to 'high' unconditionally when solving for greatest.
  // Curiously, however, I'm not seeing any differences in the solutions
  // produced across various CINT2006 benchmarks.  Oh well.
  const LHConstant *substVal = &LHConstant::low();

  for (std::set<const ConsElem *>::iterator elem = elements.begin(),
                                            end = elements.end();
       elem != end; ++elem) {
    substVal = &(substVal->join(subst(**elem)));
  }

  return *substVal;
}

// Copy constructor
PartialSolution::PartialSolution(PartialSolution &P) {
  initial = P.initial;

  // Chain to it
  Chained.push_back(this);
  Chained.insert(Chained.end(), P.Chained.begin(), P.Chained.end());
  std::sort(Chained.begin(), Chained.end());
  Chained.erase(std::unique(Chained.begin(), Chained.end()), Chained.end());

  assert(std::find(Chained.begin(), Chained.end(), &P) != Chained.end());
}

// Merging constructor
void PartialSolution::mergeIn(PartialSolution &P) {
  // Sanity check
  assert(initial == P.initial);

  // Chain to it
  Chained.insert(Chained.end(), P.Chained.begin(), P.Chained.end());

  std::sort(Chained.begin(), Chained.end());
  Chained.erase(std::unique(Chained.begin(), Chained.end()), Chained.end());

  assert(std::find(Chained.begin(), Chained.end(), &P) != Chained.end());

  // And propagate
  propagate();
}

// Only run for normal constructor.
// Scan constraints for non-initial, building up seed VarSet.
void PartialSolution::initialize(Constraints &C) {

  // Add ourselves to the chained list
  Chained.push_back(this);

  // Build propagation map
  std::set<const ConsVar *> vars;
  std::set<const ConsVar *> targets;
  // Build propagation map
  for (Constraints::iterator I = C.begin(), E = C.end(); I != E; ++I) {
    vars.clear();
    targets.clear();
    const ConsElem &From = initial ? I->rhs() : I->lhs();
    const ConsElem &To = initial ? I->lhs() : I->rhs();

    From.variables(vars);
    To.variables(targets);

    if (targets.empty())
      continue;

    for (std::set<const ConsVar *>::iterator var = vars.begin(),
                                             end = vars.end();
         var != end; ++var) {
      // Update PMap for this var
      P[*var].insert(P[*var].end(), targets.begin(), targets.end());
    }

    // Initialize varset:
    if (initial) {
      if (subst(From).leq(LHConstant::low())) {
        // A <= B, 'B' is low
        // Mark all in 'A' as low also
        VSet[LHConstant::LOW].insert(targets.begin(), targets.end());
      } else if (subst(From).leq(LHConstant::mid())) {
        // A <= B, 'B' is at most mid
        // Mark all in 'A' as mid also
        VSet[LHConstant::MID].insert(targets.begin(), targets.end());
      }
    } else {
      if (!subst(From).leq(LHConstant::mid())) {
        // A <= B, 'A' is high
        // Mark all in 'B' as high also
        VSet[LHConstant::HIGH].insert(targets.begin(), targets.end());
      } else if (!subst(From).leq(LHConstant::low())) {
        // A <= B, 'A' is at least mid
        // Mark all in 'B' as mid also
        VSet[LHConstant::MID].insert(targets.begin(), targets.end());
      }
    }
  }
}

void PartialSolution::propagate() {
  std::map<LHConstant::LHLevel, std::deque<const ConsVar *>> workList{
      {LHConstant::LOW, {}}, {LHConstant::MID, {}}, {LHConstant::HIGH, {}}};

  assert(!Chained.empty());
  assert(std::find(Chained.begin(), Chained.end(), this) != Chained.end());

  // Enqueue all known changed variables
  for (std::vector<PartialSolution *>::iterator CI = Chained.begin(),
                                                CE = Chained.end();
       CI != CE; ++CI) {
    // workList.insert(workList.end(), (*CI)->VSet.begin(), (*CI)->VSet.end());
    for (auto set : (*CI)->VSet) {
      workList[set.first].insert(workList[set.first].end(), set.second.begin(),
                                 set.second.end());
    }
  }

  // Compute transitive closure of the non-default variables,
  // using all propagation maps in PMaps.

  for (auto listPair : workList) {
    std::deque<const ConsVar *> list = listPair.second;
    while (!list.empty()) {
      // Dequeue variable
      const ConsVar *V = list.front();
      list.pop_front();

      for (std::vector<PartialSolution *>::iterator CI = Chained.begin(),
                                                    CE = Chained.end();
           CI != CE; ++CI) {
        PartialSolution &PS = **CI;

        PMap::iterator I = PS.P.find(V);
        if (I == PS.P.end())
          continue; // Not in map

        std::vector<const ConsVar *> &Updates = I->second;
        // For each such variable...
        for (std::vector<const ConsVar *>::iterator I = Updates.begin(),
                                                    E = Updates.end();
             I != E; ++I) {
          // If we haven't changed it already, add it to the worklist:
          // if (!isChanged(*I)) {
          const ConsVar *cv = *I;
          LHConstant::LHLevel level;
          if (initial) {
            level = LHConstant::HIGH;
          } else {
            level = LHConstant::LOW;
          }
          LHConstant::LHLevel vLevel = isChanged(cv);
          if (level != vLevel && listPair.first == vLevel) {
            VSet[listPair.first].insert(*I);
            list.push_back(*I);
          }
        }
      }
    }
  }
}
