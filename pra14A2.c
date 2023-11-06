#include<stdio.h>
void main(){
	int i,n,pos=0,neg=0,zero=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
	
	printf("enter a[%d]",i);
	scanf("%d",&a[i]);
	if(a[i]>0){
		pos++;}
		else if(a[i]<0){
			neg++;}
			else{
				zero++;
			}
		}
printf("possitive %d\n",pos);	
printf("negative %d\n",neg);		
printf("zero %d\n",zero);		
	



}
