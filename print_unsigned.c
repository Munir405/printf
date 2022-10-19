#include "main.h"

/**
 * print_unsigned - print an unsigned interger
 * @list: list of argument
 * @length: current length of string
 * return: the length
 */

int print_unsig(va_list list, int length)
{
	unsigned int n = va_arg(list, unsigned int);
	length += print_numbers(n, 10, "0123456789");

	return (length);
}
