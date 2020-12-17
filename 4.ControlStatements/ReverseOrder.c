#include <stdio.h>
//Program to print numbers in reverse order with a difference of 2
int main(void)
{
    int k;

    for (int k = 10; k >= 2; k -= 2)
    {
        printf("%d\t", k);
    }
    printf("\n");

    return 0;
}
// Code By: Avinash Kumar.