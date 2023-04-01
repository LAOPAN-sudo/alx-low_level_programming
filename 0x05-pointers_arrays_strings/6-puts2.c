/**
 * _puts2 - Prints every other character of a string, starting with the first
 *	character, followed by a new line.
 * @str: Pointer to the string to be printed.
 *
 * Return: void.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
