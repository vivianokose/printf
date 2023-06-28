#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - prints a format string to output
 * @format: a character string
 *
 * args: variable list of inputs
 * p: a pointer created to hold content of format string
 *
 * Return: Always (0) Success
 */

int _printf(const char *format, ...)
{
	const char *p;
	va_list args;
	int n = 0;

	va_start(args, format);

	for (p = format; *p ; p++)
	{
		if (*p != '%')
		{
			n += _putchar(*p);
			continue;
		}
		p++;

		switch (*p)
		{
			case 'c':
				n += print_c(va_arg(args, int));
				break;
			case 's':
				n += print_s(va_arg(args));
				break;

			default:
				n += _putchar('%');
				n += putchar(*p);
				break;
		}
	}

	va_end(args);
	return (n);
}
