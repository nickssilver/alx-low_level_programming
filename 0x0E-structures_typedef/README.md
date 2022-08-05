# 0x0E. C - Structures, typedef

## Learning Objectives

General

- What are structures, when, why and how to use them
- How to use typedef

## Requirements

- All files are created and compiled on Ubuntu 14.04.4 LTS on gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All files are linted for syntax and style with [Betty](https://github.com/holbertonschool/Betty)

## Tasks

### [0. Poppy](./dog.h)

- Define a new type struct dog with the following elements:
  - name, type = char \*
  - age, type = float
  - owner, type = char \*

```
julien@ubuntu:~/0x0d. structures, typedef$ cat 0-main.c
```

```c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
```

```
julien@ubuntu:~/0x0d. structures, typedef$ make
gcc -Wall -pedantic -Werror -Wextra 0-main.c -o a
julien@ubuntu:~/0x0d. structures, typedef$ ./a
My name is Poppy, and I am 3.5 :) - Woof!
```

---

### [1. A dog is the only thing on earth that loves you more than you love yourself](./1-init_dog.c)

- Write a function that initialize a variable of type struct dog
  - Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner)`;

```
julien@ubuntu:~/0x0d. structures, typedef$ cat 1-main.c
```

```c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
```

```
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-init_dog.c -o b
julien@ubuntu:~/0x0d. structures, typedef$ ./b
My name is Poppy, and I am 3.5 :) - Woof!
```

---

### [2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad](./2-print_dog.c)

- Write a function that prints a struct dog
  - Prototype: `void print_dog(struct dog \*d)`;
  - Format: see example bellow
  - You are allowed to use the standard library
  - If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
  - If d is NULL print nothing.

```
julien@ubuntu:~/0x0d. structures, typedef$ cat 2-main.c
```

```c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}
```

```
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-print_dog.c -o c
julien@ubuntu:~/0x0d. structures, typedef$ ./c
Name: Poppy
Age: 3.500000
Owner: Bob
```

---

### [3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read](./dog.h)

- Define a new type dog_t as a new name for the type struct dog.

```
julien@ubuntu:~/0x0d. structures, typedef$ cat 3-main.c
```

```c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
```

```
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra 3-main.c -o d
julien@ubuntu:~/0x0d. structures, typedef$ ./d
My name is Poppy, and I am 3.5 :) - Woof!
```

---

### [4. A door is what a dog is perpetually on the wrong side of](./4-new_dog.c)

- Write a function that creates a new dog.
  - Prototype: `dog_t *new_dog(char *name, float age, char *owner)`;
  - You have to store a copy of name and owner
  - Return NULL if the function fails

```
julien@ubuntu:~/0x0d. structures, typedef$ cat 4-main.c
```

```c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
```

```
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 4-new_dog.c -o e
julien@ubuntu:~/0x0d. structures, typedef$ ./e
My name is Poppy, and I am 3.5 :) - Woof!
```

---

### [5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg](./5-free_dog.c)

- Write a function that frees dogs.
  - Prototype: `void free_dog(dog_t *d)`;

```
julien@ubuntu:~/0x0d. structures, typedef$ cat 5-main.c
```

```c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Jay");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}
```

```
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-free_dog.c 4-new_dog.c -o f
julien@ubuntu:~/0x0d. structures, typedef$ valgrind ./f
==22840== Memcheck, a memory error detector
==22840== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22840== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22840== Command: ./f
==22840==
My name is Poppy, and I am 3.5 :) - Woof!
==22840==
==22840== HEAP SUMMARY:
==22840==     in use at exit: 0 bytes in 0 blocks
==22840==   total heap usage: 4 allocs, 4 frees, 1,059 bytes allocated
==22840==
==22840== All heap blocks were freed -- no leaks are possible
==22840==
==22840== For counts of detected and suppressed errors, rerun with: -v
==22840== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```

---

