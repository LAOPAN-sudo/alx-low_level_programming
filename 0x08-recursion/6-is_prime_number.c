#include "main.h"

/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	int i;

	/* check for base cases */
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);

	/* check for even numbers */
	if (n % 2 == 0)
		return (0);

	/* check for odd numbers */
	for (i = 3; i <= sqrt(n); i += 2)
	{
	if (n % i == 0)
		return (0);
	}

	return (1);
}
