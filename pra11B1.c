#include<stdio.h>
void main()
{
	int n1=0,n2=1,n3,i,num;
	printf("Enter a Number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("%d\t",n1);
		n3=n1+n2;
		n2=n1;
		n1=n3;
	}
}
