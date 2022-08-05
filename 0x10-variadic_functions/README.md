# 0x10. C - Variadic functions

## Learning Objectives

General

- What are variadic functions
- How to use va_start, va_arg and va_end macros
- Why and how to use the const type qualifier

## Requirements

- All files are created and compiled on Ubuntu 14.04.4 LTS on gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All files are linted for syntax and style with [Betty](https://github.com/holbertonschool/Betty)

## Tasks

### [0. Beauty is variable, ugliness is constant](./0-sum_them_all.c)

- Write a function that returns the sum of all its parameters.
  - Prototype: `int sum_them_all(const unsigned int n, ...)`;
  - If n == 0, return 0

```
julien@ubuntu:~/0x0f. variadic functions$ cat 0-main.c
```

```c
#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);
    return (0);
}
```

```
julien@ubuntu:~/0x0f. variadic functions$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-sum_them_all.c -o a
julien@ubuntu:~/0x0f. variadic functions$ ./a
1122
500
```

---

### [1. To be is to be the value of a variable](./1-print_numbers.c)

- Write a function that prints numbers, followed by a new line.
  - Prototype: `void print_numbers(const char *separator, const unsigned int n, ...)`;
  - where separator is the string to be printed between numbers
  - and n is the number of integers passed to the function
  - You are allowed to use printf
  - If separator is NULL, don’t print it
  - Print a new line at the end of your function

```
julien@ubuntu:~/0x0f. variadic functions$ cat 1-main.c
```

```c
#include "variadic_functions.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}
```

```
julien@ubuntu:~/0x0f. variadic functions$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-print_numbers.c -o b
julien@ubuntu:~/0x0f. variadic functions$ ./b
0, 98, -1024, 402
```

---

### [2. One woman's constant is another woman's variable](./2-print_strings.c)

- Write a function that prints strings, followed by a new line.
  - Prototype: `void print_strings(const char *separator, const unsigned int n, ...)`;
  - where separator is the string to be printed between the strings
  - and n is the number of strings passed to the function
  - You are allowed to use printf
  - If separator is NULL, don’t print it
  - If one of the string is NULL, print (nil) instead
  - Print a new line at the end of your function

```
julien@ubuntu:~/0x0f. Variadic functions$ cat 2-main.c
```

```c
#include "variadic_functions.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    return (0);
}
```

```
julien@ubuntu:~/0x0f. Variadic functions$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-print_strings.c -o c
julien@ubuntu:~/0x0f. Variadic functions$ ./c
Jay, Django
```

---

### [3. To be is a to be the value of a variable](./3-print_all.c)

- Write a function that prints anything.
  - Prototype: `void print_all(const char * const format, ...)`;
  - where format is a list of types of arguments passed to the function
    - c: char
    - i: integer
    - f: float
    - s: char \* (if the string is NULL, print (nil) instead
    - any other char should be ignored
    - see example
  - You are not allowed to use for, goto, ternary operator, else, do ... while
  - You can use a maximum of
    - 2 while loops
    - 2 if
  - You can declare a maximum of 9 variables
  - You are allowed to use printf
  - Print a new line at the end of your function

```
julien@ubuntu:~/0x0f. Variadic functions$ cat 3-main.c
```

```c
#include "variadic_functions.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}
```

```
julien@ubuntu:~/0x0f. Variadic functions$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-print_all.c -o d
julien@ubuntu:~/0x0f. Variadic functions$ ./d
B, 3, stSchool
```

---


