#include <stdio.h>
//Program to show the use of comma operator in for loop
int main(void)
{
    for (int i = 0, j = 10; i <= j; i++, j--)
    {
        printf("\ni = %d\ti = %d\n", i, j);
    }

    return 0;
}
// Code By: Avinash Kumar.