#include "main.h"

/**
 * print_c - Outputs a character to stdout.
 * @val: The argument containing the character to be printed.
 *
 * Return: Returns an integer indicating the count of characters printed.
*/

int print_c(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
