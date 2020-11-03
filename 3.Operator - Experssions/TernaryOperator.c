#include <stdio.h>
//Program to print the larger of two numbers using conditional operators
int main(void)
{
    int a = 5, b = 8;
    int max;

    // printf("\nEnter values of a and b: ");
    // scanf("%d%d", &a, &b);

    max = (a > b) ? a : b; //Ternary Operator

    printf("\nLarger among %d and %d is %d\n\n", a, b, max);

    int x = 3, y = 4, z = 2;
    max = ((x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z)); //Maximum of 3 variables

    printf("Larger among %d, %d and %d is %d\n\n", x, y, z, max);

    return 0;
}