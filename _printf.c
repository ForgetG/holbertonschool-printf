#include "main.h"

int	process_specifier(const char **p, va_list ap, specifier_t *specifiers)
{
	int	index = 0, found = 0, total_count = 0;

	while (specifiers[index].specifier != '\0')
	{
		if (**p == specifiers[index].specifier)
		{
			total_count += specifiers[index].print_func(ap);
			found = 1;
			break;
		}
		index++;
	}
	if (!found)
	{
		_putchar('%');
		_putchar(**p);
		total_count += 2;
	}
	return (total_count);
}

int	_printf(const char *format, ...)
{
	specifier_t specifiers[] = {
		{'d', print_int},
		{'i', print_int},
		{'c', print_char},
		{'s', print_string},
		{'\0', NULL}
	};
	int	total_count = 0;
	const char	*p = format;
	va_list	ap;

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
				total_count += process_specifier(&p, ap, specifiers);
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
