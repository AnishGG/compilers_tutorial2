
// Generated from calc.g4 by ANTLR 4.8


#include "calcVisitor.h"

#include "calcParser.h"


using namespace antlrcpp;
using namespace antlr4;

calcParser::calcParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

calcParser::~calcParser() {
  delete _interpreter;
}

std::string calcParser::getGrammarFileName() const {
  return "calc.g4";
}

const std::vector<std::string>& calcParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& calcParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- LineContext ------------------------------------------------------------------

calcParser::LineContext::LineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

calcParser::ExprContext* calcParser::LineContext::expr() {
  return getRuleContext<calcParser::ExprContext>(0);
}


size_t calcParser::LineContext::getRuleIndex() const {
  return calcParser::RuleLine;
}


antlrcpp::Any calcParser::LineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcVisitor*>(visitor))
    return parserVisitor->visitLine(this);
  else
    return visitor->visitChildren(this);
}

calcParser::LineContext* calcParser::line() {
  LineContext *_localctx = _tracker.createInstance<LineContext>(_ctx, getState());
  enterRule(_localctx, 0, calcParser::RuleLine);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(4);
    expr(0);
    setState(5);
    match(calcParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

calcParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* calcParser::ExprContext::OPEN_PARAN() {
  return getToken(calcParser::OPEN_PARAN, 0);
}

tree::TerminalNode* calcParser::ExprContext::CLOSE_PARAN() {
  return getToken(calcParser::CLOSE_PARAN, 0);
}

std::vector<calcParser::ExprContext *> calcParser::ExprContext::expr() {
  return getRuleContexts<calcParser::ExprContext>();
}

calcParser::ExprContext* calcParser::ExprContext::expr(size_t i) {
  return getRuleContext<calcParser::ExprContext>(i);
}

tree::TerminalNode* calcParser::ExprContext::INT_LITERAL() {
  return getToken(calcParser::INT_LITERAL, 0);
}


size_t calcParser::ExprContext::getRuleIndex() const {
  return calcParser::RuleExpr;
}


antlrcpp::Any calcParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}


calcParser::ExprContext* calcParser::expr() {
   return expr(0);
}

calcParser::ExprContext* calcParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  calcParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  calcParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, calcParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(13);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case calcParser::OPEN_PARAN: {
        setState(8);
        match(calcParser::OPEN_PARAN);
        setState(9);
        dynamic_cast<ExprContext *>(_localctx)->middle = expr(0);
        setState(10);
        match(calcParser::CLOSE_PARAN);
        break;
      }

      case calcParser::INT_LITERAL: {
        setState(12);
        match(calcParser::INT_LITERAL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(29);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(27);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          _localctx->left = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(15);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(16);
          dynamic_cast<ExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == calcParser::T__1

          || _la == calcParser::T__2)) {
            dynamic_cast<ExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(17);
          dynamic_cast<ExprContext *>(_localctx)->right = expr(5);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          _localctx->left = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(18);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(19);
          dynamic_cast<ExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == calcParser::T__3

          || _la == calcParser::T__4)) {
            dynamic_cast<ExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(20);
          dynamic_cast<ExprContext *>(_localctx)->right = expr(4);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          _localctx->left = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(21);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(22);
          dynamic_cast<ExprContext *>(_localctx)->op = match(calcParser::T__5);
          setState(23);
          dynamic_cast<ExprContext *>(_localctx)->middle = expr(0);
          setState(24);
          dynamic_cast<ExprContext *>(_localctx)->op2 = match(calcParser::T__6);
          setState(25);
          dynamic_cast<ExprContext *>(_localctx)->right = expr(3);
          break;
        }

        } 
      }
      setState(31);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool calcParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool calcParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);
    case 2: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> calcParser::_decisionToDFA;
atn::PredictionContextCache calcParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN calcParser::_atn;
std::vector<uint16_t> calcParser::_serializedATN;

std::vector<std::string> calcParser::_ruleNames = {
  "line", "expr"
};

std::vector<std::string> calcParser::_literalNames = {
  "", "';'", "'+'", "'-'", "'*'", "'/'", "'?'", "':'", "", "'('", "')'"
};

std::vector<std::string> calcParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "WS", "OPEN_PARAN", "CLOSE_PARAN", "INT_LITERAL"
};

dfa::Vocabulary calcParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> calcParser::_tokenNames;

calcParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0xd, 0x23, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x5, 0x3, 0x10, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x7, 0x3, 0x1e, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x21, 0xb, 0x3, 
    0x3, 0x3, 0x2, 0x3, 0x4, 0x4, 0x2, 0x4, 0x2, 0x4, 0x3, 0x2, 0x4, 0x5, 
    0x3, 0x2, 0x6, 0x7, 0x2, 0x24, 0x2, 0x6, 0x3, 0x2, 0x2, 0x2, 0x4, 0xf, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x7, 0x5, 0x4, 0x3, 0x2, 0x7, 0x8, 0x7, 0x3, 
    0x2, 0x2, 0x8, 0x3, 0x3, 0x2, 0x2, 0x2, 0x9, 0xa, 0x8, 0x3, 0x1, 0x2, 
    0xa, 0xb, 0x7, 0xb, 0x2, 0x2, 0xb, 0xc, 0x5, 0x4, 0x3, 0x2, 0xc, 0xd, 
    0x7, 0xc, 0x2, 0x2, 0xd, 0x10, 0x3, 0x2, 0x2, 0x2, 0xe, 0x10, 0x7, 0xd, 
    0x2, 0x2, 0xf, 0x9, 0x3, 0x2, 0x2, 0x2, 0xf, 0xe, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x11, 0x12, 0xc, 0x6, 0x2, 0x2, 0x12, 
    0x13, 0x9, 0x2, 0x2, 0x2, 0x13, 0x1e, 0x5, 0x4, 0x3, 0x7, 0x14, 0x15, 
    0xc, 0x5, 0x2, 0x2, 0x15, 0x16, 0x9, 0x3, 0x2, 0x2, 0x16, 0x1e, 0x5, 
    0x4, 0x3, 0x6, 0x17, 0x18, 0xc, 0x4, 0x2, 0x2, 0x18, 0x19, 0x7, 0x8, 
    0x2, 0x2, 0x19, 0x1a, 0x5, 0x4, 0x3, 0x2, 0x1a, 0x1b, 0x7, 0x9, 0x2, 
    0x2, 0x1b, 0x1c, 0x5, 0x4, 0x3, 0x5, 0x1c, 0x1e, 0x3, 0x2, 0x2, 0x2, 
    0x1d, 0x11, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x14, 0x3, 0x2, 0x2, 0x2, 0x1d, 
    0x17, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x21, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x3, 0x2, 0x2, 0x2, 0x20, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x21, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x5, 0xf, 0x1d, 0x1f, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

calcParser::Initializer calcParser::_init;
