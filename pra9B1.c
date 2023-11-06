#include<stdio.h>
void main()
{
    int n = 26, i=1;
    while (i <= n)
    {
        printf("\n%c", i + 64);
        printf("\t%c", i + 96);
        i++;
    }
}