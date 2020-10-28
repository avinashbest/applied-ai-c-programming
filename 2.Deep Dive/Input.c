#include <stdio.h>

int main(void)
{
    char str[10];
    float real;
    int number;

    //scanf
    printf("\nEnter number, real, str: ");
    scanf("%d%f%s", &number, &real, str);
    printf("%d\t%f\t%s", number, real, str);

    int day, month, year, age;
    printf("\nEnter day-month-year: ");
    scanf("%d-%d-%d", &day, &month, year); //formatted Input
    scanf("%d", &age);
    printf("%d\/%d\/%d", day, month, year);
    printf("\nAge: %d", age);

    return 0;
}