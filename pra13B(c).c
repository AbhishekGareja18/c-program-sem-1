#include<stdio.h>
void main()
{
	int i,j,n=5;
	for(i=5;i>=1;i--){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
		}
	}

	
	

