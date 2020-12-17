#include <stdio.h>

int main(void)
{
    char ch = 'a';
    char str[10] = "abcdef";
    float real = 12.34;
    int number = 100;
    double dbl = 12.345678;

    // %d, %s, %c, %lf, %e, %O, %x
    printf("\nCharacter: %c\n", ch);
    printf("Character as integer: %d\n", ch);
    printf("String: %s\n", str);
    printf("Float: %f\n", real);

    printf("Double: %lf\n", dbl);
    printf("Scientific\(e): %e\n", dbl);
    printf("Scientific\(E): %E\n", dbl);

    printf("Integer: %d\n", number);
    printf("Octal: O%o\n", number);
    printf("Hexa-Decimal: 0x%x\n", number);

    printf("Hexa-Decimal: Ox%x   \tString: %s  \tFloat: %f\n\n", number, str, real);

    //h: small => d, i, 0, u, x => for e.g, %hd, %hi etc
    //l: Large => f, e, g
    //%u: unsigned Integer
    //%g: floating point number

    //man printf => linux documentation for printf tons of options
    return 0;
}