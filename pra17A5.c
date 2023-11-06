#include<stdio.h>
void main()
{
	int i,n,*p;
	printf("enter array of element:");
	scanf("%d",&n);
	int arr[n];
	printf("element in array:");
	for( i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}
for( i=0;i<n;i++)
{
	p=&arr[i];
	printf("\n%d",*p);

}}
