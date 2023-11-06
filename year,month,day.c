#include<stdio.h>
void main()
{
	int y,w,d;
	printf("enter days:");
	scanf("%d",&d);
	y=d/365;
	w=(d-(y*365))/7;
	d=d-(y*365)-(w*7);
	printf("%d %d %d",y,w,d);
}
