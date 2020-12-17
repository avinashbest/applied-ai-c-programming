#include <stdio.h>

int main(void)
{
    int x, y, z, t;
    x = 5; //Assigning 5 to x
    y = 6;
    z = x + y * 2; //z = 17;
    t = x;

    printf("\nx = %d, y = %d, z = %d, t = %d\n", x, y, z, t);

    x = y = z = 10; //x = 10, y = 10, z = 10

    x = x + 5; // x = 10 + 5 = 15
    //Short hand
    //x = x + 5
    x += 5; //x = 15 + 5 = 20

    y *= 5; // y = y * 5
    z /= 2; // z = z / 2
    x %= 5; // x = x % 5

    printf("\nx = %d, y = %d, z = %d, t = %d\n\n", x, y, z, t);

    return 0;
}
//Avinash Kumar