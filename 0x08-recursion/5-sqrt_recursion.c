#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: The number to calculate the natural square root of.
 *
 * Return: The natural square root of n, -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - recursive helper function to calculate the natural square root.
 * @n: The number to calculate the natural square root of.
 * @i: The current guess for the square root.
 *
 * Return: The natural square root of n, -1 if n does not have a natural square root.
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}
