#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	int flag=1,state=0,k=0,i;
	char keywords[32][11] = {"auto","break","case","char","const","continue","default",
"do","double","else","enum","extern","float","for","goto",
"if","int","long","register","return","short","signed",
"sizeof","static","struct","switch","typedef","union",
"unsigned","void","volatile","while"};
	char ch,str[40],next,copy;
	FILE *fp;
	fp = fopen("sample.txt","r");
	if(fp == NULL)
	{
		printf("\nFile not found");
		return 0;
	}
	while(!feof(fp))
	{
		switch(state)
		{
			case 0:ch=fgetc(fp);
					if(isalnum(ch))
						state = 1;
					else if(ch == '>')
						state = 2;
					else if(ch == '<')
						state = 3;
					else if(ch == '!')
						state = 4;
					else if(ch == '(' || ch == ')' ||ch == '{' ||ch == '}' ||ch == '[' ||ch == ']' ||ch == ',' ||ch == ';' ||ch == ':')
						printf("\n%c : is a punctuator",ch);
					else if(ch == '+' || ch == '-' ||ch == '*' ||ch == '%')
						printf("\n%c : is an arithmetic operator",ch);
					else if(ch == '/')
						state = 5;
					else if(ch == '=')
						state = 6;
					else if(ch == '\"')
						state = 7;
					else if(ch == '\'')
						state = 8;
					else if(ch == '#')
						state = 9;
					else if(ch==EOF) 
						{
							flag=0;
							break;
						}
					break;
			case 1:if(isdigit(ch))
					{	
						while(isdigit(ch))
						{
							str[k++]=ch;
							ch=fgetc(fp);							
						}
						str[k]='\0';
						printf("\n%s : is an integer",str);
						k=0;
						fseek(fp,-1,SEEK_CUR);
						state = 0;	
					}
					else
					{
						while(isalpha(ch))
						{
							str[k++]=ch;
							ch=fgetc(fp);
						}
						str[k]='\0';
						for(i=0;i<32;i++)
						{
							if(strcmp(str,keywords[i])==0)
							{
								printf("\n%s : is a keyword",str);
								k=0;
								fseek(fp,-1,SEEK_CUR);
								state=0;
								break;
							}
						}
						if(i==32)
						{	
							printf("\n%s : is an identifier",str);
							k=0;
							fseek(fp,-1,SEEK_CUR);
							state=0;
							break;
						}
					}
					break;	
			case 2:copy=ch;
					ch=fgetc(fp);
					if(ch == '=' && copy == '>')
					{	
						printf("\n>= : is a relational operator");
						state = 0;
					}
					else
					{
						printf("\n> : is relational operator");
						fseek(fp,-1,SEEK_CUR);
						state= 0;					
					}
					break;
			case 3:copy=ch;
					ch=fgetc(fp);
					if(ch == '=' && copy == '<')
					{
						printf("\n<= : is a relational operator");
						state = 0;
					}
					else
					{	printf("\n< : is relational operator");
						fseek(fp,-1,SEEK_CUR);
						state= 0;					
					}
					break;
			case 4:copy=ch;
					ch=fgetc(fp);
					if(ch == '=' && copy == '!')
					{
						printf("\n!= : is a relational operator");
						state = 0;
					}
					else
					{
						printf("\n! : is bitwise operator");
						fseek(fp,-1,SEEK_CUR);
						state= 0;					
					}
					break;
			case 5:copy=ch;
					ch=fgetc(fp);
					if(ch=='*')
					{
						do{ch=fgetc(fp);}while(ch!='*');
						ch=fgetc(fp);
						if(ch=='/')
						{
							printf("\nMulti-line comment ignored");
							break;
							state=0;
						}
							state=5;
					}
					else if(ch=='/')
					{
						do{ch=fgetc(fp);}while(ch!='\n');
						printf("\nSingle comment ignored");
						state=0;
					}
					else
					{
						printf("\n/ : is an arithmetic operator");
						fseek(fp,-1,SEEK_CUR);
						state=0;
					}
					break;
			case 6:copy=ch;
					ch=fgetc(fp);
					if(ch == '=' && copy == '=')
					{
						printf("\n== : is a relational operator");
						state = 0;
					}
					else
					{
						printf("\n= : is an assignment operator");
						fseek(fp,-1,SEEK_CUR);
						state= 0;					
					}
					break;
			case 7:str[k++] = ch;
					do
					{
						ch = fgetc(fp);
						str[k++] = ch;
					} while (ch != '\"');
					str[k]='\0';
					printf("\n%s : is a string constant",str);
					k=0;
					state = 0;
					break;
			case 8:str[k++] = ch;
					do
					{
						ch = fgetc(fp);
						str[k++] = ch;
					} while (ch != '\'');
					str[k] = '\0';
					printf("\n%s : is a character constant",str);
					k = 0;
					state = 0;
					break;
			case 9:str[k++] = ch;
					do
					{
						ch = fgetc(fp);
						str[k++] = ch;
					} while (ch != '>');
					str[k] = '\0';
					printf("\n%s : is a header file inclusion",str);
					k = 0;
					state = 0;
					break;
			default:printf("\nInvalid input");
					break;
		}
	}
	printf("\n");
	fclose(fp);
	return 0;
}
