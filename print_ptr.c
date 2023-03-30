#include "main.h"
#include <stdlib.h>

/**
 * printf_hex_aux - prints an hexgecimal number.
 * @num: number to print.
 * Return: counter.
 */

int printf_hex_aux(unsigned long int num)
{
	long int i;
	long int *array;
	long int counter = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

	if (array != NULL)
	{
		for (i = 0; i < counter; i++)
		{
			array[i] = temp % 16;
			temp /= 16;
		}
		for (i = counter - 1; i >= 0; i--)
		{
			if (array[i] > 9)
				array[i] = array[i] + 39;
			_putchar(array[i] + '0');
		}
	}
	free(array);
	return (counter);
}

/**
 * print_ptr - print address of value
 * @list: argument list
 * @length: length
 * Return: length
 */

int print_ptr(va_list list, int length)
{
	char *str = "(nil)";
	int i;
	long int address;
	void *ptr = va_arg(list, void *);

	if (ptr == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			_putchar(str[i]);
		return (i);
	}

	address = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	length = printf_hex_aux(address);
	return (length + 2);
}
