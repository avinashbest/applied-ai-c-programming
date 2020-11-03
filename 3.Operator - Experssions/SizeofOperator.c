#include <stdio.h>

int main(void)
{
    int a;

    printf("\n%d\n", sizeof(int)); //datatype
    printf("%d\n", sizeof(a));     //variable
    printf("%d\n\n", sizeof(2));   //constant

    return 0;
}