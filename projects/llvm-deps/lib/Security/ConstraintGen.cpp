//===- ConstraintGen.cpp ---------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// A pass to generate information flow constraints.
//
//===----------------------------------------------------------------------===//

#include "ConstraintGen.h"
#include "Infoflow.h"
#include "llvm/IR/DebugInfoMetadata.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/InstIterator.h"
#include "llvm/IR/IntrinsicInst.h"
#include "llvm/IR/Module.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/Format.h"
#include "llvm/Support/raw_ostream.h"

// For __cxa_demangle (demangling c++ function names)
// Requires libstdc++
#include <cxxabi.h>

using json = nlohmann::json;

namespace deps {

static RegisterPass<ConstraintGen>
    X("constraint-generation",
      "A pass to generate information flow constraints.");

char ConstraintGen::ID;

bool ConstraintGen::runOnModule(Module &M) {
  ifa = &getAnalysis<Infoflow>();
  parser.setInfoflow(ifa);
  if (!ifa) {
    errs() << "No instance\n";
    return false;
  }

  std::set<std::string> kinds{
      // "source-sink-taint",
      "default-taint", "default-sink-taint", "default",
      // "implicit-taint", "implicit-sink-taint"
  };

  parser.labelValue("source-sink-taint", ifa->sourceVariables, true);

  std::set<ConfigVariable> sinkVar{ifa->sinkVariables.begin(),
                                   ifa->sinkVariables.end()};
  parser.labelValue("source-sink-taint", sinkVar, false);

  // std::list<json> dynamic = ifa->config.at("predicate");
  // for (auto &it : dynamic) {
  //   std::string predTrue, predFalse;
  //   predTrue.append("(");
  //   predTrue.append(it.at("function").get<std::string>());
  //   predTrue.append("_");
  //   predTrue.append(it.at("name").get<std::string>());
  //   predFalse = predTrue;
  //   predTrue.append("==1) => ");
  //   predFalse.insert(0, "(Not ");

  //   ConfigVariable cv;
  //   cv.name = it.at("related").get<std::string>();
  //   cv.function = it.at("function").get<std::string>();
  //   cv.type = ConfigVariableType::Variable;
  //   cv.index = -1;
  //   cv.label = RLConstant::parseLabelString("CONST[secret:1(private)][]");

  //   parser.labelValue("source-sink-taint", std::set<ConfigVariable>{cv},
  //   true,
  //                     predFalse);

  //   cv.label = RLConstant::parseLabelString("CONST[secret:0(public)][]");
  //   parser.labelValue("source-sink-taint", std::set<ConfigVariable>{cv},
  //   false,
  //                     predTrue);
  // }

  for (auto whitelist : ifa->whitelistVariables) {
    ifa->removeConstraint("default", whitelist);
  }

  errs() << "\n---- Constraints BEGIN ----\n";
  for (auto kind : kinds) {
    errs() << kind << ":\n";
    for (auto cons : ifa->kit->getOrCreateConstraintSet(kind))
      cons.dump();
  }

  // QZ: The dynamic labeling system requires too much change on the original
  // code, so we are doing a simple rewrite of the constraints to fit the
  // predicate on dynamic labeling.

  // assuming at most one distinct dynamic label for now
  errs() << "source-sink-taint:\n";
  std::string dynamic_label;
  for (auto sv : ifa->sourceVariables) {
    if (sv.extras.size() > 0) {
      dynamic_label = sv.extras;
      break;
    }
  }
  if (!dynamic_label.empty()) {
    for (auto cons : ifa->kit->getOrCreateConstraintSet("source-sink-taint")) {
      // assuming dynamic label constraints has constant label on LHS
      if (isa<RLConstant>(cons.lhs())) {
        std::string tmp = dynamic_label;
        std::string str;
        llvm::raw_string_ostream output(str);
        cons.lhs()->dump(output);

        if (output.str().find("-1") != std::string::npos) {
          // errs() << tmp << " :hdhasd: " << output.str() << "\n";

          int cur_idx = tmp.find_first_of(" ?");

          std::string pred = tmp.substr(0, cur_idx);
          std::string predTrue, predFalse;
          predTrue.append("(");
          predTrue.append(pred);
          predTrue.append("==1) => ");
          predFalse = predTrue;
          predFalse.insert(0, "(Not ");
          predFalse.insert(predFalse.size() - 4, ")");
          // errs() << predFalse << " :hdhasd: " << predTrue << "\n";
          tmp = tmp.substr(cur_idx);
          tmp = tmp.substr(tmp.find_first_not_of(" ?"));
          std::string left = tmp.substr(0, tmp.find_first_of(" -<>"));
          tmp = tmp.substr(left.size());
          std::string direction = tmp.substr(0, tmp.find_first_not_of(" -<>"));
          std::string right = tmp.substr(direction.size());

          std::string trueLabel;
          std::string falseLabel;
          
          if (direction =="->") {
            int trueIdx = std::distance(
              RLConstant::RLLevelMap["secret"].begin(),
              std::find(RLConstant::RLLevelMap["secret"].begin(),
                        RLConstant::RLLevelMap["secret"].end(), right));
            int falseIdx = std::distance(
              RLConstant::RLLevelMap["secret"].begin(),
              std::find(RLConstant::RLLevelMap["secret"].begin(),
                        RLConstant::RLLevelMap["secret"].end(), left));

            trueLabel =
                "CONST[secret:" + std::to_string(trueIdx) + "(" + right + ")][]";
            falseLabel =
                "CONST[secret:" + std::to_string(falseIdx) + "(" + left + ")][]";
          }

          else if (direction =="<-"){
            int trueIdx = std::distance(
              RLConstant::RLLevelMap["secret"].begin(),
              std::find(RLConstant::RLLevelMap["secret"].begin(),
                        RLConstant::RLLevelMap["secret"].end(), left));
            int falseIdx = std::distance(
              RLConstant::RLLevelMap["secret"].begin(),
              std::find(RLConstant::RLLevelMap["secret"].begin(),
                        RLConstant::RLLevelMap["secret"].end(), right));

            trueLabel =
                "CONST[secret:" + std::to_string(trueIdx) + "(" + left + ")][]";
            falseLabel =
                "CONST[secret:" + std::to_string(falseIdx) + "(" + right + ")][]";
          }
          else{
              int trueIdx = std::distance(
                  RLConstant::RLLevelMap["secret"].begin(),
                  std::find(RLConstant::RLLevelMap["secret"].begin(),
                            RLConstant::RLLevelMap["secret"].end(), right));
              int falseIdx = std::distance(
                  RLConstant::RLLevelMap["secret"].begin(),
                  std::find(RLConstant::RLLevelMap["secret"].begin(),
                            RLConstant::RLLevelMap["secret"].end(), left));

              trueLabel =
                  "CONST[secret:" + std::to_string(trueIdx) + "(" + right + ")][]";
              falseLabel =
                  "CONST[secret:" + std::to_string(falseIdx) + "(" + left + ")][]";
          }






          // errs() << right << "::::" << left << "\n";

          // int trueIdx = std::distance(
          //     RLConstant::RLLevelMap["secret"].begin(),
          //     std::find(RLConstant::RLLevelMap["secret"].begin(),
          //               RLConstant::RLLevelMap["secret"].end(), right));
          // int falseIdx = std::distance(
          //     RLConstant::RLLevelMap["secret"].begin(),
          //     std::find(RLConstant::RLLevelMap["secret"].begin(),
          //               RLConstant::RLLevelMap["secret"].end(), left));

          // std::string trueLabel =
          //     "CONST[secret:" + std::to_string(trueIdx) + "(" + right + ")][]";
          // std::string falseLabel =
          //     "CONST[secret:" + std::to_string(falseIdx) + "(" + left + ")][]";

          errs() << predTrue << trueLabel << " <: CE" << cons.rhs();
          cons.rhs()->dump(errs() << "[");
          errs() << "]" << cons.getInfo() << "\n";

          errs() << predTrue << "CE" << cons.rhs();
          cons.rhs()->dump(errs() << "[");
          errs() << "] <: " << trueLabel << cons.getInfo() << "\n";

          errs() << predFalse << falseLabel << " <: CE" << cons.rhs();
          cons.rhs()->dump(errs() << "[");
          errs() << "]" << cons.getInfo() << "\n";

          errs() << predFalse << "CE" << cons.rhs();
          cons.rhs()->dump(errs() << "[");
          errs() << "] <: " << falseLabel << cons.getInfo() << "\n";
        }
      } else {
        cons.dump();
      }
    }
  } else {
    for (auto cons : ifa->kit->getOrCreateConstraintSet("source-sink-taint")) {
      cons.dump();
    }
  }
  errs() << "---- Constraints END ----\n\n";

  return false;
}

} // namespace deps

