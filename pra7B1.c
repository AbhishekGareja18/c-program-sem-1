#include<stdio.h>
void main()
{
	int a,b,c,d,e,f;
	printf("ENTER A VALUE OF A,B,C:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		printf("%d",a*c);
	}
	else if(b>a)
	{
		printf("%d",b*c);
	}
}
