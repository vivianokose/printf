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
	int n;

	va_start(args, format);

	p = format;

	for (; *p ; p++)
	{
		if (*p != '%')
		{
			n = n + _putchar(*p);
			continue;
		}
		p++;
		_putchar(*p);
	}
	return (0);
}
