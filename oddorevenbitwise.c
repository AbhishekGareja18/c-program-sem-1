#include<stdio.h>

void main()  
{
	int a,b;
	printf("enter an integer val");
	scanf("%d",&a);
	b=a%2&1;
	if(b==1)
	{
		printf("number is odd");
	}
	else
	{
		printf("number is even");
	}
	
}
