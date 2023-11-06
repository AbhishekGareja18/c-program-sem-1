#include<stdio.h>
void main()
{
	int i,n,avg,sum=0,high=0;
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]",i);
	scanf("%d",&a[i]);
		sum=sum+a[i];}
	avg=(sum/n) ;
	for(i=0;i<n;i++)
	{
		if(a[i]>avg){
		high++;}
	}
	printf("%d\n",avg);
	printf("%d",high);
}
