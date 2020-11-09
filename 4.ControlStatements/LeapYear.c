#include <stdio.h>
//Program to check Leap Year
int main(void)
{
    int year;
    printf("Enter Year: ");
    scanf("%d", &year);
    //Nested if-else
    if (year % 100 != 0)
    {
        if (year % 4 == 0)
        {
            printf("Leap Year\n");
        }
        else
        {
            printf("Not Leap Year\n");
        }
    }
    else
    {
        if (year % 400 == 0)
        {
            printf("Leap Year\n");
        }
        else
        {
            printf("Not Leap Year\n");
        }
    }

    return 0;
};
// Code By: Avinash Kumar.