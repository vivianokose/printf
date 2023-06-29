#include "main.h"

/**
 * print_c - a function that prints a character
 *
 * @args: input
 * Return: 1 - success
 */

int print_c(int c)
{
	va_list args;
	c = (char) va_arg(args, int);

	_putchar(c);

	return (1);
}
