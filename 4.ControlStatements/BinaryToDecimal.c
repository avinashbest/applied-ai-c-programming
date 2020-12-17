//Program to convert a binary number to a decimal number
#include <stdio.h>

int main(void)
{
    int n, binary, remainder, d, decimal = 0;
    int j = 1; //j = 2^0 = 1
    printf("Enter the number in binary: ");
    scanf("%d", &n);

    binary = n;

    while (n != 0)
    {
        remainder = n % 10; //taking last digit of n
        d = remainder * j;
        decimal += d;
        j = j * 2;
        n = n / 10; //skipping the last digit
    }

    printf("Binary No = %d\tDecimal No = %d\n\n", binary, decimal);

    return 0;
}
// Code By: Avinash Kumar.