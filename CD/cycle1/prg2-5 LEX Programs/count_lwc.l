%option noyywrap
%{
int lines, words, chars;
%}
%%
[a-zA-Z]+ {words++; chars+=yyleng;}
\n {lines++; chars++;}
. {chars++;}
%%
int main()
{
    yylex();
    printf("\nLines = %d\nWords = %d\nChars = %d\n", lines, words, chars);    
    return 0;
}
