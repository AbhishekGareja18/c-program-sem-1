#include<stdio.h>
void main()
{
	int a[3][3],i,j;

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
				printf("Enter Value of matrix : ");
			
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
			if(a[i][j]>0)
			{
				printf("%d is Positive\n.",a[i][j]);
			}
			else if(a[i][j]<0)
			{
				printf("%d is Negative.\n",a[i][j]);
			}
			else{
				printf("%d is Zero.\n",a[i][j]);
			}
		}
	}

}
