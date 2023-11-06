#include<stdio.h>
void main()
{
	int n,sum=0,i=1;
	printf("enter value n");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+n;
		i++;
	}
	printf("%d",sum);
}
