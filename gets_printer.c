#include "main.h"

/**
 * gets_printer - selects the printer to use
 * @c: input character
 *
 * Return: pointer to the function
 */

int (*gets_printer(char c))(va_list args)
{
	int n;
	int i;

	printer printers[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_mod}
	};

	n = 3;

	i = 0;

	while (i < n)
	{
		if (printers[i].c == c)
			return (printers[i].f);
		i++;
	}
	return (NULL);
}
