#include <iostream>

#include "antlr4-runtime.h"
#include "calcLexer.cpp"
#include "calcParser.cpp"
#include "calcVisitor.cpp"
#include "calcBaseVisitor.h"

using namespace std;
using namespace antlr4;

int main(int argc, const char* argv[]) {
    std::ifstream ins;
    ins.open(argv[1]);
    
    ANTLRInputStream input(ins);
    calcLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    /*cout << "Tokens:" << endl;
    tokens.fill();
    for(Token *token: tokens.getTokens()){
        cout << token-> toString() << endl;
    }*/
    calcParser parser(&tokens);    
    parser.setBuildParseTree(true);

    /*tree::ParseTree *tree = parser.program();*/
    calcParser::LineContext *tree = parser.line();
    auto *visitor = new calcBaseVisitor();
    visitor->visitLine(tree);
    cout << endl << "Parse tree (List format):" << endl;
    cout << tree->toStringTree(&parser) << endl;
    return 0;
}
