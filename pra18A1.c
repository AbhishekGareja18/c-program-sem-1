#include<stdio.h>
void main()
{
	int a,b,res;
	printf("enter two integer :");
	scanf("%d %d",&a,&b);
	
	res=add(a,b);
	printf("sum of the two number is %d",res);
}
 int add(int a,int b)
 {
 	int sum;
 	sum=a+b;
 	return sum;
 }
