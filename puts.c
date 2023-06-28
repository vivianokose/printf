#include "main.h"

/**
 * puts - prints a string
 * @s: string to be printed
 * b :pointer to operate on the string without changing it
 *
 * Return: Always (0) Success returns the number of characters printed
 */

int puts(const char *s)
{
	const char *b;

	b = s;

	if (!*b)
		b = "(null)";
	while (*b)
	{
		_putchar(*b);
		b++;
	}
	return (b - s);
}
