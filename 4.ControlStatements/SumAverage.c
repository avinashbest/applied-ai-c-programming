//program to find the sum & average of 5 positive integers
#include <stdio.h>

int main(void)
{
    int i = 1, n, sum = 0;
    float avg;
    printf("Enter 5 positive numbers: ");

    while (i <= 5)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &n);
        if (n < 0)
        {
            printf("Enter only Positive numbers\n");
            continue; // control moves to line 10
        }
        sum += n;
        i++;
    }

    return 0;
}
// Code By: Avinash Kumar.