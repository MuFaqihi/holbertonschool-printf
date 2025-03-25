#include "main.h"
/**
 * _printf - A custom implementation of the printf function
 * @format: The format string containing the characters and specifiers
 * Return: The number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(args, int);

				count += write(1, &c, 1);
			}
			else if (*format == 's')
			{
				char *s = va_arg(args, char *);
				count += s ? write(1, s, strlen(s)) : write(1, "(null)", 6);
			}
			else if (*format == '%')
			{
				count += write(1, "%", 1);
			}
		}
		else
		{
			count += write(1, format, 1);
		}
		format++;
	}

	va_end(args);
	return (count);
}
