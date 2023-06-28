#include "main.h"

/**
 * print_s - function that prints a string
 *
 * @args: input
 * Return: n
 */

int print_s(va_list args)
{
	const char *s;
	int n = 0, i;

	s = va_arg(args, const char *);

	for (i = 0; s[i] != '\0'; i++)
	{
	n += _putchar(s[i]);
	}

	return (n);
}
