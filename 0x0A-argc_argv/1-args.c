#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments passed into the program
 * @argc: Number of command line arguments
 * @argv: Array name
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; i <= argc; i++)
		
	}
	printf("%d\n", i - 1);

	return (0);
}
