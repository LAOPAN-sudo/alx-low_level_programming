#include <stdio.h>

/**
 * main - prints the third element of an array
 *
 * Return: Always 0.
 */

int main(void)
{
	int a[5] = {98, 402, 198, 1024, 3072};
	int *p;

	p = &a[2];
	*(p + 1) = 98;
	printf("a[2] = %d\n", a[2]); /* Prints the third element of the array */

	return (0);
}
