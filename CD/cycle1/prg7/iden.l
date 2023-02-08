%{
#include "iden.tab.c"
%}

%%
[0-9]+ { return DIGIT; }
[a-zA-Z_]+ { return CHAR; }
[ \t\n] { return *yytext; }
. yyerror("Invalid character");
%%

int yywrap(void) {
    return 1;
}
