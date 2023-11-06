#include<stdio.h>
void main()
{
	int i=1,n,sum=0;
	printf("enter value ");
	scanf("%d",&n);
	while(n>0)
	{                                                          
		sum=sum+i;
		i=i+3;
		n--;
	}
	printf("%d", sum);
}
