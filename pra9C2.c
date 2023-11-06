#include<stdio.h>
void main()
{
  int n,r,m=1,binary=0;
  printf("\nEnter the Number : ");
  scanf("%d",&n);
  while(n!=0)
  {
    r=n%2;
    binary=binary+(r*m);
    m *= 10;
    n /= 2;
  }
  printf("\nBinary Value : %d\n",binary);
}