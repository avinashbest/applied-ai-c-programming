# Programming:

- Sequence of instructions (precise) that we give to a computer to perform a task.

# Why C?

- Java(android), C++, Python(AI, ML), JS(Website Building), PHP, etc.
- Every language has its role.
- Operating System => Android, Linux, Windows, Mac, ios => Written in C/C++ (Kernal => Heart of a OS)
- Scientific Computing Tools:- AI/ML {Tensorflow => core written in C/C++ by Google}, Weather forecasting, Biology
- Gaming S/W => C/C++ => Because they have to very fast.
- Device Drivers => C/C++
- Hardware/IoT Programming => C/C++ (Controlling Hardware)

<!-- Image What inside PC? -->
<!-- CPU Work-fLow -->
<!-- C Program Workflow -->

# Basic Input & Output:

    ```
    #include<stdio.h>

    int main()
    {
        printf("Hello World");  //Print Formatted on STD O/P Device.
        return 0;
    }
    ```

    ```
    #include<stdio.h>

    int main()
    {
        char name[100];

        printf("Whats Your Name? ");
        scanf("%s", name);  //Scan Formatted from STD I/P Device.
        printf("\nHello, %s", name);

        return 0;
    }
    ```

- Prime Number (Core) -> Password/Banking/LogIn => Encryption(Key Concept) => Cryptography
- Sending password in encrypted form from one computer to another computer.

# Character Set:

- Set of character that are used in C

  - UpperCase Alphabets
  - LowerCase Alphabets
  - Digits
  - White Space -> New Line, Tabs
  - Special Character +,\*,<,>,\$,#,!

- There are two type of Character Set used generally:

  1. ASCII (Older) => 0 to 255 [256 Numbers]
  <!-- ASCII Character Set Image -->
  2. Unicode (Modern) => 1,114,112 Unique Characters

- C follows ASCII Character Set Standard Only.

  1. 0 to 127 => Printable Characters
  2. 128 to 255 => Non-Printable Characters

- Any Character Set ==> Converted (Nummeric form) ==> Binary Representation ==> RAM/DISK (store)

# Keywords & Identifiers:

- 32 Keywords are predefined words in C that we cannot use, they have special meaning.
<!-- Image 32 Keywords-->
- Identifiers are the word that we use to make variable name function name and many other things.
- In General, Identifier is valid word in C.

- Rule for Identifier:

  1. Alphabets, \_(underscore), digits
  2. First character => Alphabet
  3. Not Keyword
  4. Case - Sensitive
  5. Length of Identifier => Compiler/Implementation
     - Older compiler => 8 character
     - ANSI C Standard => Most Compiler => 31 character

- Some Compilers: GCC, Visual Studio, Borland, Clang, intel, etc.

# Data Types:

- Primary => void, char, int, float(Single precision real values), double(double precision real values)
- Qualifiers:
  1. short, long
  2. signed, unsigned
- Secondary => Arrays, Strings, Pointers, Structure, enumerator.

  |     Data Types     |           Range            | Bytes | Format |
  | :----------------: | :------------------------: | :---: | :----: |
  |    signed char     |        -128 to +127        |   1   |   %c   |
  |   unsigned char    |          0 to 255          |   1   |   %c   |
  |  short signed int  |      -32768 to +32767      |   2   |   %d   |
  | short unsigned int |        0 to 653535         |   2   |   %u   |
  |     signed int     |      -32768 to +32767      |   2   |   %d   |
  |    unsigned int    |        0 to 653535         |   2   |   %u   |
  |  long signed int   | -2147483648 to +2147483647 |   4   |  %ld   |
  | long unsigned int  |      0 to 4294967295       |   4   |  %lu   |
  |       float        |     -3.4e38 to +3.4e38     |   4   |   %f   |
  |       double       |    -1.7e308 to +1.7e308    |   8   |  %lf   |
  |    long double     |   -1.7e4932 to +1.7e4932   |  10   |  %Lf   |

- The size and ranges of int, short and long are compiler dependent, Sizes in above table are for 16-bit compiler.

# Variables:

- All variables names is identifiers.
- Every variable should have a datatypes.
- Declaration: Stating that a variable exists. for e.g, int a;
- Always declare before using variable otherwise compiler will through a error.
- Typically, We should use camelCase to represent a variable name.
- Initialization: Storing some value during declaration. for e.g, int a = 19;

# Constants:

- Do not change throughout of the program. for e.g, const int a = 5;
- Types of constant: char, string, integer, real-valued

| Data Types  |                    Example                     |
| :---------: | :--------------------------------------------: |
|     int     |                  int a = 10;                   |
|    char     |                char name = 'a'                 |
|   string    |           char name[10] = "avinash"            |
| real-valued | float: 1.2F or 1.2f, 1.2e5, long: 1.2L or 1.2l |

- Decimal System: 0,1,2,3,4,5,6,7,8,9 => Base 10

|  1   |  2   |  3   |
| :--: | :--: | :--: |
|  x   |  x   |  x   |
| 10^2 | 10^1 | 10^0 |
| 100  | +20  |  +3  | = 123(Decimal) |

- Octal System: 0,1,2,3,4,5,6,7,8 => Base 8 => int a = 012;

|  0  |  1  |  2  |
| :-: | :-: | :-: |
|  -  |  x  |  x  |
|  -  | 8^1 | 8^0 |
|  -  |  8  | +2  | = 10(Decimal) |

- Hexa-Decimal System: 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f => Base 16 => int a = 0x12;

|  0  |  x  |  1   |  2   |
| :-: | :-: | :--: | :--: |
|  -  |  -  |  x   |  x   |
|  -  |  -  | 16^1 | 16^0 |
|  -  |  -  |  16  |  +2  | = 18(Decimal) |

- Symbolic Constant: #define PI 3.14 => Macro

# C Book:

- C in Depth: By Srivastsava
- K & R -> C

# Input Output:

- #include <stdio.h> => Including Header file where some of the key information of printf and scanf how they work is stored in stdio.h header file.

- Escape Sequence:
<!-- Image -->
- scanf can take input multiple variables value in single line of code.

# Input Output Formatting:

- Integers: scanf("%2d %3d", &a, &b); //Formatted Input

  ```
    a: read only first 2 digits
    b: read only first 3 digits

    Case 1: 6, 39 => a = 6 b = 39
    Case 2: 12, 123 => a = 12 b = 123
    Case 3: 123, 1234 => a = 12 b = 3
    Case 4: 12, 1234 => a = 12 b = 123
  ```

- Integers: printf("a = %4d, b = %3d", a, b); //Formatted Output

```
    a: print atmost(Minimum no. of digit) 4 digits
    b: print atmost(Minimum no. of digit) 3 digits

    Case 1: a = 12, b = 14 => a = _ _ _ _, b = _ _ _ _ => a = __12, b = _14
    Case 2: a = 12345, b = 123456 => a = 12345, b = 123456
```

- float: scanf("%3f %4f", &a, &b); //Formatted Input

  ```
    a: read only first 2 digits(Maximum no. of digits)
    b: read only first 3 digits(Maximum no. of digits)

    Case 1: 5, 5.9 => a = 5.0 b = 5.9
    Case 2: 5.1, 1.23 => a = 5.1 b = 1.23
    Case 3: 1.23, 4.5678 => a = 1.2 b = 3.0
  ```

- float: printf("a = %4.1f, b = %7.2f", a, b); //Formatted Output

```
    a: print atmost(Minimum no. of digit) 4 digits
    b: print atmost(Minimum no. of digit) 7 digits

    Case 1: a = 8.0, b = 5.9 => a = _ _ _ _, b = _ _ _ _ _ _ _=> a = _8.0, b = ___5.90
    Case 2: a = 15.231, b = 65.12345 => a = 15.2, b = __65.12
```

- Strings: char str[10] = "abcdef";

  - Input:
    ```
        Case 1: scanf("%s", str); => abcdef\0 -> str
        Case 2: scanf("%3s", str); => abc\0 -> str
    ```
  - Output:
    ```
        Case 1: printf("%3s", "abcdef"); -> abcdef
        Case 2: printf("%5s", "abcdef"); -> ___ab
        Case 3: printf("%.3s", "abcdef"); -> abc
        Case 4: printf("%8.3s", "abcdef"); -> _____abc
    ```

- Suppresssion Character:

  - scanf("%d%\*d%d", &a, &b, &c); I/P: 25, 30, 35 => O/P: a = 25, b = 35, c = garbage value

  - variable c will suppressed so, nothing is stored

- getchar() & putchar()

```
char c;
printf("Enter a char: ");
c = getchar(); //scanf("%c", &c);

putchar(c); //printf("Value you entered : %c", c);
```
