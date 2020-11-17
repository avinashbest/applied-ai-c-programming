#include <stdio.h>

int func(int num)
{
    int count = 0;
    while (num)
    {
        count++;
        num >>= 1; //right-shift operator
    }
    return count;
}

int main(void)
{
    //The value returned by the func(435) is ______
    // a). 8
    // b). 9 => correct
    // c). 10
    // d). 11

    int res = func(435);
    printf("%d", res);
    return 0;
}
// Code By: Avinash Kumar.