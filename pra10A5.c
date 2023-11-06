#include<stdio.h>
void main()
{
	int rev,rem,n;
	printf("Enter a number :");
	scanf("%d",&n);
	while(n!=0){
	
	rem=n%10;
	rev=rev*10;
	rev+=rem;
	n=n/10;
}
printf("%d",rev);
}
