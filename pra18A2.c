#include<stdio.h>
int maximum(int a,int b);
int minimum(int a,int b);
void main()
{
	int n1,n2,res,res2;
	printf("enter two numbers:\n");
	scanf("%d %d",&n1,&n2);
	res=maximum(n1,n2);
	res2=minimum(n1,n2);
	printf("%d is a maximum number \n",res);
		printf("%d is a minimum number \n",res2);
}
int maximum(int a,int b)
int minimum(int a,int b);
{
	if(a>b)
	return a;
	else 
	return b;
}
int minimum(int a,int b)
{
	if(a>b)
	return b;
	else 
	return a;
}
