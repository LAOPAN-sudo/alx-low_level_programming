#include "main.h"

/**
 * more_numbers - prints 0 - 14
 *
 * Return: void
 */

void more_numbers(void)
{
	char j, number;
	int i = 0;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			number = j;
			if (j > 9)
			{
				_putchar('1');
				number = j % 10;
			}
			_putchar('0' + number);
		}

		_putchar('\n');
		i++;
	}
}
