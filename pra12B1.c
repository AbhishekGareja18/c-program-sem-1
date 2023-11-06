#include<stdio.h>
void main()
{
	int i,j,n,sum=0;
	printf("enter an integer value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int temp=0;
		for(j=1;j<=i;j++)
		{
			temp=temp+j;
		}sum=temp;
	}
	printf("%d",sum);
}
