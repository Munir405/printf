#include "main.h"

/**
 * print_hex - Prints hex notation of a number
 * @list: List of arguments
 * @length: Current length of string
 * Return: The length
 */

int print_hex(va_list list, int length)
{
	unsigned int n = va_arg(list, unsigned int);

	length += print_numbers(n, 16, "0123456789abcdef");

	return (length);
}

/**
 * print_Hex - Printd hexes
 * @list: Argument list
 * @length: Current lenght of string
 * Return: Length
 */

int print_Hex(va_list list, int length)
{
	unsigned int n = va_arg(list, unsigned int);

	length += print_numbers(n, 16, "0123456789ABCDEF");
	return (length);
}
