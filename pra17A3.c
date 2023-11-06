#include<stdio.h>
void main()
{

int a,b,*p,*q,sum;
scanf("%d %d",&a,&b);
p=&a;
q=&b;
sum=*p+*q;
printf("sum of entered number=%d",sum);

}


