#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter value of a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	a>b && a>c ? printf("a is largest") : printf("");
	b>a && b>c ? printf("b is largest") : printf("");
	c>b && c>a ? printf("c is largest") : printf("");
}
