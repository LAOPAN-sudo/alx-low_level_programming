/**
 * string_toupper - Converts all lowercase letters of a string to uppercase
 *
 * @s: String to modify
 *
 * Return: Pointer to the modified string
 */

char *string_toupper(char *s)
{
	char *p = s;

	while (*p)
	{
	if (*p >= 'a' && *p <= 'z')
	{
		*p -= 32;
	}
	p++;
	}

	return (s);
}
