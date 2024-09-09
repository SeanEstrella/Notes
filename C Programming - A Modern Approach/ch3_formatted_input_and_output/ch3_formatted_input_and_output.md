# Ch.3 Formatted Input/Output

- 3.1 is about printf
- 3.2 is about scanf
- Complete details for each function is expanded upon in chapter 22

## 3.1 The printf Function

- `printf` displays a string, the **format string**
- `printf` is constructed as follows:
```c 
printf(string, expr1, expr2, ...)
```

- The values displayed can be constants, variables, or more complicated expressions.
- The format string may contain both ordinary characters and **conversion specifications**
    - Conversion specifications begin with the % character
    - It is a placeholder representing a value to be filled in during printing. 
    - The characters that follow the % character **specifies** how the value is **converted** from its internal, binary form to printed form (characters)
        - This is why the term "conversion specification" is as it is. 

#### Example: 

```c 
int i, j;
float x, y;

i = 10;
j = 20;
x = 43.2892f;
y = 5527.0f;

printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);
```

This call of `printf` produces the following output: 
`i = 10, j = 20, x = 43.289200, y = 5526.000000`

### Conversion Specifications 

- Conversion Specifications can have the form %*m.pX* or %*m.pX* where:
    - **m** (integer value), is the **minimum field width** and specifies the minimum number of characters to print 
    - **p** (integer value), is the **precision**
    - **X** (a letter), is the **conversion specifier** and indicates which conversion should be applied to the value before it is printed.

- The most common conversion specifiers for numbers are:
    - **d**, an integer in decimal (base 10) form
    - **e**, a floating-point number in exponential format 
    - **f**, a floating-point number in fixed decimal format, without an exponent
    - **g**, a floating-point number in either exponential or fixed decimal format, depending on the number's size 

### PROGRAM: Using `printf` to Format Numbers 
```c 
/* Filename: tprintf.c
   Purpose: Prints int and float values in various formats */

#include <stdio.h>
int main(void)
{
    int i;
    float x;

    i = 40;
    x = 839.21f;

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%10.3g|\n", x, x, x);

    return 0;
} 
```

> `tprint.c` will then output: 

```bash 
|40|   40|40   |  040|
|   839.210| 8.392e+02|       839|
```

### Escape Sequences 

- The often used `\n` is an **escape sequence**

- These are just a couple of the existing escape sequences:
    - Alert(bell)       `\a`
        - Causes an audible beep noise on ost machines 
    - Backspace         `\b`
        - Moves cursor back one position
    - New line          `\n`
        - advances to new line 
    - Horizontal tab    `\t`
        - moves cursor to the next tab stop
    - " Character       `\"`

```c 
printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
```

> Outputs:

```bash 
Item    Unit    Purchase
        Price   Date
```