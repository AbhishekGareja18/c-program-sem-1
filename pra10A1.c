#include <stdio.h>
void main()
{
    int num, sum=0, firstDigit, lastDigit;
    printf("Enter any number : ");
    scanf("%d", &num);
    lastDigit = num % 10;
    while(num >= 10)
    {
        num = num / 10;
    }
    firstDigit = num;
    sum = firstDigit + lastDigit; 

    printf("Sum of first and last digit = %d", sum);
}
