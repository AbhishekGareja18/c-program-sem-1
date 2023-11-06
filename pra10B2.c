#include<stdio.h>
void main()
{
    int a,b,x,y,temp,HCF,LCM;
    printf("Enter a and b :");
    scanf("%d%d",&a,&b);
    x=a;
    y=b;
    while(y!=0){
        temp=y;
        y=x%y;
        x=temp;
    }
    HCF=x;
    LCM=(a*b)/HCF;
    printf("HCF of %d and %d is %d\n",a,b,HCF);
    printf("LCM of %d and %d is %d\n",a,b,LCM);
}
