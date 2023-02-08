%{
#include <stdio.h>
#include "calc.tab.c"
%}

%%
[0-9]+ {  
    yylval = atoi(yytext);
    return INT; 
}
[-+\*\/\(\)\n] return *yytext;
[ \t] {}
. yyerror("invalid character\n");
%%

int yywrap(void) {
    return 1;
}
