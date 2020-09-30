
// Generated from calc.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "calcVisitor.h"


/**
 * This class provides an empty implementation of calcVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  calcBaseVisitor : public calcVisitor {
public:

  virtual antlrcpp::Any visitLine(calcParser::LineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(calcParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }


};

