#include "main.h"
/**
 * print_HEX_extra - Outputs a hexadecimal number to stdout.
 * @num: The number to be printed in hexadecimal format.
 *
 * Return: Returns the count of characters printed.
*/

int print_HEX_extra(unsigned int num)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = tem % 16;
		tem /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
