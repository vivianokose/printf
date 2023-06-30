#include "main.h"

/**
 * print_s - function that prints a string
 *
 * @args: character string as input
 * Return: n
 */

int print_s(va_list args)
{
	const char *s;

	int n = 0, i;

	s = va_arg(args, const char *);

	if (s == NULL)
	{
		s = "NULL";
		n = strlen(s);

		for (i = 0; i < n; i++)
			_putchar(s[i]);
		return (n);
	}
	else
	{
		n = strlen(s);
		for (i = 0; i < n; i++)
			_putchar(s[i]);
		return (n);
	}
}
