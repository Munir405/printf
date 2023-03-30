#include "main.h"

/**
 * print_rot13 - print 13th character from the input.
 * @list: argument list.
 * @length: length.
 * Return: numer of chars printed.
 */

int print_rot13(va_list list, int length)
{
	int i, position;

	char r1[] = "NOPQRSTUVWXYZABCDEFGHIJKLM      nopqrstuvwxyzabcdefghijklm";

	char *str = va_arg(list, char *);

	if (str == NULL)
		return (-1);

	i = 0;
	position = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z'))
		{
			position = str[i] - 65;
			length += _putchar(r1[position]);
		}
		else
			length += _putchar(str[i]);

		i++;
	}

	return (length);
}
