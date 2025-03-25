#include "main.h"
/**
 * _printf - A custom implementation of the printf function
 * @format: The format string containing the characters and specifiers
 * Return: The number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	char c, char *s, int len;

	va_start(args, format);
	while (*format)
	{
	if (*format == '%')
	{
	format++;
	if (*format == 'c')
		{
		c = va_arg(args, int);
		write(1, &c, 1);
		count++;
		}
		else if (*format == 's')
		{
		s = va_arg(args, char *);
		len = 0;
		while (s[len])
		len++;
		write(1, s, len);
		count += len;
		}
		else if (*format == '%')
		{
		write(1, "%", 1);
		count++;
		}
		}
		else
		{
		write(1, format, 1);
		count++;
		}
		format++;
		}
		va_end(args);
	return (count);
}
