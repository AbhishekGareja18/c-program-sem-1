#include<stdio.h>
void main()
{
	int k,m,b=1;
	printf("Enter size of matrix : ");
	scanf("%d%d",&k,&m);
	int a[k][m],i,j;

	for(i=0;i<k;i++)
	{
		for(j=0;j<m;j++)
		{
				printf("Enter marks of Student %d : ",b++);
			
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<m;j++)
		{
			
		printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		
	}

