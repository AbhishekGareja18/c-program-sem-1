#include<stdio.h>
void main()
{
	int i=1,n,sum=0,a;
	float avg;
	printf("enter number of n:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("enter a number:");
		scanf("%d",&a);
		sum=sum+a;
		i++;
	}
	avg=sum/a;
	printf("%d\n",sum);
	printf("%f",avg);
}
