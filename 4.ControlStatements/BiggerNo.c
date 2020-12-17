#include <stdio.h>
// Program to print the bigger number
int main(void)
{
    int a, b;
    printf("\nEnter two numbers: ");
    scanf("%d%d", &a, &b);
    // Anyone of the if or else is executed based on the condition
    if (a > b)
    {
        printf("Bigger number = %d\n\n", a);
    }
    else
    {
        printf("Bigger number = %d\n\n", b);
    }

    return 0;
}
// Code By: Avinash Kumar.