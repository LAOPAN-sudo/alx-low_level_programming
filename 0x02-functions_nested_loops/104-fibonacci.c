#include <stdio.h>

/**
 * fibonacci - Computes the nth Fibonacci number.
 *
 * @n: The index of the Fibonacci number to compute.
 *
 * Return: The nth Fibonacci number.
 */

unsigned int fibonacci(int n)
{
	if (n <= 1)
		return n;

	return fibonacci(n - 1) + fibonacci(n - 2);
}

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

	for (i = 0; i < 98; i++)
		printf("%u, ", fibonacci(i));

	printf("%u\n", fibonacci(i));

	return (0);
}
