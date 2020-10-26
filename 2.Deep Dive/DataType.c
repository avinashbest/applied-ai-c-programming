#include <stdio.h>

int main(void)
{
    printf("\nSize of char = %u Byte\n", sizeof(char));

    printf("Size of short = %u Bytes\n", sizeof(short)); //Short int
    printf("Size of long = %u Bytes\n", sizeof(long));   //long int

    printf("Size of int = %u Bytes\n", sizeof(int)); // Usually 4 bytes in 64-bits

    printf("Size of long int = %u Bytes\n", sizeof(long int));
    printf("Size of long long int = %u Bytes\n", sizeof(long long int));

    printf("Size of Unsigned int = %u Bytes\n", sizeof(unsigned int));
    printf("Size of Unsigned char = %u Byte\n", sizeof(unsigned char));

    printf("Size of float = %u Bytes\n", sizeof(float));
    printf("Size of double = %u Bytes\n", sizeof(double));
    printf("Size of long double = %u Bytes\n\n", sizeof(long double));

    return 0;
}
