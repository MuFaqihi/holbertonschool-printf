#include "main.h"

/**
 * _putchar - Outputs the character c to stdout.
 * @c: The character to be printed.
 *
 * Return: Returns 1 on success.
 * If an error occurs, -1 is returned, and errno is set accordingly.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
