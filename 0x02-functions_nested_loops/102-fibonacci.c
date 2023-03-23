#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers separated by comma
 *              followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long fib1 = 1, fib2 = 2, next_term;

	printf("%ld, %ld", fib1, fib2);

	for (i = 2; i < 50; i++)
	{
		next_term = fib1 + fib2;
		printf(", %ld", next_term);
		fib1 = fib2;
		fib2 = next_term;
	}

	printf("\n");

	return (0);
}
