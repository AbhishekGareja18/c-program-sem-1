#include<stdio.h>
void main()
{
	int i,j,n,temp=0;
		scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
	
		printf("enter a[%d]",i);
	scanf("%d",&a[i]);
	
	}
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++){
		if(a[j]>a[j+1]){
    	temp=a[i];
    	a[i]=a[j];
    	a[j]=temp;
	
		}
	}	
	
} 
for(i=0;i<n;i++){

printf("\n%d",a[i]);	
}
}













