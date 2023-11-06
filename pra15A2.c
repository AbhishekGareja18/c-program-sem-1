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
		if(a[i]<0)
		count++;
	}
	printf("Total Negative Number is : %d ",count);
}
