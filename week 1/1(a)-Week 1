#include<stdio.h>
#include<stdlib.h>
int main(){
	int state=0,i=0;
	char current,input[20];
	printf("Enter input string \t :");
	scanf("%s",input);
	while((current=input[i++])!='\0')
	{
		switch(state)
		{
			case 0: 
				if(current=='p')
					state=1;
				else if(current=='q')
					state=3;
				else
				{
					printf("Invalid token");
					return 0;
				}
				break;
			case 1: 
				if(current=='p')
					state=2;
				else if(current=='q')
					state=3;
				else
				{
					printf("Invalid token");
					return 0;
				}
				break;
			case 2: 
				if(current=='p')
					state=2;
				else if(current=='q')
					state=3;
				else
				{
					printf("Invalid token");
					return 0;
				}
				break;
			case 3:
				if(current=='p')
					state=1;
				else if(current=='q')
					state=4;
				else
				{
					printf("Invalid token");
					return 0;
				}
				break;
			case 4:
				if(current=='p')
					state=1;
				else if(current=='q')
					state=4;
				else
				{
					printf("Invalid token");
					return 0;
				}
				break;
		}
	}
if(state==2 || state==4)
	printf("\n\nString accepted\n\n");
else
	printf("\n\nString not accepted\n\n");
}