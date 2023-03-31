/**
 * _strncpy - Copies a string
 *
 * @dest: Destination buffer to copy to
 * @src: Source buffer to copy from
 * @n: Maximum number of bytes to copy
 *
 * Return: Pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *dest_ptr = dest;
	char *src_ptr = src;

	while (*src_ptr && n > 0)
	{
	*dest_ptr++ = *src_ptr++;
	n--;
	}

	while (n > 0)
	{
	*dest_ptr++ = '\0';
	n--;
	}

	return (dest);
}
