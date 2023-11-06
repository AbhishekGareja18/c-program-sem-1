#include<stdio.h>
void main()
{
	int x,y,z=1,i=1;
	printf("enter value of x&y :");
	scanf("%d %d",&x,&y);
	while(i<=y)
	{
		if(y==0)
		{
			printf("i");
		}
		else
		{
			z=z*x;
			i++;
		}
	}
	printf("%d",z);
}
