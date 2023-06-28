#include "main.h"

/**
 * print_c - a function that prints a character
 *
 * @args: input
 * Return: 1 - success
 */

int print_c(va_list args)
{
	int c;

	c = va_arg(args, int);

	_putchar(c);

	return (1);
}
