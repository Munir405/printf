#include "main.h"

/**
 * print_unsig- Prints an unsigned integer
 * @list: List of arguments
 * @length: Current length of string
 * Return: The length
 */

int print_unsig(va_list list, int length)
{
	unsigned int n = va_arg(list, unsigned int);

	length += print_numbers(n, 10, "0123456789");

	return (length);
}
