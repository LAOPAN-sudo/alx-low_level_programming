#include "main.h"

/**
 * _isupper - checks is a character is uppercase
 * @letter: carrier character variable
 * Return: 1 if true, 0 if false
 */

int _isupper(char letter)
{
		while (letter >= 'a' && letter <= 'z')
		{
			return (1);
		}
		return (0);
}
