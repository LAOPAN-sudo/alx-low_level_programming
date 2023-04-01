#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to print
 */
void puts_half(char *str)
{
	int length = 0, half, i;

	while (*(str + length))
		length++;

	if (length % 2 == 0)
		half = length / 2;
	else
		half = (length - 1) / 2;

	for (i = half; i < length; i++)
		_putchar(*(str + i));

	_putchar('\n');
}
