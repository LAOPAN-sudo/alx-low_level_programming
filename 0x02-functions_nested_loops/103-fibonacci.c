#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the sum of even-valued terms in the
 * Fibonacci sequence whose values do not exceed 4,000,000.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int prev1 = 1, prev2 = 2, curr, sum = 0;

	for (i = 0; prev2 <= 4000000; i++)
	{
		if (prev2 % 2 == 0)
			sum += prev2;

		curr = prev1 + prev2;
		prev1 = prev2;
		prev2 = curr;
	}

	printf("%ld\n", sum);

	return (0);
}
