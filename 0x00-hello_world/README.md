#  0x00. C - Hello, World

## General
An introductory project on:

- What is main
- How to print text using printf, puts and putchar
- How to get the size of a specific type using the unary operator sizeof
- How to compile using gcc
- What is the default program name when compiling with gcc
- What is the official C coding style and how to check your code with betty-style
- How to find the right header to include in your source code when using a standard library function
- How does the main function influence the return value of the program

## Requirements:
Ubuntu 14.04 LTS 
gcc 4.8.4

## Tasks:

### Mandatory Tasks:
- 0-preprocessor - a bash script that runs a C file, saved in the variable $CFILE, through the preprocessor and saves the result into another file, named c

- 1-compiler - a bash script that compiles a C file, saved in the variable $CFILE, but does not link. 
    - The output file will be named the same as the C file, but with the extension .o instead of .c

- 2-assembler - a bash script that generates the assembly code of a C file, saved in the variable $CFILE. 
    - The output file will be named the same as the C file, but with the extension .s instead of .c.

- 3-name - a script that compiles a C file, saved in the variable $CFILE, and creates an executable named cisfun.

- 4-puts.c - a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line using the function puts.

- 5-printf.c - a C program that prints exactly 'with proper grammar, but the outcome is a piece of art,', followed by a new line using the function printf.

- 6-size.c - a C program that prints the size of various types on the computer it is compiled and run on.

### Advanced Tasks:
- 100-intel - a bash script that generates the assembly code (Intel syntax) of a C file, saved in the variable $CFILE. 
   - The output file will be named the same as the C file, but with the extension .s instead of .c.

- 101-quote.c - a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error without using any functions listed in the NAME section of man (3) printf or man (3) puts.  
