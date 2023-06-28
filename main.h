#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int puts(const char *);

int _printf(const char *format, ...);
int (*get_printer(char c))(va_list args);

int print_c(va_list args);
int print_s(va_list args);
int print_mod(va_list args);

typedef struct printer {
	char c;
	int (*f)(va_list args);
} printer;

#endif
