PRINTF

INTRODUCTION

Printf stands for printf formatted. It is a function used to send formatted output to the screen. The format is defined by the conversion specifier passed. In this project, we'll create a program that closely simulates the printf function in c.

CONTENT

HEADER FILE

main.h

This is an include guarded file that contains function prototypes of the different functions used to make this program.

MAN PAGE

man_3_printf

Usage: man ./man_3_printf.

FUNCTIONS

_printf.c

Contains the _printf function.
Prototype: int _printf(const char *format , ...);.
Returns the number of characters written to string.
Returns -1 on failure.
get_func.c

a function that returns a pointer to a function based on the format specifier.
Prototype: int (*get_func(char c))(va_list, int);.
If format specifier doe not exist, it returns NULL. Otherwise, it returns a function pointer.
print_char.c

Contains three functions handling format specifier %s, %r and %c.
print_char() - A function that writes characters to stdout. print_str() - Function that writes strings to stdout. print_rev() - Function write string in reverse to stdout

Prototype:
int print_char(va_list list, int length);
int print_str(va_list list, int length);
int print_rev(va_list list, int length),
Return:
number of characters written.
print_numbers.c Contains four functions all handling format specifiers %d and %i. print_int() - A function that checks for signed integers. _putchar_int() - A fuunction that writes signed integers to stdout. print_numbers() - A function that checks for numbers larger than INT_MAX.

find_length() - A function that counts the digits in a numer.

Prototypes:
int print_int(va_list list, int length)
int _putchar_int(int n, int length)
int print_numbers(unsigned long n, unsigned int base, const char *digits)
unsigned int find_length(unsigned int n, int base).
Return:
An unsigned long integer and the current length of the number.
Length of number written to stdout.
A call to findlength.
Number of digits in a number.
print_binary.c

Contains two functions handling the custom format specifier %b.
print_binary() - A funtction that converts an int to binary.
print_b() - Initializes the arg to an unsigned int and calls print_binary().
Prototype:
int print_b(va_list list, int length);.
int print_binary(unsigned int n, int len);.
Return:
Length of printed binary.
The value returned by print_binary
print_hex.c

Contains two functions handling the format specifiers %x and %X.
print_hex() - A function that converts integer inputs to lowercase hexadecimal numbers.
print_Hex() - A function that converts integer inputs to uppercase hexadecimal numbers.
Prototype:
int print_hex(va_list list, int length);.
int print_Hex(va_list list, int length);.
Return:
number of hexadecimal characters written.
print_octal.c

Contains a function that handles the format specifier %o.
print_octal() - A function that coverts integer inputs to octal values.
Prototype:
int print_octal(va_list list, int length);.
Return:
Number of cotal character written to stdout.
print_rot13.c

Contains a function that handles the format specifier %R.
print_rot13() - A function that prints a string encrypted using ROT13.
Prototype:
int print_rot13(va_list list, int length);.
Return:
Number of characters written to stdout.

print_strings

Contains a function that handles the format specifier %S.

print_Str() - prints the unprintable characters in their hexadecimal equivalent preceded with \x0 for on digit characters and \x for charcters with more than one digit.
Prototype:
int print_Str(va_list list, int length);.
Return:
Number of characters written to stdout.
