#include<stdio.h>
void main()
{
	float a,b; //a is basic salary b is gross salary
    printf("enter the basic salary (a):");
    scanf("%f",&a);
    if(a<10000)
	{
		b=a+(a*0.15)+(a*0.7);
		printf("%f",b);
	}
	if(a>=10000 && a<20000)
    {
    	b=a+(a*0.2)+(a*0.8);
    	printf("%f",b);
	}
		if(a>=20000 && a<30000)
    {
    	b=a+(a*0.25)+(a*0.9);
    	printf("%f",b);
	}
		if(a>=30000)
    {
    	b=a+(a*0.3)+(a*0.95);
    	printf("%f",b);
	}
	
    
}
