#include <iostream>

#include "antlr4-runtime.h"
#include "calcLexer.cpp"
#include "calcParser.cpp"
#include "calcVisitor.cpp"
#include "calcBaseVisitor.h"
#include "PostFixVisitor.h"

using namespace std;
using namespace antlr4;

int main(int argc, const char* argv[]) {
    std::string line;
    while(cout << "input: " && 
            getline(cin, line) &&
            !line.empty())
    {
        ANTLRInputStream input(line);

        calcLexer lexer(&input);
        CommonTokenStream tokens(&lexer);
        calcParser parser(&tokens);    
        parser.setBuildParseTree(true);
        calcParser::LineContext *tree = parser.line();
        auto *visitor = new calcBaseVisitor();


        ASTnode* root = visitor->visitLine(tree);

        PostFixVisitor pfv;
        BinaryASTnode *bnode;
        TernaryASTnode *tnode;
        IntLitASTnode *inode;

        std::cout << "Postfix Form: " << std::endl;

        bnode = dynamic_cast<BinaryASTnode *>(root);
        if (bnode != NULL)
            pfv.visit(*bnode);

        tnode = dynamic_cast<TernaryASTnode *>(root);
        if (tnode != NULL)
            pfv.visit(*tnode);

        inode = dynamic_cast<IntLitASTnode *>(root);
        if (inode != NULL)
            pfv.visit(*inode);

        std::cout <<  std::endl;
    }
    return 0;
}
