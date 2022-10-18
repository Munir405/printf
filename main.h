#ifndef MAIN
#define MAIN

#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);

int _printf(const char *format, ...);

int print_char(va_list c);

int print_string(va_list s);

int print_int(va_list i);

int print_dec(va_list d);

int print_rev(va_list r);

int print_bin(va_list b);

int print_unsig(va_list u);

int print_octal(va_list o);

int prin_x(va_list x);

int print_X(va_list X);

int print_rot13(va_list R);

/**
 * struct code format - struct format
 * @sc: the specifier
 * @f: the function associated
 */

typedef struct code_format
{
	char *sc;
	int (*f)(va_list, int);
} code_f;

#endif
