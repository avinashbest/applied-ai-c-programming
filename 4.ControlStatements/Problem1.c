#include <stdio.h>
//function to calulate x power y for positive integer
long long unsigned int power(int x, int y)
{
    int res = 1, a = x, b = y;
    while (b != 0)
    {
        if (b % 2 == 0)
        {
            a = a * a;
            b = b / 2;
        }
        else
        {
            res = res * a;
            b = b - 1;
        }
    }
    return res;
}

int main(void)
{
    int x = 4, y = 5;

    long long unsigned int res = power(x, y);

    printf("%d\n", res);

    return 0;
}
// Code By: Avinash Kumar.