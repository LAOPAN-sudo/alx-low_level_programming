#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer to the newly-allocated space in memory
 *                     containing the concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	char *str_conc;
	unsigned int i, j, k = 0, len1 = 0, len2 = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	str_conc = malloc((len1 + len2 + 1) * sizeof(char));

	if (str_conc == NULL)
		return (NULL);

	for (i = 0; i <= len1; i++)
	{
		str_conc[i] = s1[i];
		if (i == len1)
		{
			for (j = len1; j <= (len1 + len2); j++)
			{
				str_conc[j] = s2[k];
				k = k + 1;
			}
		}
	}

	return (str_conc);
}
