# 0x0C. C - More malloc, free

## Learning Objectives

General

- How to use the exit function
- What are the functions calloc and realloc from the standard library and how to use them

## Requirements

- All files are created and compiled on Ubuntu 14.04.4 LTS on gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All files are linted for syntax and style with [Betty](https://github.com/holbertonschool/Betty)

## Tasks

# [0. Trust no one](./0-malloc_checked.c)

- Write a function that allocates memory using malloc.
  - Prototype: `void *malloc_checked(unsigned int b)`;
  - Returns a pointer to the allocated memory
  - if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98

```
julien@ubuntu:~/0x0b. more malloc, free$ cat 0-main.c
```

```c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *c;
    int *i;
    float *f;
    double *d;

    c = malloc_checked(sizeof(char) * 1024);
    printf("%p\n", (void *)c);
    i = malloc_checked(sizeof(int) * 402);
    printf("%p\n", (void *)i);
    f = malloc_checked(sizeof(float) * 100000000);
    printf("%p\n", (void *)f);
    d = malloc_checked(INT_MAX);
    printf("%p\n", (void *)d);
    free(c);
    free(i);
    free(f);
    free(d);
    return (0);
}
```

```
julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-malloc_checked.c -o a
julien@ubuntu:~/0x0b. more malloc, free$ ./a
0x1e39010
0x1e39830
0x7f31f6c19010
julien@ubuntu:~/0x0b. more malloc, free$ echo $?
98
```

---

### [1. string_nconcat](./1-string_nconcat.c)

- Write a function that concatenates two strings.
  - Prototype: `char *string_nconcat(char *s1, char *s2, unsigned int n)`;
  - The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
  - If the function fails, it should return NULL
  - If n is greater or equal to the length of s2 then use the entire string s2
  - if NULL is passed, treat it as an empty string

```
julien@ubuntu:~/0x0b. more malloc, free$ cat 1-main.c
```

```c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

    concat = string_nconcat("Holberton ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
```

```
julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-string_nconcat.c -o b
julien@ubuntu:~/0x0b. more malloc, free$ ./b
Holberton School
```

---

### [2. \_calloc](./2-calloc.c)

- Write a function that allocates memory for an array, using malloc.
  - Prototype: `void *_calloc(unsigned int nmemb, unsigned int size)`;
  - The \_calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
  - The memory is set to zero
  - If nmemb or size is 0, then \_calloc returns NULL
  - If malloc fails, then \_calloc returns NULL

```
julien@ubuntu:~/0x0b. more malloc, free$ cat 2-main.c
```

```c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *a;

    a = _calloc(98, sizeof(char));
    strcpy(a, "Holberton");
    strcpy(a + 9, " School! :)\n");
    a[97] = '!';
    simple_print_buffer(a, 98);
    free(a);
    return (0);
}
```

```
julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-calloc.c -o c
julien@ubuntu:~/0x0b. more malloc, free$ ./c
0x48 0x6f 0x6c 0x62 0x65 0x72 0x74 0x6f 0x6e 0x20
0x53 0x63 0x68 0x6f 0x6f 0x6c 0x21 0x20 0x3a 0x29
0x0a 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x21
```

---

### [3. array_range](./3-array_range.c)

- Write a function that creates an array of integers.
  - Prototype: `int *array_range(int min, int max)`;
  - The array created should contain all the values from min (included) to max (included), ordered from min to max
  - Return: the pointer to the newly created array
  - If min > max, return NULL
  - If malloc fails, return NULL

```
julien@ubuntu:~/0x0b. more malloc, free$ cat 3-main.c
```

```c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(int *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int *a;

    a = array_range(0, 10);
    simple_print_buffer(a, 11);
    free(a);
    return (0);
}
```

```
julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-array_range.c -o d
julien@ubuntu:~/0x0b. more malloc, free$ ./d
0x00 0x01 0x02 0x03 0x04 0x05 0x06 0x07 0x08 0x09
0x0a
```

---

### [4. \_realloc](./100-realloc.c)

- Write a function that reallocates a memory block using malloc and free
  - Prototype: `void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)`;
  - where ptr is a pointer to the memory previously allocated with a call to malloc: malloc(old_size)
  - old_size is the size, in bytes, of the allocated space for ptr
  - and new_size is the new size, in bytes of the new memory block
  - The contents will be copied to the newly allocated space, in the range from the start of ptr up to the minimum of the old and new sizes
  - If new_size > old_size, the “added” memory should not be initialized
  - If new_size == old_size do not do anything and return ptr
  - If ptr is NULL, then the call is equivalent to malloc(new_size), for all values of old_size and new_size
  - If new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr). Return NULL
  - Don’t forget to free ptr when it makes sense

```
julien@ubuntu:~/0x0b. more malloc, free$ cat 100-main.c
```

```c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *p;
    int i;

    p = malloc(sizeof(char) * 10);
    p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
    i = 0;
    while (i < 98)
    {
        p[i++] = 98;
    }
    simple_print_buffer(p, 98);
    free(p);
    return (0);
}
```

```
julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra 100-main.c 100-realloc.c -o e
julien@ubuntu:~/0x0b. more malloc, free$ ./e
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
```

---

### [5. We must accept finite disappointment, but never lose infinite hope](./101-mul.c)

- Write a program that multiplies two positive numbers.
  - Requirements: mul num1 num2
  - num1 and num2 will be passed in base 10
  - Print the result, followed by a new line
  - If the number of arguments is incorrect, print Error, followed by a new line, and exit with a status of 98
  - num1 and num2 should only be composed of digits. If not, print Error, followed by a new line, and exit with a status of 98
  - You are allowed to use more than 5 functions in your file

```
julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra 101-mul.c _putchar.c -o mul
julien@ubuntu:~/0x0b. more malloc, free$ ./mul 10 98
980
julien@ubuntu:~/0x0b. more malloc, free$ ./mul 235234693269436436223446526546334576437634765378653875874687649698659586695898579 28658034365084365083426083109679137608216408631430814308651084650816406134060831608310853086103769013709675067130586570832760732096730978014607369739567864508634086304807450973045703428580934825098342095832409850394285098342509834209583425345267413639235755891879970464524226159074760914989935413350556875770807019893069201247121855122836389417022552166316010013074258781583143870461182707893577849408672040555089482160343085482612348145322689883025225988799452329290281169927532160590651993511788518550547570284574715925006962738262888617840435389140329668772644708
6741363923575589187997046452422615907476091498993541335055687577080701989306920124712185512283638941702255216631601001307425878158314387046118270789357784940867204055508948216034308548261234814532268988302522598879945232929028116992753216059081057377926651337612618248332113256902485974371969385156015068813868274000683912187818601667058605418678284322237297213673482412392922068159291496274311170208689056585352782844484721140846367741649962638649229509281867896067208474178402156294978940712959518351846413859141792380853313812015295333546716634344284086426775480775747808150030732119704867805688704303461042373101473485092019906795014369069932
```


