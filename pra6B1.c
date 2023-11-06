#include<stdio.h>
void main()
{
	float unit,amount,charge,totalbill;
	printf("enter number of unit:");
	scanf("%f",&unit);
	scanf("%f",totalbill);
	if(unit<50)
	{
		totalbill=unit*0.50;
		printf("%f",totalbill);
	}
	else if(unit>=50 && unit>150)
	{
		totalbill=(unit-100)*0.75+50*0.5;
		printf("%f",totalbill);		
	}
	else if(unit>=150 && unit<250)
	{
		totalbill=(unit-150)*1.20+100*0.75+50*0.5;
		printf("%f",totalbill);
	}
	else if(unit>=250)
	{
		totalbill=(unit-250)*1.50+150*1.2+100*0.75+50*0.5;
		printf("%f",totalbill);
	}

		
	
}
