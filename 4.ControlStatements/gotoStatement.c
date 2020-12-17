#include <stdio.h>
//Program to find whether a number is even or odd
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        goto even;
    }
    else
    {
        goto odd;
    }
even:
    printf("Even\n");
    goto end;
odd:
    printf("Odd\n");
    goto end;
end:
    printf("\n");
    return 0;
}
// Code By: Avinash Kumar.