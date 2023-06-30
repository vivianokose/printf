#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>

int _putchar(char c);
int puts(const char *);

int _printf(const char *format, ...);
int (*get_printer(char c))(va_list args);

int print_c(int c);
int print_s(va_list args);
int print_mod(void);
int print_int(va_list args);

typedef struct printer
{
	char c;
	int (*f)();
} printer;

#endif /* MAIN_H */
