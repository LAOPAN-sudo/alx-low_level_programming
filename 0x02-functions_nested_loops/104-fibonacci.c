#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Computes and prints the first 98 Fibonacci numbers.
 * The numbers are separated by comma, followed by a space, and
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned int a = 1, b = 2, c;

	printf("%u, %u", a, b);

	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		printf(", %u", c);
		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}
