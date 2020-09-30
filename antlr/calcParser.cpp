
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

std::vector<calcParser::ExprContext *> calcParser::LineContext::expr() {
  return getRuleContexts<calcParser::ExprContext>();
}

calcParser::ExprContext* calcParser::LineContext::expr(size_t i) {
  return getRuleContext<calcParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> calcParser::LineContext::SEMICOLON() {
  return getTokens(calcParser::SEMICOLON);
}

tree::TerminalNode* calcParser::LineContext::SEMICOLON(size_t i) {
  return getToken(calcParser::SEMICOLON, i);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(7); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(4);
      expr(0);
      setState(5);
      match(calcParser::SEMICOLON);
      setState(9); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == calcParser::OPEN_PARAN

    || _la == calcParser::INT_LITERAL);
   
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

std::vector<calcParser::ExprContext *> calcParser::ExprContext::expr() {
  return getRuleContexts<calcParser::ExprContext>();
}

calcParser::ExprContext* calcParser::ExprContext::expr(size_t i) {
  return getRuleContext<calcParser::ExprContext>(i);
}

tree::TerminalNode* calcParser::ExprContext::CLOSE_PARAN() {
  return getToken(calcParser::CLOSE_PARAN, 0);
}

tree::TerminalNode* calcParser::ExprContext::INT_LITERAL() {
  return getToken(calcParser::INT_LITERAL, 0);
}

tree::TerminalNode* calcParser::ExprContext::PLUS() {
  return getToken(calcParser::PLUS, 0);
}

tree::TerminalNode* calcParser::ExprContext::SUB() {
  return getToken(calcParser::SUB, 0);
}

tree::TerminalNode* calcParser::ExprContext::MUL() {
  return getToken(calcParser::MUL, 0);
}

tree::TerminalNode* calcParser::ExprContext::DIV() {
  return getToken(calcParser::DIV, 0);
}

tree::TerminalNode* calcParser::ExprContext::QUES() {
  return getToken(calcParser::QUES, 0);
}

tree::TerminalNode* calcParser::ExprContext::COLON() {
  return getToken(calcParser::COLON, 0);
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

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(17);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case calcParser::OPEN_PARAN: {
        setState(12);
        match(calcParser::OPEN_PARAN);
        setState(13);
        expr(0);
        setState(14);
        match(calcParser::CLOSE_PARAN);
        break;
      }

      case calcParser::INT_LITERAL: {
        setState(16);
        match(calcParser::INT_LITERAL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(39);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(37);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(19);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(20);
          match(calcParser::PLUS);
          setState(21);
          expr(7);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(22);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(23);
          match(calcParser::SUB);
          setState(24);
          expr(6);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(25);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(26);
          match(calcParser::MUL);
          setState(27);
          expr(5);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(28);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(29);
          match(calcParser::DIV);
          setState(30);
          expr(4);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(31);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(32);
          match(calcParser::QUES);
          setState(33);
          expr(0);
          setState(34);
          match(calcParser::COLON);
          setState(35);
          expr(3);
          break;
        }

        } 
      }
      setState(41);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
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
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);
    case 3: return precpred(_ctx, 3);
    case 4: return precpred(_ctx, 2);

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
  "", "", "'('", "')'", "'+'", "'-'", "'*'", "'/'", "'?'", "':'", "", "';'"
};

std::vector<std::string> calcParser::_symbolicNames = {
  "", "WS", "OPEN_PARAN", "CLOSE_PARAN", "PLUS", "SUB", "MUL", "DIV", "QUES", 
  "COLON", "INT_LITERAL", "SEMICOLON"
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
    0x3, 0xd, 0x2d, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x6, 0x2, 0xa, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0xb, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x14, 
    0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x28, 0xa, 
    0x3, 0xc, 0x3, 0xe, 0x3, 0x2b, 0xb, 0x3, 0x3, 0x3, 0x2, 0x3, 0x4, 0x4, 
    0x2, 0x4, 0x2, 0x2, 0x2, 0x31, 0x2, 0x9, 0x3, 0x2, 0x2, 0x2, 0x4, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x7, 0x5, 0x4, 0x3, 0x2, 0x7, 0x8, 0x7, 0xd, 
    0x2, 0x2, 0x8, 0xa, 0x3, 0x2, 0x2, 0x2, 0x9, 0x6, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0xb, 0x3, 0x2, 0x2, 0x2, 0xb, 0x9, 0x3, 0x2, 0x2, 0x2, 0xb, 0xc, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x3, 0x3, 0x2, 0x2, 0x2, 0xd, 0xe, 0x8, 0x3, 
    0x1, 0x2, 0xe, 0xf, 0x7, 0x4, 0x2, 0x2, 0xf, 0x10, 0x5, 0x4, 0x3, 0x2, 
    0x10, 0x11, 0x7, 0x5, 0x2, 0x2, 0x11, 0x14, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x14, 0x7, 0xc, 0x2, 0x2, 0x13, 0xd, 0x3, 0x2, 0x2, 0x2, 0x13, 0x12, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x29, 0x3, 0x2, 0x2, 0x2, 0x15, 0x16, 0xc, 
    0x8, 0x2, 0x2, 0x16, 0x17, 0x7, 0x6, 0x2, 0x2, 0x17, 0x28, 0x5, 0x4, 
    0x3, 0x9, 0x18, 0x19, 0xc, 0x7, 0x2, 0x2, 0x19, 0x1a, 0x7, 0x7, 0x2, 
    0x2, 0x1a, 0x28, 0x5, 0x4, 0x3, 0x8, 0x1b, 0x1c, 0xc, 0x6, 0x2, 0x2, 
    0x1c, 0x1d, 0x7, 0x8, 0x2, 0x2, 0x1d, 0x28, 0x5, 0x4, 0x3, 0x7, 0x1e, 
    0x1f, 0xc, 0x5, 0x2, 0x2, 0x1f, 0x20, 0x7, 0x9, 0x2, 0x2, 0x20, 0x28, 
    0x5, 0x4, 0x3, 0x6, 0x21, 0x22, 0xc, 0x4, 0x2, 0x2, 0x22, 0x23, 0x7, 
    0xa, 0x2, 0x2, 0x23, 0x24, 0x5, 0x4, 0x3, 0x2, 0x24, 0x25, 0x7, 0xb, 
    0x2, 0x2, 0x25, 0x26, 0x5, 0x4, 0x3, 0x5, 0x26, 0x28, 0x3, 0x2, 0x2, 
    0x2, 0x27, 0x15, 0x3, 0x2, 0x2, 0x2, 0x27, 0x18, 0x3, 0x2, 0x2, 0x2, 
    0x27, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x27, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x27, 
    0x21, 0x3, 0x2, 0x2, 0x2, 0x28, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x29, 0x27, 
    0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x2b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x6, 0xb, 0x13, 0x27, 
    0x29, 
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
