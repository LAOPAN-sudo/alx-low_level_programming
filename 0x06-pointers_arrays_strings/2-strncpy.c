/**
 * _strncpy - Copies at most n bytes of src to dest, including the null byte
 * @dest: Destination string to copy to
 * @src: Source string to copy from
 * @n: Maximum number of bytes to copy
 * Return: Pointer to the resulting string dest
 */

char *_strncpy(char *dest, const char *src, int n)
{
	char *dest_ptr = dest;
	const char *src_ptr = src;

	while (n-- > 0 && *src_ptr)
	{
	*dest_ptr++ = *src_ptr++;
	}

	while (n-- > 0)
	{
	*dest_ptr++ = '\0';
	}

	return (dest);
}
