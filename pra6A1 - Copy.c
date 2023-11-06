#include<stdio.h>
void main()
{
	float a,b;
	char c;
	printf("enter any fun. to perform:");
	scanf("%c",&c);
	printf("enter value a:");
	scanf("%f",&a);
	printf("enter value b:");
	scanf("%f",&b);
	if(c=='+')
	{
	printf("%f",a+b);
    }
	if(c=='-')
	{
	printf("%f",a-b);
	}
	if(c=='*')
	{
	printf("%f",a*b);
	}
	if(c=='/')
	{
	printf("%f",a/b);
	}
	
}
