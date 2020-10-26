#include <stdio.h>
#include <stdlib.h>
//Simplest way for Prime Number
int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d", &a);

    for (int i = 2; i <= a - 1; i++)
    {
        if (a % i == 0)
        {
            printf("Not Prime, Divisible by %d :(", i);
            exit(0);
        }
    }

    printf("Prime :)");
    return 0;
}