#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * calculateCoins - Calculates the minimum number of coins required to make
 * change for an amount of money.
 *
 * @amount: The amount of money to make change for.
 * @coin: The value of the coin to be used for making change.
 *
 * Return: The number of coins required to make change for the given amount.
 */
int calculateCoins(int amount, int coin)
{
	int numCoins = 0;

	while (amount >= coin)
	{
		numCoins++;
		amount -= coin;
	}

	return (numCoins);
}

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
	int coins = 0;
	int amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	coins += calculateCoins(amount, 25);
	coins += calculateCoins(amount, 10);
	coins += calculateCoins(amount, 5);
	coins += calculateCoins(amount, 2);
	coins += calculateCoins(amount, 1);

	printf("%d\n", coins);

	return (0);
}
