#include "main.h"

/**
 * print_char - print input in character format
 * @list: argument list
 * @length: length of input
 * Return: length
 */

int print_char(va_list list, int length)
{
	char c = va_arg(list, int);

	length += _putchar(c);
	return (length);
}

/**
 * print_str - prints input as string to stdout
 * @list: argument list
 * @length: length of input
 * Return: length
 */

int print_str(va_list list, int length)
{
	int i;
	const char *str = va_arg(list, const char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
		_putchar(str[i]);
	}
	return (length);
}

/**
 * print_rev - prints string reverse to stdout
 * @list: argument list
 * @length: string length
 * Return: length
 */

int print_rev(va_list list, int length)
{
	int i, j, str_len = 0;
	const char *str = va_arg(list, const char *);

	if (str == NULL)
		str = ")llun(";
	for (i = 0; str[i] != '\0'; i++)
		str_len++;
	for (j = (str_len - 1); j >= 0; j--)
	{
		length++;
		_putchar(str[j]);
	}
	return (length);
}
