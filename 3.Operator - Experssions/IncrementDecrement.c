//Prefix Increment / Decrement Operator
#include <stdio.h>

int main(void)
{
    int x = 8;
    printf("\nx = %d\t", x);
    printf("x = %d\t", ++x); //Prefix Increment => first increment then use
    printf("x = %d\t", x);
    printf("x = %d\t", --x); //Prefix Decrement => first decrement then use
    printf("x = %d\n\n", x);

    int y = 8;
    printf("\ny = %d\t", y);
    printf("y = %d\t", y++); //Postfix Increment => first use then increment
    printf("y = %d\t", y);
    printf("y = %d\t", y--); //Postfix Decrement => first use then decrement
    printf("y = %d\n\n", y);

    return 0;
}

/*
Output:
x = 8   x = 9   x = 9   x = 8   x = 8
y = 8   y = 8   y = 9   y = 9   y = 8
*/

//Avinash Kumar