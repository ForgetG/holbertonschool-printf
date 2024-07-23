#include "main.h"

int	print_int(va_list ap)
{
	int	num = va_arg(ap, int);
	int	count = 0, power = 1, int_min = -2147483648, temp;

	if (num == int_min)
	{
		_putchar('-');
		_putchar('2');
		num = 147483648;
		count += 2;
	}
	else if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}
	temp = num;
	while (temp / 10)
	{
		power *= 10;
		temp /= 10;
	}
	while (power > 0)
	{
		_putchar((num / power) % 10 + '0');
		power /= 10;
		count++;
	}
	return (count);
}

int	print_char(va_list ap)
{
	char	c = (char)va_arg(ap, int);

	_putchar(c);
	return (1);
}

int	print_string(va_list ap)
{
	int	count = 0;
	char	*s = va_arg(ap, char *);

	while (*s)
	{
		_putchar(*s++);
		count++;
	}
	return (count);
}