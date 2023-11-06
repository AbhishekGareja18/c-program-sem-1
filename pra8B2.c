#include<stdio.h>
void main()
{
	int n=101, i;
	while(n<200)
	{
		if(n%7==0 && n%5!=0)
		{
		printf("%d",n);
		}
		n++;
	}
}
