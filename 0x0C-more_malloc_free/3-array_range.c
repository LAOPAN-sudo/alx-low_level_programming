#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: minimum integer value (inclusive)
 * @max: maximum integer value (inclusive)
 *
 * Return: pointer to newly created array, NULL on failure or if min > max
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
		arr[i] = min + i;

	return (arr);
}
