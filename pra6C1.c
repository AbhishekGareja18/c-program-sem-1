#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter value of a: b: c:");
	scanf("%d %d %d",&a,&b,&c);
	if((a>b && a<c) || (a<b && a>c))
	{
		printf("%d value is 2nd largest number:",a);
	}
	if((b>a && b<c) || (b<a && b>c))
	{
		printf("%d value is 2nd largest number:",b);
	}
	if((c>b && c<a) || (c<b && c>a))
	{
		printf("%d value is 2nd largest number:",c);
	}
	
}
