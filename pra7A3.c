#include<stdio.h>
int main()
{
	float a,b;
	char c;
	printf(" enter aopration :");
	
	scanf("%c",&c);
	printf(" enter a value of a and b:");
	scanf("%f %f",&a,&b);
	printf("%c",c);
	
	switch(c)
	{
		case '+':printf("%f",a+b);
		break;
		case '-':printf("%f",a-b);
		break;
		case '*':printf("%f",a*b);
		break;
		case '/':printf("%f",a/b);
		break;
	}
}
