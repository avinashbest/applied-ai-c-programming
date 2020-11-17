#include <stdio.h>

int main(void)
{
    int x, y, m, n;
    scanf("%d %d", &x, &y);
    //Assume x>0 and y>0

    m = x;
    n = y;
    //Euclid's Algorithm to calculate GCD of a number
    while (m != n)
    {
        if (m > n)
        {
            m = m - n;
        }
        else
        {
            n = n - m;
        }
        printf("%d", n);
    }
    /*
    The program computes:
    a). x / y using repeated subtraction
    b). x mod y using repeated subtraction
    c). the greatest common divisor of x and y => correct
    d). the least common multiple of x and y
    */

    return 0;
}
// Code By: Avinash Kumar.