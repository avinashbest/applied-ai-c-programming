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

  ![image](https://drive.google.com/uc?export=view&id=1VHtiutu8pSm5HRb3Ms2GQ4ouARWiH82A)

  ![image](https://drive.google.com/uc?export=view&id=1d8xK2HFH99DNw31xhIW5vZyvfv0MGxFh)

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

  - ASCII (Older) => 0 to 255 [256 Numbers]

    ![image](https://drive.google.com/uc?export=view&id=1yCA0Ih-6LpBevGGMzirhcJyv6zcEq1ed)

  - Unicode (Modern) => 1,114,112 Unique Characters

- C follows ASCII Character Set Standard Only.

  - 0 to 127 => Printable Characters
  - 128 to 255 => Non-Printable Characters

- Any Character Set ==> Converted (Nummeric form) ==> Binary Representation ==> RAM/DISK (store)

# Keywords & Identifiers:

- 32 Keywords are predefined words in C that we cannot use, they have special meaning.

  |   auto   | double |   int    |  struct  |
  | :------: | :----: | :------: | :------: |
  |  break   |  else  |   long   |  switch  |
  |   case   |  enum  | register | typedef  |
  |   char   | extern |  return  |  union   |
  | continue |  for   |  signed  |   void   |
  |    do    |   if   |  static  |  while   |
  | default  |  goto  |  sizeof  | volatile |
  |  const   | float  |  short   | unsigned |

- Identifiers are the word that we use to make variable name function name and many other things.
- In General, Identifier is valid word in C.

- Rule for Identifier:

  - Alphabets, \_(underscore), digits
  - First character => Alphabet
  - Not Keyword
  - Case - Sensitive
  - Length of Identifier => Compiler/Implementation
    - Older compiler => 8 character
    - ANSI C Standard => Most Compiler => 31 character

- Some Compilers: GCC, Visual Studio, Borland, Clang, intel, etc.

# Data Types:

- Primary => void, char, int, float(Single precision real values), double(double precision real values)
- Qualifiers:
  - short, long
  - signed, unsigned
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
  | 100  | +20  |  +3  |

  => 123(Decimal)

- Octal System: 0,1,2,3,4,5,6,7,8 => Base 8 => int a = 012;

  |  0  |  1  |  2  |
  | :-: | :-: | :-: |
  |  -  |  x  |  x  |
  |  -  | 8^1 | 8^0 |
  |  -  |  8  | +2  |

  => 10(Decimal)

- Hexa-Decimal System: 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f => Base 16 => int a = 0x12;

  |  0  |  x  |  1   |  2   |
  | :-: | :-: | :--: | :--: |
  |  -  |  -  |  x   |  x   |
  |  -  |  -  | 16^1 | 16^0 |
  |  -  |  -  |  16  |  +2  |

  => 18(Decimal)

- Symbolic Constant: #define PI 3.14 => Macro

<!-- # C Book:
- C in Depth: By Srivastsava
- K & R -> C -->

# Input Output:

- #include <stdio.h> => Including Header file where some of the key information of printf and scanf how they work is stored in stdio.h header file.

- Escape Sequence:

  ![image](https://drive.google.com/uc?export=view&id=10vQJ_9uZc1C9OAzaa7zHHfEoACZIh1AL)

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

# Operation & Expressions:

- Unary Operator: Operating on one data_type
- Binary Operator: Operating on two data_type(same or other)

  - <strong>NOTE:</strong> int divided by int result is also int
  - There is no any modulo operation in floating point number, No sense to get remainder in floating point number.

- Assigment Operator: for e.g, int x = 5;
- Increment / Decrement Operator

  ```
  Consider the following C Program:
  #include<stdio.h>

  int main()
  {
    int m = 10;
    int n, n1;
    n = ++m;
    n1 = m++;
    n--;
    --n1;
    n -= n1;
    printf("%d", n);

    return 0;
  }
  ```

- Relational Operators: In C, Every non-zero value is considered as 1(true) & Zero as 0(false).
- Logical Operators:

  - Expressions that use logical operators return 0 for false & 1 for true:

    | Operator | Meaning |
    | :------: | :-----: |
    |    &&    |   AND   |
    |   \|\|   |   OR    |
    |    !     |   NOT   |

  - The truth table for logical operators is shown below:

    |  A  |  B  | A&&B | A \|\| B | !A  |
    | :-: | :-: | :--: | :------: | :-: |
    |  0  |  0  |  0   |    0     |  1  |
    |  0  |  1  |  0   |    1     |  1  |
    |  1  |  1  |  1   |    1     |  0  |
    |  1  |  0  |  0   |    1     |  0  |

- Comma Operator

      ```
      #include <stdio.h>
      int main(void)
      {
      int a, b, c, sum;
      sum = (a = 8, b = 7, c = 9, a + b + c);
      printf("Sum = %d\n", sum);
      return 0;
      }
      ```

- Ternary Operator
- sizeof operator: Unary Operator

# Precedence & Associativity:

|                 |          Operator           | Associativity | Precedence |
| :-------------: | :-------------------------: | :-----------: | :--------: |
|       ()        |        Function Call        | Left-to-Right | Highest 14 |
|       []        |       Array Subscript       | Left-to-Right | Highest 14 |
|        .        |  Dot (Member of Structure)  | Left-to-Right | Highest 14 |
|       ->        | Arrow (Member of Structure) | Left-to-Right | Highest 14 |
|        !        |         Logical NOT         | Right-to-Left | Highest 13 |
|        ~        |      one's complement       | Right-to-Left | Highest 13 |
|        -        |    Unary minus(Negation)    | Right-to-Left | Highest 13 |
|       ++        |          Increment          | Right-to-Left | Highest 13 |
|       --        |          Decrement          | Right-to-Left | Highest 13 |
|        &        |         Address-of          | Right-to-Left | Highest 13 |
|       \*        |         Indirection         | Right-to-Left | Highest 13 |
|     (type)      |            cast             | Right-to-Left | Highest 13 |
|     sizeof      |           sizeof            | Right-to-Left | Highest 13 |
|       \*        |       Multiplication        | Left-to-Right | Highest 12 |
|        /        |          Division           | Left-to-Right | Highest 12 |
|        %        |     Modulo (Remainder)      | Left-to-Right | Highest 12 |
|        +        |          Addition           | Left-to-Right | Highest 11 |
|        -        |         Subtraction         | Left-to-Right | Highest 11 |
|       <<        |         Left-Shift          | Left-to-Right | Highest 10 |
|       >>        |         Right-Shift         | Left-to-Right | Highest 10 |
|        <        |          Less than          | Left-to-Right | Highest 8  |
|       <=        |     Less than or equal      | Left-to-Right | Highest 8  |
|        >        |        Greater than         | Left-to-Right | Highest 8  |
|       >=        |    Greater than or equal    | Left-to-Right | Highest 8  |
|       ==        |          Equal to           | Left-to-Right | Highest 8  |
|       !=        |          Not Equal          | Left-to-Right | Highest 8  |
|        &        |         Bitwise AND         | Left-to-Right | Highest 7  |
|        ^        |         Bitwise XOR         | Left-to-Right | Highest 6  |
|       \|        |         Bitwise OR          | Left-to-Right | Highest 5  |
|       &&        |         Logical AND         | Left-to-Right | Highest 4  |
|      \|\|       |         Logical OR          | Left-to-Right | Highest 3  |
|       ? :       |         Conditional         | Right-to-Left | Highest 2  |
| =, +=, \*=, etc |     Assignment Operator     | Right-to-Left | Highest 1  |
|        ,        |            Comma            | Left-to-Right |  Lowest 0  |

# Type Casting:

- It is an Unary Operator.
- Order of Type Casting based on number of bytes required for a data-type is below:

  ```
  Automatic Type Conversion Order:

  Promotion/Demotion: long double, double, float, long int, int, char

  for e.g, long int l = 2L + 3 = 5L
  ```

- "Reliable & Readablity of Code": Strongly Recommended Explicitly Type Casting

  ```
  int x = 20, y = 3;
  float z = x/y; // z = 6.0 => Implicit/Automatic Conversion

  float z = (float)x/y; // z = 20.0/3 => 6.666666
  ```

# Bitwise Operators:

- Operations on Bitwise Operators:

  - Bitwise AND
  - Bitwise OR
  - Bitwise XOR
  - Bitwise Left-shift (<<)
  - Bitwise Right-shift (>>)

- Truth Table:

  |  A  |  B  | A&B | A \| B | A^B |
  | :-: | :-: | :-: | :----: | :-: |
  |  0  |  0  |  0  |   0    |  0  |
  |  0  |  1  |  0  |   1    |  1  |
  |  1  |  0  |  0  |   1    |  1  |
  |  1  |  1  |  1  |   1    |  0  |

# Control Statements:

- Control statements are used to change the order of execution.

- if-else/if-else-if/else-if-ladder: Choose between one & another and more.

  ```
  if(<condition>){
    ---;
    ---;
  }
  else if(<condition>){
    ---;
    ---;
  }
  else{
    ---;
    ---;
  }
  //We can have "if" without "else" also.
  ```

- while loop:

  ```
  while(<condition>){
    ---;
    ---;
  };
  ```

- do-while loop: Body will run atleast 1 time.

  ```
  do{
    ---;
    ---;
  }while(<condition>);
  ```

- for loop: To run a loop n number of times (n is known).

  ```
  for(initialization; condition; updation)
  {
    ---;
    ---;
  }
  ```

- Nested loop:

  ```
    if(){
      if(){
      }
      else{
      }
    }

    for(i = 1; i <= 5; i++) //Outer Loop
    {
      for(j = 1; j <= 3; j++) //Inner Loop
      {
      printf("%d %d", i, j);
      }
    }
  ```

- Infinite loop: Continuously run without termination.

  ```
  for(;;)
  {
    printf("Hi");
  }

  while(1)
  {
    printf("Hi");
  }

  int i = 1;
  while(i <= 5);
  {
    printf("Hi");
  }
  ```

  - Don't use != & == in float during while loop

# break & continue:

- break & continue only breaks & continues out the inner loop it is the part of.

# goto statement:

- Forward Jump/goto & Backward Jump/goto
- goto label;
- label: //identifier
- goto can jump only within a function
- try to avoid the use of goto in program
- In very deep nested loop , goto is really good application here.
- goto need 1 statement after label_identifier

# Switch Case:

- Expression of switch is evaluated to only int/char/short/long
- case value must be integer/character constant
- switch expression does not allow for floating point number.
