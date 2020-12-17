#include <stdio.h>
//Program to understand Logical/Boolean Operators
int main(void)
{
    int a = 40, b = 20;
    int c = 20, d = 30;
    //AND
    if (a > b && a != 0)
    {
        printf("\n\n&& Operator: Both Conditions are true\n");
    }
    //OR
    if (c > d || d != 20)
    {
        printf("|| Operator: Only One Conditions is true\n");
    }
    //NOT
    if (!(a > b && a != 0))
    {
        printf("! Operator: Both Conditions are true\n");
    }
    else
    {
        printf("! Operator: Both Conditions are true. But, status is inverted as false\n");
    }

    if (a && b)
    {
        printf("\na && b\n");
    }

    if (a && 0)
    {
        printf("a && 0\n");
    }

    if (a || 0)
    {
        printf("a || 0\n");
    }

    return 0;
}