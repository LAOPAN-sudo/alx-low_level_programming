#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point for the program that calculates the minimum number of
 * coins required to make change for an amount of money.
 *
 * @argc: The number of command line arguments.
 * @argv: An array containing the command line arguments.
 *
 * Return: 0 if the program completes successfully, otherwise 1.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	int coins = 0;

	coins += cents / 25;
	cents = cents % 25;

	coins += cents / 10;
	cents = cents % 10;

	coins += cents / 5;
	cents = cents % 5;

	coins += cents / 2;
	cents = cents % 2;

	coins += cents;

	printf("%d\n", coins);

	return (0);
}
