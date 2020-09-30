
// Generated from calc.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "calcParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by calcParser.
 */
class  calcVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by calcParser.
   */
    virtual antlrcpp::Any visitLine(calcParser::LineContext *context) = 0;

    virtual antlrcpp::Any visitExpr(calcParser::ExprContext *context) = 0;


};

