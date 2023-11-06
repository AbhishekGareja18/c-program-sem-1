#include<stdio.h>
void main()
{
	int i=1,n,result;
	printf("enter chose table");
	scanf("%d",&n);
	while(i<=10)
	{
		result=n*i;
		printf("%d * %d = %d\n",n,i,result);
		i++;
	}
	
}
