grammar calc;

line : (expr SEMICOLON)+
     ;

WS : [ \r\n\t]+ -> skip ;

expr : OPEN_PARAN expr CLOSE_PARAN
     | expr PLUS expr
     | expr SUB expr
     | expr MUL expr
     | expr DIV expr
     | expr QUES expr COLON expr
     | INT_LITERAL
     ;

OPEN_PARAN   : '(';
CLOSE_PARAN  : ')';
PLUS         : '+';
SUB          : '-';
MUL          : '*';
DIV          : '/';
QUES         : '?';
COLON        : ':';
INT_LITERAL  : [0-9]+;
SEMICOLON    : ';';
