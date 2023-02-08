%{
#include<string.h>
%}

%%
abc {strcpy(yytext, "ABC");ECHO;}
. ECHO;
\n ECHO;
%%
int yywrap()
{
    fclose(yyout);
    return 1;
}

int main()
{
    yyout = fopen("out.txt", "w");
    yylex();
    return 0;
}


