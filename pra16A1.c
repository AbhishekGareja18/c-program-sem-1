#include<stdio.h>
void main()
{
	int i,j,k,m;
	printf("Enter Order of matrix1 : ");
	scanf("%d",&i);
		printf("Enter Order of matrix2 : ");
	scanf("%d",&j);
	int a[i][j];
	printf("Enter value of matrix : ");
	for(k=0;k<i;k++)
	{
		for(m=0;m<j;m++){
		scanf("%d",&a[k][m]);
	}
	}
	for(k=0;k<i;k++)
	{
		for(m=0;m<j;m++)
		{
		printf("%d\t",a[k][m]);
		
	}
	printf("\n");
	}
	
	
}
