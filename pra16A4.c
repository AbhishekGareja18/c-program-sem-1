#include<stdio.h>
void main()
{
	int k,m,temp=0;
	printf("Enter size of matrix A : ");
	scanf("%d%d",&k,&m);
	int a[k][m],b[k][m],i,j;

	for(i=0;i<k;i++)
	{
		for(j=0;j<m;j++)
		{
				printf("Enter Value of Matrix A  : ");
		        scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<m;j++)
		{
				printf("Enter Value of Matrix B  : ");
		        scanf("%d",&b[i][j]);
		}
	}
	int c[i][j];
	for(i=0;i<k;i++)
	{
		for(j=0;j<m;j++)
		{
			temp=a[i][j]+b[i][j];
			c[i][j]=temp;
			printf("%d\t",c[i][j]);
		}
			printf("\n");
		}
		
	}

