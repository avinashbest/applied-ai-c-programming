#include <stdio.h>
//Program to print number from 1 to 10 using while loop
int main(void)
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d\t", i);
        i = i + 1; //Statement that changes the value of condition
    }
    printf("\n\n");

    do
    {
        printf("%d\t", i);
        i++;
    } while (i <= 10);
    printf("\n\n");

    return 0;
}
// Code By: Avinash Kumar.