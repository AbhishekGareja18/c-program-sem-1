#include<stdio.h>
#include<math.h>
void main(){
	int i,n,sum1=0,sum2=1,sum=0;
	float gm=0,hm=0,avg;
	
	printf("enter chose intger value:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
		sum2=sum2*a[i];
		
	}
	avg=(float)sum/n;
	gm=pow(sum2,1/(float)n);
	hm=(gm*gm)/avg;
	printf("%f\n",avg);
	printf("%f\n",gm);
	printf("%f",hm);
}
