grammar calc;

line : expr ';'
     ;

WS : [ \r\n\t]+ -> skip ;

expr : OPEN_PARAN middle=expr CLOSE_PARAN
     | left=expr op=('*'|'/') right=expr
     | left=expr op=('+'|'-') right=expr
     | left=expr op='?' middle=expr op2=':' right=expr
     | INT_LITERAL
     ;

OPEN_PARAN   : '(';
CLOSE_PARAN  : ')';
INT_LITERAL  : [0-9]+;
