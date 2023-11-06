#include<stdio.h>
void main()
{
	int i=1,n,even=0,odd=0;
	while(i<=10)
	{
		printf("enter a number");
		scanf("%d",&n);
		if(n%2==0)
		{
			even=even+1;
		}
		else
		{
			odd=odd+1;
		}
		
		i++;
	}
	printf("%d are even and %d are odd",even,odd);
}
