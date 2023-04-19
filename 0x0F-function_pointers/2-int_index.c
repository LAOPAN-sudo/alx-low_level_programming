#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 *
 * @array: pointer to array of int;
 * @size: size off array
 * @cmp: function pointer;
 *
 * Return: index of the first int element || -1
 */

/*
 * Author: Silas Mugambi
 * Description: This file defines the function int_index, which searches for an
 *        integer in an array of integers using
 *              a comparison function passed as an argument.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
