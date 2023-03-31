/**
 * leet - Encodes a string into 1337
 *
 * @s: String to encode
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *s)
{
	char *p = s;
	int i, j;
	char *letters = "aAeEoOtTlL";
	char *leet_chars = "4433007711";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = leet_chars[j];
			}
		}
	}

	return (p);
}
