/**
 * cap_string - Capitalizes all words of a string
 *
 * @s: String to modify
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *s)
{
	char *p = s;

	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
		{
			if (p == s ||
				*(p - 1) == ' ' || *(p - 1) == '\t' || *(p - 1) == '\n' ||
				*(p - 1) == ',' || *(p - 1) == ';' || *(p - 1) == '.' ||
				*(p - 1) == '!' || *(p - 1) == '?' || *(p - 1) == '"' ||
				*(p - 1) == '(' || *(p - 1) == ')' || *(p - 1) == '{' ||
				*(p - 1) == '}')
			{
				*p -= 32;
			}
		}
		p++;
	}

	return (s);
}
