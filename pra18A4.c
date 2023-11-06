#include<stdio.h>
float rtnmax(float a,float b,float c);
void main()
{
	float a,b,c;
	printf("enter value of a:\n");
	scanf("%f",&a);
	printf("enter value of b:\n");
	scanf("%f",&b);
	printf("enter value of c:\n");
	scanf("%f",&c);
	rtnmax(a,b,c);
}
	float rtnmax(float a,float b,float c)
	{
		if(a>b && a>c)
		printf("a is maximum number");
		if(b>a && b>c)
		printf("b is maximum number");
		if(c>b && c>a)
		printf("c is maximum number");
	}
