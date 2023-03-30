#include "main.h"
/**
 *_printf - prints formatted output.
 *@format: input.
 *Return: number of chars printed or -1.
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i, length;
	int (*get_func_ptr)(va_list, int);

	va_start(list, format);
	if (!(format))
		return (-1);
	i = 0;
	length = 0;
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				length += _putchar(format[i]);
				i++;
				continue;
			}
			if (format[i] == '\0')
				return (-1);
			get_func_ptr = get_func(format[i]);
			if (get_func_ptr != NULL)
				length = get_func_ptr(list, length);
			else
			{
				length += _putchar(format[i - 1]);
				length += _putchar(format[i]);
			}
			i++;
		}
		else
		{
			length += _putchar(format[i]);
			i++;
		}
	}
	va_end(list);
	return (length);
}
