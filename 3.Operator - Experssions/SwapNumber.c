#include <stdio.h>
//Program to interchange the value of two variables using comma operators
int main(void)
{
    int a = 8, b = 7, temp;
    printf("\na = %d\tb = %d\n", a, b);

    temp = a, a = b, b = temp; //Swapping using comma operator

    printf("a = %d\tb = %d\n\n", a, b);

    return 0;
}