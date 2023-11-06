#include<stdio.h>
int interest(int p,int r,int t);
void main()
{
	int p,r,t,res;
	 printf("enter principle vlaue:\n");
	 scanf("%d",&p);
	 printf("enter rate vlaue:\n");
	 scanf("%d",&r);
	 printf("enter time vlaue:\n");
	 scanf("%d",&t);
	 
	 	res=interest(p,r,t);
}
int interest(int p,int r,int t)
{
	float interest;
	printf("simple interest:%f",interest=(p*r*t)/100.0);
}
