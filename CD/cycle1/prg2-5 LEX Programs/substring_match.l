%option noyywrap
%{
#include<string.h>
%}

%%
abc {strcpy(yytext, "ABC");ECHO;}
. ECHO;
\n ECHO;
%%

int main()
{
    yylex();
    printf("\n %s",yytext);
    return 0;
}


