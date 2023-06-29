#include "main.h"

/**
 * print_mod - function that prints perecentage character
 *
 * @args: input
 * Return: 1
 */

int print_mod(va_list args)
{
	char c;

	c = (char) va_arg(args, int);

	_putchar(c);

	return (1);
}
