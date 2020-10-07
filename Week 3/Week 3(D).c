%{ 
%} 

%s A B DEAD 

%% 
<INITIAL>1 BEGIN INITIAL; 
<INITIAL>0 BEGIN A; 
<INITIAL>[^01\n] BEGIN DEAD; 
<INITIAL>\n BEGIN INITIAL; {printf("Not Accepted\n");} 

<A>1 BEGIN INITIAL; 
<A>0 BEGIN B; 
<A>[^01\n] BEGIN DEAD; 
<A>\n BEGIN INITIAL; {printf("Not Accepted\n");} 

<B>1 BEGIN INITIAL; 
<B>0 BEGIN B; 
<B>[^01\n] BEGIN DEAD; 
<B>\n BEGIN INITIAL; {printf("Accepted\n");} 

<DEAD>[^\n] BEGIN DEAD; 
<DEAD>\n BEGIN INITIAL; {printf("Invalid\n");} 

%% 

int main() 
{ 
	printf("Enter String\n"); 
	yylex(); 
return 0; 
} 

int yywrap()
{
	return 1;
}