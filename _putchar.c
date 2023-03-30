#include <unistd.h>

/**
  *_putchar - write to stdout.
  *@c: char to be written.
  *Return: number of chars written.
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
