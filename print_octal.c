#include "main.h"

/**
 * print_octal - prints octal notation of a number
 * @list: list of argument
 * @length: current length of a string
 * return: the length
 */

int print_octal(va_list list, int length)
{
	unsigned int n = va_arg(list, unsigned int);

	length += print_numbers(n, 8, "01234567");

	return (length);
}
