#include<stdio.h>
void main()
{
	int x;
	printf("enter an int value:");
	scanf("%d",&x);
	if((x%10)%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd ");
	}
}
