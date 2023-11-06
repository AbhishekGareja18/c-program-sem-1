#include<stdio.h>
int swap(int a,int b);
void main()
{
	int a,b,res,temp=0;
	printf("enter value of a:\n");
	scanf("%d",&a);
	printf("enter value of b:\n");
	scanf("%d",&b);
	res=swap(a,b);
}
int swap(int a,int b)
{
	int temp=0;
	temp=a;
	a=b;
	b=temp;
	printf("\n after swaping a=%d \n b=%d",a,b);
}
