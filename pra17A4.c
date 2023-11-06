#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("enter two integer value:\n");
	scanf("%d %d",&a,&b);
	int *ptr1,*ptr2;
	
	printf("before swap a=%d and b=%d",a,b);
	ptr1=&a;
	ptr2=&b;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	printf("\nafter swaping a=%d and b=%d",a,b);
	
}
