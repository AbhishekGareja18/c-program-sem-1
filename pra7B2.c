#include<stdio.h>
void main()
{
	char a;
	printf("enter value of char.:");
	scanf("%c",&a);
	a>='a' && a<='z'||a>='A' && a<='Z'?printf("char. is  alphabet") :printf("char. is not alphabet");
	
}
