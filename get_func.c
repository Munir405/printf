#include "main.h"

/**
 *get_func - returns pointer to function.
 *@c: character to be used to find pointer function.
 *Return: pointer to function or NULL.
 */

int (*get_func(char c))(va_list, int)
{
	func funcArr[] = {
		{'c', print_char},
		{'s', print_str},
		{'d', print_int},
		{'i', print_int},
		{'u', print_unsig},
		{'o', print_octal},
		{'x', print_hex},
		{'X', print_Hex},
		{'R', print_rot13},
		{'b', print_b},
		{'S', print_Str},
		{'r', print_rev},
		{'p', print_ptr},
		{'\0', NULL}
	};

	int i = 0;

	while (funcArr[i].placeholder != '\0')
	{
		if (funcArr[i].placeholder == c)
			return (funcArr[i].f);
		i++;
	}

	return (NULL);
}
