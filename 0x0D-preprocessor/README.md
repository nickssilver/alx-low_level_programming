# 0x0D. C - Preprocessor

## Learning Objectives

General

- What are macros and how to use them
- What are the most common predefined macros
- How to include guard your header files

## Requirements

- All files are created and compiled on Ubuntu 14.04.4 LTS on gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All files are linted for syntax and style with [Betty](https://github.com/holbertonschool/Betty)

## Tasks

### [0. Object-like Macro](./0-object_like_macro.h)

- Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.

```
julien@ubuntu:~/0x0c. macro, structures$ cat 0-main.c
```

```c
#include "0-object_like_macro.h"
#include "0-object_like_macro.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
}
```

```
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 0-main.c -o a
julien@ubuntu:~/0x0c. macro, structures$ ./a
1122
```

---

### [1. Pi](./1-pi.h)

- Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.

```
julien@ubuntu:~/0x0c. macro, structures$ cat 1-main.c
```

```c
#include "1-pi.h"
#include "1-pi.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    float a;
    float r;

    r = 98;
    a = PI * r * r;
    printf("%.3f\n", a);
    return (0);
}
```

```
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 1-main.c -o b
julien@ubuntu:~/0x0c. macro, structures$ ./b
30171.855
```

---

### [2. File name](./2-main.c)

- Write a program that prints the name of the file it was compiled from, followed by a new line.
  - You are allowed to use the standard library

```
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 2-main.c -o c
julien@ubuntu:~/0x0c. macro, structures$ ./c
2-main.c
julien@ubuntu:~/0x0c. macro, structures$ cp 2-main.c 02-main.c
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 02-main.c -o cc
julien@ubuntu:~/0x0c. macro, structures$ ./cc
02-main.c
```

---

### [3. Function-like macro](./3-function_like_macro.h)

- Write a function-like macro ABS(x) that computes the absolute value of a number x.

```


---

### [5. Worst abuse of the C preprocessor (IOCCC winner, 1986)](https://medium.com/@tuvo1106/abuse-of-the-c-preprocessor-4faa07be3481)

- Compile this program, written by Jim Hague (UK), and feed ascii text into standard input.
  - Write a blog post to explain what this program does, how it works, and “de-obfuscate” it step by step for the reader
  - Your blog post should have at least one picture, at the top of the blog post
  - Publish your blog post on Medium or LinkedIn
  - Share your blog post at least on Twitter and LinkedIn

```


---

### 6. Fun with the preprocessor

- Write a program that can print Hello, Holberton, followed by a new line.

  - You are not allowed to use more than one line of code
  - You are not allowed to use more than 32 characters in the file 101-preprocessor_abuse.c, including the documentation of your functions and the preprocessor directives
  - You are not allowed to include other c files
  - You are not allowed to include other header files
  - Remember: your program should pass all Betty checks for style and documentation
  - You don’t have to use the -pedantic, -Wall, -Werror, -Wextra gcc flags
  - This program should be written in C and will be compiled with gcc

---
