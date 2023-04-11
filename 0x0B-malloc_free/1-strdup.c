#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new string which is a duplicate of the
 * string passed as parameter.
 *
 * @str: string to be duplicated
 *
 * Return: pointer to the new string
 */

char *_strdup(char *str)
{
	char *str_dup;
	unsigned int i, size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	str_dup = malloc((size + 1) * sizeof(char));

	if (str_dup == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		str_dup[i] = str[i];

	return (str_dup);
}
