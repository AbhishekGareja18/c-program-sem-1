#include<stdio.h>
void main()
{
	int i,n,m;
	printf("enter value of N: \n enter vlaue of M:");
	scanf("%d %d",&n,&m);
	if(n<m)
	{
	i=n;
	while(i>=n && i<=m)
	{
		printf("%d\t",n);
		}	
	}
		else if(m<n)
		{
			i=m;
			while(i>=m && i<=n)
			{
				printf("%d\t",m);
			}
		}i++;
	
}
