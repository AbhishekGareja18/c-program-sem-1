#include<stdio.h>
void main()
{
     int n,i;
     printf("Enter size of array : ");
     scanf("%d",&n);
     int a[n],b[n];
     for(i=0;i<n;i++)
     {
                       printf("Enter array of a[%d] : ",i);
                       scanf("%d",&a[i]);
                   }
                      for(i=0;i<n;i++) {
					  
                       b[i]=a[i];
     
     printf("\nArray of b[%d] is %d",i,b[i]);}
}
     
