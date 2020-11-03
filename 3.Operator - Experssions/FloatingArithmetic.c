//Program to understand the floating point Arithmetic Operations
#include <stdio.h>

int main(void)
{
    float a = -13.4, b = +3.2;            //Unary Operator
    printf("\nSum = %.2f\n", a + b);      //Binary Operator +
    printf("Difference = %.2f\n", a - b); //Binary Operator -
    printf("Product = %.2f\n", a * b);    //Binary Operator *
    printf("Quotient = %.2f\n\n", a / b); //Binary Operator /

    //Mixed Mode Arithmetic
    int x = 7, y = 2;
    float z = 2.0;
    printf("7/2 = %f\n", x / y); //(int / int) = int //Garbage or Random because interpreting integer as floating point
    printf("7/2 = %d\n", x / y);
    printf("7/2.0 = %f\n\n", x / z); //(int/float) or (float/int) = float

    return 0;
}
//Avinash Kumar