#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: a list of types of arguments passed to the function
 * @...: a variable number of strings parameters
 * Return: length of strings parameters
 */

int _printf(const char *format, ...)

{

	specifier_t specifiers[] = {
		{'d', print_int},
		{'i', print_int},
		{'c', print_char},
		{'s', print_string},
		{'\0', NULL}
	};

	int total_count = 0;
	const char *p = format;
	va_list ap;

	va_start(ap, format);

	while (*p != '\0')
	{
		if (*p == '%')
		{
			p++;

			if (*p == '%')
			{
				_putchar('%');
				total_count++;
			}
			else
			{
				total_count += process_specifier(&p, ap, specifiers);
			}
		}
		else
		{
			_putchar(*p);
			total_count++;
		}
		p++;
	}
	va_end(ap);
	return (total_count);
}
