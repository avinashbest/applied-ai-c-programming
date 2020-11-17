// Find the sum of this series upto n terms
// 1 + 2 + 4 + 7 + 11 + 16 + ...
#include <stdio.h>

int main(void)
{
    int n, sum = 0, term = 1;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("\nSeries:\n");
    for (int i = 1; i <= n; i++)
    {
        sum = sum + term;
        term = term + i;
        printf("%d\t", term);
    }
    printf("\n\nSum of the series = %d\n\n", sum);

    return 0;
}
// Code By: Avinash Kumar.