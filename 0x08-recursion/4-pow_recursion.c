#include "main.h"

/**
 * _pow_recursion - computes the power of a number
 * @x: base value
 * @y: exponent value
 *
 * Return: value of x raised to the power of y, or -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
