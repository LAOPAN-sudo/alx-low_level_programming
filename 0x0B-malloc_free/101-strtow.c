#include <stdlib.h>
#include <string.h>

/**
 * count_words - counts the number of words in a string
 * @str: the string to count the words in
 *
 * Return: the number of words in the string
 */
int count_words(char *str)
{
	int count = 0, i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			count++;
			while (str[i] != ' ' && str[i])
				i++;
		}
	}

	return (count);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, count = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	count = count_words(str);

	words = malloc(sizeof(char *) * (count + 1));

	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < count; i++)
	{
		while (str[j] == ' ' && str[j])
			j++;

		len = 0;

		while (str[j + len] != ' ' && str[j + len])
			len++;

		words[i] = malloc(sizeof(char) * (len + 1));

		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		for (k = 0; k < len; k++)
			words[i][k] = str[j++];
		words[i][k] = '\0';
	}

	words[i] = NULL;

	return (words);
}
