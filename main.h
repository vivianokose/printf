#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int _puts(char *s);


typedef struct printer {
	char c;
	int (*f)(va_list ap);
} printer;

#endif
