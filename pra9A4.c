#include<stdio.h>
void main()
{
	int i=1,n,fac=1;
	printf("enter no.");
	scanf("%d",&n);
	while(i<=n)
	{
		fac=fac*i;
		i++;
	}
	printf("%d\n",fac);
	}

