#include<stdio.h>
void main()
{
	int day;
	printf("enter a number 1 to 7:");
	scanf("%d",&day);
	switch(day)
	{
		case 1:printf("sunday");
		case 2:printf("monday");
		case 3:printf("tuesday");	
		case 4:printf("wednesday");
		case 5:printf("thrusday");
		case 6:printf("friday");
		case 7:printf("saturday");
	}
}
