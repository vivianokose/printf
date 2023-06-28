#include "main.h"

/**
 * print_s - function that prints a string
 *
 * @args: input
 * Return: n
 */

int print_s(va_list args)
{
	char *s;
	int n;

	s = va_arg(args, char *);

	n = puts(s);

	return (n);
}
