#include<stdio.h>
void main()
{
    int i=1,n,count = 0;
    printf("Enter A Number : ");
    scanf("%d", &n);
    while(i<=n)
    {
        if(n%i==0)
            count += 1;
            i++;
        
    }
    if(count==2)
    {
        printf("Prime");
    }
    else{
        printf("Not prime\n");
    }
}