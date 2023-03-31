/**
 * _strncat - Concatenates two strings, using at most n bytes from src
 * @dest: Destination string to append to
 * @src: Source string to append from
 * @n: Maximum number of bytes to use from src
 * Return: Pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	/* Move the pointer to the end of the destination string */
	while (*ptr != '\0')
	{
	ptr++;
	}

	/* Append the source string to the destination string, up to n bytes */
	while (*src != '\0' && n > 0)
	{
	*ptr = *src;
	ptr++;
	src++;
	n--;
	}

	/* Add the terminating null byte */
	*ptr = '\0';

	/* Return the pointer to the resulting string */
	return (dest);
}
