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
