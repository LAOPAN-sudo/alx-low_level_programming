#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 *
 * @n: The number of the times table to print.
 *
 * Return: void.
 */
void print_times_table(int n)
{
	int i, j, res;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;

			if (j != 0)
			{
				_putchar(' ');
				if (res < 100)
					_putchar(' ');
				if (res < 10)
					_putchar(' ');
			}

			if (res >= 100)
				_putchar((res / 100) + '0');
			if (res >= 10)
				_putchar(((res / 10) % 10) + '0');

			_putchar((res % 10) + '0');

			if (j != n)
				_putchar(',');
		}
		_putchar('\n');
	}
}
