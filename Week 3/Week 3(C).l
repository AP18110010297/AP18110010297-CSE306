%{ #include<studio.h>

int n_lines=0;

%}

%%

\n {++n_lines;}

%%

int main(int argc[],char *argv[])
{
 yyin=fopen("abc.txt", "r"); 
 yylex();
 printf("n# of lines: %d",n_lines);
 printf("\n"); 
 return 0;
}

int yywrap()
{
  return 1;
}