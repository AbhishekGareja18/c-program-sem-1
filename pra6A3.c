#include<stdio.h>
void main()
{
	char ch;
	printf("enter a character:");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	{
		printf("uper case");
	}
	else if(ch>='a' && ch<='z')
	{
		printf("lower case");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("digits");
	}
	else
	{
		printf("symbol");
	}
}
