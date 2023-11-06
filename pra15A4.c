#include<stdio.h>
void main()
{
	int n,num;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int a[n],i;
    for(i=0;i<n;i++)
	{
		printf("Enter value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("Enter element you want to find : ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			printf("a[%d]",i);
			
		}
	}
}
	
	
	

	
	
	
