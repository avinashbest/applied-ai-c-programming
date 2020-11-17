#include <stdio.h>
// Program to print the sum of digits of any number
int main(void)
{
    int n, sum = 0, remainder;
    printf("Enter Number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        remainder = n % 10; //Taking last digit of n
        sum += remainder;
        n = n / 10; //Skipping last digit of n
    }

    printf("Sum of the digits is %d\n\n", sum);

    return 0;
}
// Code By: Avinash Kumar.