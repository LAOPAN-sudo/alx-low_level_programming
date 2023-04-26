#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - a finction that adds two numbers together
 *
 * @a: the first number to be added;
 * @b: second number to be added;
 *
 * Return: result of @a + @b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a finction that subtract two numbers together
 *
 * @a: the first number to be subtracted;
 * @b: second number to be subtracted;
 *
 * Return: result of @a - @b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a finction that multiplies two numbers together
 *
 * @a: the first number to be multiplied;
 * @b: second number to be multiplied;
 *
 * Return: result of @a * @b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a finction that devides two numbers
 *
 * @a: the divident;
 * @b: the divisor;
 *
 * Return: result of @a / @b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a function that returns the modulos of two number
 *
 * @a: first number;
 * @b: second number
 *
 * Return: @a % @b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
