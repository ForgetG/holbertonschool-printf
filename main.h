#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

/**
 * struct format_specifier - struct to map specifiers to functions
 * @specifier: a character string
 * @print_func: function to use for printing
 */
typedef struct format_specifier
{
	char specifier;
	int (*print_func)(va_list ap);

} specifier_t;


int _putchar(char c);

int _printf(const char *format, ...);

int print_int(va_list ap);

int print_char(va_list ap);

int print_string(va_list ap);

int process_specifier(const char **p, va_list ap, specifier_t *specifiers);


#endif
