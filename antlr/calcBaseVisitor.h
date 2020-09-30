
// Generated from calc.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "calcVisitor.h"
#include "ast.h"

using namespace std;

/**
 * This class provides an empty implementation of calcVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  calcBaseVisitor : public calcVisitor {
public:

  virtual antlrcpp::Any visitLine(calcParser::LineContext *ctx) override {
      return visit(ctx->expr());
  }

  virtual antlrcpp::Any visitExpr(calcParser::ExprContext *ctx) override {
      if(ctx->OPEN_PARAN()){    // If we are on rule 1
          return visit(ctx->middle);
      }
      else if(ctx->left){
          ASTnode* left = visit(ctx->left);
          ASTnode *right = visit(ctx->right);

          // get the operation
          string op = ctx->op->getText();
          switch (op[0]){
              case '+' : return (ASTnode*)new BinaryASTnode("+", left, right);
              case '-' : return (ASTnode*)new BinaryASTnode("-", left, right);
              case '*' : return (ASTnode*)new BinaryASTnode("*", left, right);
              case '/' : return (ASTnode*)new BinaryASTnode("/", left, right);
              case '?' : {
                             auto middle = visit(ctx->middle);
                             return (ASTnode*)new TernaryASTnode(left, middle, right);
                         };
          }
      }
      else{                     // when we are on some integer value
          int value = stoi(ctx->INT_LITERAL()->getText());
          return (ASTnode*)new IntLitASTnode(value);
      }
  }


};

