*This project has been created as part of the 42 curriculum by yibn-yah.*

# Description

`ft_printf` is a project from the 42 curriculum. The goal is to recreate the behavior of the standard C printf() function.

The project introduces variadic functions in C and teaches how to handle different data types and format specifiers.

The mandatory conversions implemented are:

- `%c` : Prints a character.
- `%s` : Prints a string.
- `%p` : Prints a pointer address.
- `%d` : Prints a decimal number.
- `%i` : Prints an integer.
- `%u` : Prints an unsigned decimal number.
- `%x` : Prints a number in lowercase hexadecimal.
- `%X` : Prints a number in uppercase hexadecimal.
- `%%` : Prints a percent sign.

# Algorithm and Data Structure

The implementation uses a simple character-by-character parsing algorithm.

The format string is traversed from beginning to end.

- Ordinary characters are printed directly.
- When a `%` character is encountered, the next character is checked to identify the conversion specifier.
- The corresponding printing function is called to handle the argument.
- The number of printed characters is accumulated and returned by `ft_printf()`.

The project uses `va_list`, `va_start`, `va_arg`, and `va_end` to access the variable number of arguments passed to the function.

No complex data structures are required. The implementation mainly uses:
- Pointers to traverse the format string.
- `va_list` to access variadic arguments.
- Integer counters to track the number of characters printed.

This approach keeps each conversion independent and makes the code easier to maintain.

# Instructions

## Compilation

Clone the repository and enter the project directory:

```bash
git clone <repository-url>
cd ft_printf
```

Compile the library:

```bash
make
```

This generates `libftprintf.a`.

## Available Makefile Rules

- `make` or `make all`: Compiles the library.
- `make clean`: Removes object files.
- `make fclean`: Removes object files and the library.
- `make re`: Recompiles everything.

## Usage

Include the header in your C file:

```c
#include "ft_printf.h"
```

Compile your program with the library:

```bash
cc main.c libftprintf.a -o program
```

Run it:

```bash
./program
```

Example:

```c
ft_printf("Hello %s, your score is %d xd\n", "brother", 0);
```


# Resources

### Documentation and References

- [printf(3) — Linux manual page](https://man7.org/linux/man-pages/man3/printf.3.html)
- [stdarg.h — C documentation](https://en.cppreference.com/w/c/variadic.html)
- [write(2) — Linux manual page](https://man7.org/linux/man-pages/man2/write.2.html)
- [GNU C Library documentation](https://www.gnu.org/software/libc/manual/)

## AI Usage

AI tools were used as learning and support resources throughout the project.

They were used for:

- Understanding variadic functions and how `va_list` works.
- Understanding the behavior of the standard `printf()` function.

The implementation and final code were written and tested by the me.