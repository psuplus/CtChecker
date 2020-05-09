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
/// propogate, initialize function - modify and LHconstant function.
// Helper function
// static const LHConstant &levelToLHC(LHLevel l, CompartmentSet cSet) {
//   return LHConstant::constant(l, cSet);
// }

LHLabel PartialSolution::isChanged(const ConsVar *V) {
  LHLabel label;

  if (initial) {
    label = make_pair(LHLevel::HIGH, LHConstant::CompleteSet);
  } else {
    label = make_pair(LHLevel::LOW, LHConstant::EmptySet);
  }

  for (auto ps : Chained) {
    if (initial) {
      for (auto set : ps->VSet) {
        if (set.second.count(V)) {
          label = LHConstant::lowerBoundLabel(set.first, label);
        }
      }
      return label;
    } else {
      for (auto set : ps->VSet) {
        if (set.second.count(V)) {
          label = LHConstant::upperBoundLabel(set.first, label);
        }
      }
      return label;
    }
  }
  return label;
}

/* This function evaluates the argument E (which could be a LHConsVar,
 * LHConstant or LHJoin) into a LHConstant ptr which is returned. */

const LHConstant &PartialSolution::subst(
    const ConsElem
        &E) { // This is an element of any inherited class of ConsElem
  // If this is a variable, look it up in VSet:
  if (const LHConsVar *V = dyn_cast<LHConsVar>(&E))
    return LHConstant::constant(isChanged(V));

  // If this is already a constant, return it
  if (const LHConstant *LHC = dyn_cast<LHConstant>(&E))
    return *LHC;

  // Otherwise, this better be a join (asserting cast)
  const LHJoin *J = cast<LHJoin>(&E); // So classes inherited from ConsElem  -
                                      // LHConsVar, LHConstant and LHJoin Only.
  // Find all elements of the join, and evaluate it recursively
  const std::set<const ConsElem *> &elements =
      J->elements(); // D. What are the elements i.e. 'elems' of LHJoin
                     // represent?

  // XXX: LHConsSoln starts with substVal as the defaultValue,
  // which ...seems wrong?  Seems like this would make all join's
  // evaluate to 'high' unconditionally when solving for greatest.
  // Curiously, however, I'm not seeing any differences in the solutions
  // produced across various CINT2006 benchmarks.  Oh well.
  const LHConstant *substVal = &LHConstant::bot();

  for (std::set<const ConsElem *>::iterator
           elem = elements.begin(), // this loop evaluates the join element.
       end = elements.end();
       elem != end; ++elem) {
    substVal = &(
        substVal->join(subst(**elem))); // join(arg) returns a LHConstant
                                        // reference to lub(substVal,arg), where
                                        // lub is wrt level field of LHConstant
  }

  return *substVal;
}

// Copy constructor - simply copies the initial field and adds P.Chained and
// *this to this->Chained.
PartialSolution::PartialSolution(PartialSolution &P) {
  initial = P.initial;

  // Chain to it
  Chained.push_back(this);
  Chained.insert(Chained.end(), P.Chained.begin(), P.Chained.end());
  std::sort(Chained.begin(), Chained.end());
  Chained.erase(
      std::unique(Chained.begin(), Chained.end()),
      Chained
          .end()); /* The unique function first deletes all duplicates (copies)
                      in chained, and erase deletes the additional space -
                      overall just deletes copies and readjusts size*/

  assert(std::find(Chained.begin(), Chained.end(), &P) != Chained.end());
}

// Merging function (not a constructor) - same as the above copy constructor,
// except calls 'propogate' at the very end as well.
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

/* For each LHConstraint in the Constraints vector, we insert 'targets' (afer
performing variables() on it (what does this do?)) into densemap P. And then we
check each constrant whether it is >= MID, LOW (different for greatest solution
or least solution) etc. and accordingly put it in VSet. */
// Only run for normal constructor.
// Scan constraints for non-initial, building up seed VarSet.
void PartialSolution::initialize(
    Constraints &C) { // Constraints is a vector of LHConstraint (which is a
                      // class with fields 'left' and 'right' ConsElem* ptrs)

  // Add ourselves to the chained list
  Chained.push_back(this);

  // Build propagation map
  std::set<const ConsVar *> vars; // LHConsVar is inherited from ConsVar
  std::set<const ConsVar *> targets;
  // Build propagation map
  for (Constraints::iterator I = C.begin(), E = C.end(); I != E; ++I) {
    vars.clear();
    targets.clear();
    const ConsElem &From =
        initial ? I->rhs() : I->lhs(); // lhs() / rhs() is a function which
                                       // returns 'left' / 'right' refereNmces.
    const ConsElem &To = initial ? I->lhs() : I->rhs();
    // a <= b
    From.variables(vars); // a -> vars ; b -> targets
    To.variables(targets);

    if (targets.empty())
      continue;

    for (std::set<const ConsVar *>::iterator var = vars.begin(),
                                             end = vars.end();
         var != end; ++var) {
      // Update PMap for this var
      P[*var].insert(
          P[*var].end(), targets.begin(),
          targets.end()); // P is a 'PMap' in PartialSolution. 'PMap' is a
                          // densemap from ConsVar* to vector of ConsVar*.
    }                     // P(a) <- P(a) U {b}

    // Initialize varset:
    VSet[subst(From).label()].insert(targets.begin(), targets.end());
    // if (initial) {
    //   if (subst(From).leq(LHConstant::bot())) {
    //     // A <= B, 'B' is low
    //     // Mark all in 'A' as low also
    //     VSet[LOW].insert(targets.begin(), targets.end());
    //   } else if (subst(From).leq(LHConstant::top())) {
    //     // A <= B, 'B' is at most mid
    //     // Mark all in 'A' as mid also
    //     VSet[MID].insert(targets.begin(), targets.end());
    //   }
    // } else {
    //   if (!subst(From).leq(LHConstant::top())) {
    //     // A <= B, 'A' is high
    //     // Mark all in 'B' as high also
    //     VSet[HIGH].insert(targets.begin(), targets.end());
    //   } else if (!subst(From).leq(LHConstant::bot())) {
    //     // A <= B, 'A' is at least mid
    //     // Mark all in 'B' as mid also
    //     VSet[MID].insert(targets.begin(), targets.end());
    //   }
    // }
  }
}
// a <= b, MID <= a;
// LOW -> {} , MID -> {a} ; P[a] = {b}

void PartialSolution::propagate() {
  std::map<LHLabel, std::deque<const ConsVar *>> workList;
  // {{LOW, {}}, {MID, {}}, {HIGH, {}}};

  assert(!Chained.empty());
  assert(std::find(Chained.begin(), Chained.end(), this) != Chained.end());

  // Enqueue all known changed variables
  for (auto ps : Chained) {
    for (auto set : ps->VSet) {
      workList[set.first].insert(workList[set.first].end(), set.second.begin(),
                                 set.second.end());
    } // Worklist: LOW -> {} , MID -> {a}
  }

  // Compute transitive closure of the non-default variables,
  // using all propagation maps in PMaps.
  for (auto listPair : workList) {
    std::deque<const ConsVar *> list = listPair.second;
    while (!list.empty()) {
      // Dequeue variable
      const ConsVar *V = list.front(); // V = a
      list.pop_front();

      for (auto PS : Chained) {
        PMap::iterator I = PS->P.find(V);
        if (I == PS->P.end())
          continue; // Not in map

        std::vector<const ConsVar *> &Updates = I->second; // Updates = {b}
        // For each such variable...
        for (const ConsVar *cv : Updates) {
          // If we haven't changed it already, add it to the worklist:
          LHLabel vLabel = isChanged(cv);
          if (initial) {
            if (LHConstant::constant(listPair.first)
                    .leq(LHConstant::constant(vLabel))) {
              VSet[listPair.first].insert(cv);
              list.push_back(cv);
            }
          } else {
            if (LHConstant::constant(vLabel).leq(
                    LHConstant::constant(listPair.first))) {
              VSet[listPair.first].insert(cv);
              list.push_back(cv);
            }
          }
        }
      }
    }
  }
}
