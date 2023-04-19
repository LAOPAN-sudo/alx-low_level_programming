#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - a function that searches for an integer.
 *
 * @array: pointer to array of int;
 * @size: size off array
 * @cmp: function pointer;
 *
 * Return: index of the first int element || -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);
	}
	return (-1);
}
