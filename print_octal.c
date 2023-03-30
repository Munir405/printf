#include "main.h"

/**
 * print_octal - Prints octal notation of a number
 * @list: List of arguments
 * @length: Current length of string
 * Return: The length
 */

int print_octal(va_list list, int length)
{
	unsigned int n = va_arg(list, unsigned int);

	length += print_numbers(n, 8, "01234567");

	return (length);
}
