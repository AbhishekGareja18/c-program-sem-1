#include<stdio.h>
void main()
{
	int n;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int a[n],i,count=0;
	for(i=0;i<n;i++)
	{
		printf("Enter value of a[%d] : ",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%3==0)
		count++;
	}
	printf(" Number divisible by 3 is : %d ",count);
}
