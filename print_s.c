#include "main.h"

/**
 * print_s - function that prints a string
 *
 * @c: character to print
 * Return: n
 */

int print_s(const char *s)
{
	va_list args;

	int n = 0, i;

	s = va_arg(args, const char *);

	for (i = 0; s[i] != '\0'; i++)
	{
	n += _putchar(s[i]);
	}

	return (n);
}
