#ifndef _MAIN_
#define	_MAIN_

#include <stdarg.h>
#include <stdlib.h>

/**
  *struct print_func - holds fromat specifiers and their functions.
  *@placeholder: char.
  *@f: function pointer.
  *
  */

typedef struct print_func
{
	char placeholder;
	int (*f)(va_list, int);
} func;

int _putchar(char c);

int _printf(const char *format, ...);

int (*get_func(char c))(va_list, int);

int print_char(va_list, int);

int print_str(va_list, int);

int print_ptr(va_list, int);

int print_rev(va_list, int);

int print_int(va_list, int);

int _putchar_int(int, int);

int print_numbers(unsigned long n, unsigned int base, const char *digits);

unsigned int find_length(unsigned int, int);

int print_hex(va_list list, int length);

int print_Hex(va_list list, int length);

int print_unsig(va_list list, int length);

int print_octal(va_list list, int length);

int print_rot13(va_list list, int length);

int print_b(va_list list, int length);

int print_binary(unsigned int, int);

int print_Str(va_list list, int length);

#endif
