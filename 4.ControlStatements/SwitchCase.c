//Program to perform arithmetic calculation on integers
#include <stdio.h>

int main(void)
{
    char op;
    int a, b;
    printf("Enter Operator: ");
    scanf("%s", &op);
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    switch (op)
    {
    case '+':
        printf("Result = %d\n", a + b);
        break;
    case '-':
        printf("Result = %d\n", a - b);
        break;
    case '*':
        printf("Result = %d\n", a * b);
        break;
    case '/':
        printf("Result = %d\n", a / b);
        break;
    case '%':
        printf("Result = %d\n", a % b);
        break;

    default:
        printf("Invalid Input");
        break;
    }

    return 0;
}
// Code By: Avinash Kumar.