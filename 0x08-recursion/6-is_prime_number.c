/**
 * check_divisibility - Checks if a number is divisible by any number between
 * 2 and its half.
 *
 * @n: The number to be checked.
 * @i: The divisor.
 *
 * Return: If the number is divisible by i - 1, 0 otherwise.
 */
int check_divisibility(int n, int i)
{
	if (i == 1)
		return (1);

	if (n % i == 0)
		return (0);

	return (check_divisibility(n, i - 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 *
 * @n: The number to be checked.
 *
 * Return: If the number is prime - 1, otherwise - 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_divisibility(n, n / 2));
}
