# libft
- C library with useful functions. Some implementations of Libc functions and some are standard for the 42 curriculum.
- String/memory manipulation, getline implementation, printf, asprintf, dprintf among other tools.


## Usage:
- in root of repository: make (this will compile the library and create libft.a)
- in your main c-file, #include "libft.h"
- compile your main file with libft.a

### Why?
At Hive Helsinki, most projects allow only fundamental functions (open, close, read, write, malloc, free..).
If we want to use other functions (such as atoi, itoa, memcpy, printf) we have to create them ourselves.
Enter libft!