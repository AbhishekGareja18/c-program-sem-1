#include<stdio.h>
void main()
{
	int *b,x;
	b=&x;
	printf("enter value of x");
	scanf("%d",&x);
	printf("value=%d \naddres=%d",x,b);
} 
