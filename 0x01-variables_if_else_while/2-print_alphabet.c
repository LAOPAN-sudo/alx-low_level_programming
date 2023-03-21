#include <stdio.h>

/**
 * main - Entry point
 * Description: alphabet
 * Return: Always 0 (success)
 */

int main(void)
{

	char letter = 'a';

	do {
		putchar(letter);
		letter++;
	} while (letter <= 'z');
	putchar('\n');

	return (0);
}
