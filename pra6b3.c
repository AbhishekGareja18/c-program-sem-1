#include<stdio.h>
void main()
{
	int a,b,c,A,B,C;
	printf("enter 1stsides of triangle:");
	scanf("%d",&a);
		printf("enter 2ndsides of triangle:");
	scanf("%d",&b);
		printf("enter 3rdsides of triangle:");
	scanf("%d",&c);
	A=a*a,B=b*b,C=c*c;
	if(a+b>c || b+c>a || c+a>b)
	{
	if(a==b && b==c){
		printf("eqilateral tringle");
	}
	else if(a==b || b==c || c==a)
	{
		printf("isosceles tringle");
	}
	else
	{
		printf("not triangle");
	}
}
}
