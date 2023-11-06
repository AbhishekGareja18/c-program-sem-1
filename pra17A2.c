
#include<stdio.h>
void main()
{
	int i,*ip;
	float f,*fp;
	double d,*dp;
	char ch,*chp;
		printf("enter character:");
	scanf("%c",&ch);
	printf("enter integer:");
	scanf("%d",&i);
		printf("enter float:");
	scanf("%f",&f);
	printf("enter double:");
	scanf("%lf",&d);

	ip=&i;
	fp=&f;
	dp=&d;
	chp=&ch;
	printf("\ninteger:%d",i);
		printf("\nfloat:%f",f);
	printf("\ndouble:%lf",d);
	printf("\ncharacter:%c",ch);

	printf("\ninteger pointer:%u",*ip);
	printf("\nfloat pointer:%u",*fp);
	printf("\ndouble pointer:%u",*dp);
	printf("\ncharacter pointer:%u",*chp);
	
	
}
