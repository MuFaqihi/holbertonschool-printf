#include "main.h"
/**
 * print_revs - Outputs a string in reverse order.
 * @args: The printf arguments stored in a va_arg struct.
 *
 * Return: Returns the reversed string.
*/

int print_revs(va_list args)
{

	char *s = va_arg(args, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
