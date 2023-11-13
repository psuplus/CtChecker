//===-- SignatureLibrary.cpp -----------------------------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file contains a library of information flow signatures that can be
// registered with the Infoflow signature registrar.
//
//===----------------------------------------------------------------------===//

#ifndef DEBUG_TYPE
#define DEBUG_TYPE "deps"

#include "SignatureLibrary.h"
#include "FlowRecord.h"

#include "llvm/IR/Function.h"
#include "llvm/IR/Instruction.h"
#include "llvm/IR/IntrinsicInst.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"

namespace deps {

bool
TaintReachable::accept(const ContextID ctxt, const ImmutableCallSite cs) const { return true; }

std::pair<std::vector<FlowRecord>, std::vector<FlowRecord>>
TaintReachable::process(const ContextID ctxt, const ImmutableCallSite cs) const {
  DEBUG(errs() << "Using taint reachable signature for: " << *cs.getInstruction() << "\n");
  std::vector<FlowRecord> taintFlows;
  std::vector<FlowRecord> WLPFlows;

  for (ImmutableCallSite::arg_iterator arg = cs.arg_begin();
       arg != cs.arg_end(); ++arg) {

    FlowRecord exp(false, ctxt, ctxt);
    FlowRecord imp(true, ctxt, ctxt);

    // implicit from the pc of the call site and the function pointer
    imp.addSourceValue(*cs->getParent());
    imp.addSourceValue(*cs.getCalledValue());

    // every argument's value is a source
    exp.addSourceValue(**arg);
    // if argument is pointer, everything it POINTS TO is source
    if ((*arg)->getType()->isPointerTy()) {
      exp.addSourceReachablePtr(**arg);
      imp.addSourceValue(**arg);
    }

    // Sources and sinks of the args
    // MODE: >= SFD_ArgToRetAndOther
    for (ImmutableCallSite::arg_iterator other = cs.arg_begin();
            other != cs.arg_end(); ++other) {
        // if argument is pointer, everything it POINTS TO is sink
        if (!isa<Constant>(other->get())) {
          if ((*other)->getType()->isPointerTy()) {
            exp.addSinkReachablePtr(**other);
            imp.addSinkReachablePtr(**other);
            // whitelist pointer exclusive flows
            if ((*arg)->getType()->isPointerTy()) {
              FlowRecord WLPFlow = FlowRecord(false, ctxt, ctxt);
              WLPFlow.addSourceValue(**arg);
              WLPFlow.addSourceReachablePtr(**arg);
              WLPFlow.addSinkValue(**other);
              WLPFlows.push_back(WLPFlow);
            }
          }
        }
    }
    taintFlows.push_back(exp);
    WLPFlows.push_back(exp);

    // if the function has a return value it is a sink
    // MODE: SFD_ArgToRet
    if (!cs->getType()->isVoidTy()) {
      FlowRecord exp = FlowRecord(false, ctxt, ctxt);
      // add source again
      exp.addSourceValue(**arg);
      if ((*arg)->getType()->isPointerTy()) {
        exp.addSourceReachablePtr(**arg);
      }
      imp.addSinkValue(*cs.getInstruction());
      exp.addSinkValue(*cs.getInstruction());

      if (cs->getType()->isPointerTy()) {
        // TODO: Also using pointer mode at this location?
        imp.addSinkDirectPtr(*cs.getInstruction());
        exp.addSinkDirectPtr(*cs.getInstruction());
      }
      taintFlows.push_back(exp);
    } 
    taintFlows.push_back(imp);
  }

  std::pair<std::vector<FlowRecord>, std::vector<FlowRecord>> flowPair;
  flowPair.first = taintFlows;
  flowPair.second = WLPFlows;
  return flowPair;
}

bool
ArgsToRet::accept(const ContextID ctxt, const ImmutableCallSite cs) const { return true; }

std::pair<std::vector<FlowRecord>, std::vector<FlowRecord>>
ArgsToRet::process(const ContextID ctxt, const ImmutableCallSite cs) const {
  DEBUG(errs() << "Using ArgsToRet reachable signature for: " << *cs.getInstruction() << "\n");
  std::vector<FlowRecord> taintFlows;
  std::vector<FlowRecord> WLPFlows;

  for (ImmutableCallSite::arg_iterator arg = cs.arg_begin();
       arg != cs.arg_end(); ++arg) {

    FlowRecord exp(false, ctxt, ctxt);

    // if the function has a return value it is a sink
    if (!cs->getType()->isVoidTy()) {
      FlowRecord exp = FlowRecord(false, ctxt, ctxt);
      
      exp.addSourceValue(**arg);
      if ((*arg)->getType()->isPointerTy()) {
        exp.addSourceReachablePtr(**arg);
      }
      
      exp.addSinkValue(*cs.getInstruction());

      if (cs->getType()->isPointerTy()) {
        exp.addSinkDirectPtr(*cs.getInstruction());
      }
      taintFlows.push_back(exp);
    }
  }

  std::pair<std::vector<FlowRecord>, std::vector<FlowRecord>> flowPair;
  flowPair.first = taintFlows;
  flowPair.second = WLPFlows;
  return flowPair;
}


bool
NoFlows::accept(const ContextID ctxt, const ImmutableCallSite cs) const { return true; }

std::pair<std::vector<FlowRecord>, std::vector<FlowRecord>>
NoFlows::process(const ContextID ctxt, const ImmutableCallSite cs) const {
  DEBUG(errs() << "Using no flows signature...\n");
  return std::pair<std::vector<FlowRecord>, std::vector<FlowRecord>>();
}

bool
OverflowChecks::accept(const ContextID ctxt, const ImmutableCallSite cs) const {
  const Function * F = cs.getCalledFunction();
  return F && F->getName().startswith("____jf_check");
}

std::pair<std::vector<FlowRecord>, std::vector<FlowRecord>>
OverflowChecks::process(const ContextID ctxt, const ImmutableCallSite cs) const {
  DEBUG(errs() << "Using OverflowChecks signature...\n");

  FlowRecord exp(false,ctxt,ctxt);
  FlowRecord imp(true,ctxt,ctxt);

  imp.addSourceValue(*cs->getParent());

  // Add all argument values as sources
  for (ImmutableCallSite::arg_iterator arg = cs.arg_begin(), end = cs.arg_end();
       arg != end; ++arg)
    exp.addSourceValue(**arg);
  assert(!cs->getType()->isVoidTy() && "Found 'void' overflow check?");

  // And the return value as a sink
  exp.addSinkValue(*cs.getInstruction());
  imp.addSinkValue(*cs.getInstruction());

  std::vector<FlowRecord> flows;
  flows.push_back(imp);
  flows.push_back(exp);
  std::pair<std::vector<FlowRecord>, std::vector<FlowRecord>> flowPair;
  flowPair.first = flows;
  flowPair.second = std::vector<FlowRecord>();
  return flowPair;
}

}

#endif
