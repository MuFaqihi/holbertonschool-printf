#include "main.h"
/**
 * print_pointer - Outputs a hexadecimal number to stdout.
 * @val: The argument containing the value to be printed as a hexadecimal.
 *
 * Return: Returns the count of characters printed.
*/

int print_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int x;
	int y;
	int i;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	x = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	y = print_hex_extra(x);
	return (y + 2);
}
