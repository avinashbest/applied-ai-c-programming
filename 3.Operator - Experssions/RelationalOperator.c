#include <stdio.h>
//Program to understand Relational Operator
int main(void)
{
    int a, b;
    printf("Enter values for a & b: ");
    scanf("%d%d", &a, &b);

    if (a < b)
    {
        printf("%d is less than %d\n", a, b);
    }
    if (a <= b)
    {
        printf("%d is less than or equal to %d\n", a, b);
    }
    if (a == b)
    {
        printf("%d is equal to %d\n", a, b);
    }
    if (a != b)
    {
        printf("%d is not equal to %d\n", a, b);
    }
    if (a > b)
    {
        printf("%d is greater than %d\n", a, b);
    }
    if (a >= b)
    {
        printf("%d is greater than or equal to %d\n", a, b);
    }

    if (a = b) //value of expression is same as the value of b and not 1 or 0.
    {
        printf("\nAssignment Operator\n");
        printf("%d", a = b);
    }

    return 0;
}