#include<stdio.h>
void main()
{
    int count=0,n;
    printf("Enter A Number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        count++;
        n=n/10;

    }
    printf("No of digits are : %d\n",count);
}