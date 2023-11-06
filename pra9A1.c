#include<stdio.h>
void main()
{
	int i=1,sign=1,n,sum=0;
	printf("enter a value");
	scanf("%d",&n);
	while(n>0)
	{
		sum+=sign*i;
		i++;
		sign=sign-1;
		n--;
	}
	printf("%d",sum);
}
