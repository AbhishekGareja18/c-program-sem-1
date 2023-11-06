#include<stdio.h>
void main()
{
	int sec,s,h,m;
	printf("enter a sec:");
	scanf("%d",&sec);
	h=sec/3600;
	m=(sec-(h*3600))/60;
	s=sec%60;
	printf("%d %d %d",h,m,s);
	
}
