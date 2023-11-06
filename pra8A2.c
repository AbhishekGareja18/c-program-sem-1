#include<stdio.h>
void main()
{
	int i=1,n;
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%1==0)
		{
			printf("%d\t",i);
			i=i+2;
		}
	
	}
}
