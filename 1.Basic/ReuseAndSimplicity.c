#include <stdio.h>

int isPrime(int a)
{
    for (int i = 2; i <= a - 1; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    int a;
    int a_p;

    printf("Enter a Number: ");
    scanf("%d", &a);

    a_p = isPrime(a);
    if (a_p == 1)
    {
        printf("%d is Prime", a);
    }
    else
    {
        printf("%d is Not Prime", a);
    }
    //Another Number
    printf("Enter another Number: ");
    scanf("%d", &a);

    a_p = isPrime(a);
    if (a_p == 1)
    {
        printf("%d is Prime", a);
    }
    else
    {
        printf("%d is Not Prime", a);
    }

    return 0;
}