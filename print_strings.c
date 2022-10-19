#include "main.h"

/**
 * print_str - print the string
 * @list: list of argument
 * @length: number of chars
 * Description: any char whose ascii vode appears between 0 and 127,
 * will be replaced with \x.
 * return: length of characters printed.
 */

int print_Str(va_list list, int length)
{
	int i;
	char *str = va_arg(list, char *);

	if (str == NULL)
		str = "(null)";
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			if (str[i] < 15)
			{
				length += _printf("\\x0");
				length += _printf("%X", str[i]);
				i++;
			}
		}
		else
		{
			length += _putchar(str[i]);
			i++;
		}
	}
	return (length);
}

