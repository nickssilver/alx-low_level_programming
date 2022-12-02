# 0x18. C - Dynamic libraries

## Resources
### Read or watch:

- [What is difference between Dynamic and Static library (Static and Dynamic linking)](https://www.youtube.com/watch?v=eW5he5uFBNM)
- [create dynamic libraries on Linux](https://www.google.com/#q=linux+create+dynamic+library)
- [Technical Writing](https://alx-intranet.hbtn.io/concepts/225)

## General
- What is a dynamic library, how does it work, how to create one, and how to use it
- What is the environment variable $LD_LIBRARY_PATH and how to use it
- What are the differences between static and shared libraries
- Basic usage nm, ldd, ldconfig

## Table of contents
Files | Description
----- | -----------
[libdynamic.so](./libdynamic.so) | C dynamic library containing the function definitions
[main.h](./main.h) | Header files containing the function prototypes
[1-create_dynamic_lib.sh](./1-create_dynamic_lib.sh) | Bash script that creates a dynamic library called liball.so from all the .c files that are in the current directory
[100-operations.so](./100-operations.so) | C dynamic library that contains C functions that can be called from Python
[libmask.so](./libmask.so) | C dynamic library to inject in a giga million program
[101-make_me_win.sh](./101-make_me_win.sh) | Bash script to inject the libmask.so library, using LD_PRELOAD, in the giga million program
