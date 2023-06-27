#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int _puts(char *s);

int _printf(const char *format, ...);
int (*get_printer(char c))(va_list ap);


typedef struct printer {
	char c;
	int (*f)(va_list ap);
} printer;

#endif
