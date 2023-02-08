%option noyywrap
%{
    int vowels=0, consonants=0;
%}
%%
[aeiouAEIOU] {vowels++;}
[a-zA-Z] {consonants++;}
%%
int main()
{
    yylex();
    printf("\nVowels = %d\nConsonants = %d\n", vowels, consonants);
    return 0;
}


