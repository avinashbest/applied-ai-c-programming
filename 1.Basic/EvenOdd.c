#include <stdio.h>

int main(void)
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

    return 0;
}