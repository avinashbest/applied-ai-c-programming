#include <stdio.h>
#include <math.h>
//Program Prime Number: Better & Optimized
// n -> 2,3,4,5,6,7,8,9...(n-1) => Earlier
// n%2, n%3, n%4 ... n%(n-1)

//n -> 2,3,4,5, ... sqrt(n) => Optimized
// n%2, n%3, n%4 ... floor|_sqrt(n)_|

int main()
{
    int a, i;
    printf("Enter a Number: ");
    scanf("%d", &a);

    for (i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            break;
        }
    }

    if (i > sqrt(a))
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not Prime\n");
    }

    return 0;
}