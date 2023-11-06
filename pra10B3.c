#include<stdio.h>
void main()
{
    int rev,n,rem,orig;
    printf("Enter a number :");
    scanf("%d",&n);
    orig = n;
    while(n!=0)
    {
          rem= n%10;
          rev=rev*10+rem;
          n/=10;

    }
    if(orig==rev)
    {
        printf("%d is palidrome",orig);
    }
    else{
        printf("%d is not palidrome",orig);
    }
}