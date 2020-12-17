/*
Program to generate fibonacci series
1, 1, 2, 3, 5, 8, 13, 34, 55, 89, ...
In this series each number is a sum of the previous two numbers
*/
#include <stdio.h>

int main(void)
{
    long firstTerm = 0, secondTerm = 1, thirdTerm;
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("%ld\t%ld", firstTerm, secondTerm);

    for (int i = 1; i < n; i++)
    {
        thirdTerm = firstTerm + secondTerm;
        printf("\t%d", thirdTerm);
        firstTerm = secondTerm;
        secondTerm = thirdTerm;
    }
    printf("\n");

    return 0;
}
// Code By: Avinash Kumar.