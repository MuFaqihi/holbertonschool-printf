#include "main.h"

/**
 * _strlen - Determines the length of a given string.
 * @s: The string whose length is to be found.
 *
 * Return: Returns an integer representing the length of the string.
*/

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}

/**
 * _strlenc - Determines the length of a constant string.
 * @s: The string to be measured.
 *
 * Return: Returns an integer representing the length of the constant string.
*/

int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
