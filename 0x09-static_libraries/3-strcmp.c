/**
 * _strcmp - Compares two strings
 *
 * @s1: First string to compare
 * @s2: Second string to compare
 *
 * Return: Difference between the first non-matching characters
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}

	return (*s1 - *s2);
}