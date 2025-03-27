#include "main.h"
/**
 * print_exc_string - Outputs an exclusive string to stdout.
 * @val: The parameter containing the string to be printed.
 *
 * Return: Returns an integer representing the count of characters printed.
*/

int print_exc_string(va_list val)
{
	char *s;
	int i, length = 0;
	int value;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			value = s[i];
			if (value < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + print_HEX_extra(value);
		}
		else
		{
			_putchar(s[i]);
			length++;
		}
	}
	return (length);
}
