#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

int _putchar(char c);
int puts(const char *);

int _printf(const char *format, ...);
int (*get_printer(char c))(va_list args);

int print_c(int c);
int print_s(const char *s);
int print_mod(va_list args);

typedef struct printer {
	char c;
	int (*f)();
} printer;

#endif /* MAIN_H */
