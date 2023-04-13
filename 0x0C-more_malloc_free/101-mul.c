#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digit_string - checks if a string is composed only of digits
 *
 * @str: the string to check
 *
 * Return: 1 if @str is composed only of digits, 0 otherwise
 */
int is_digit_string(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * multiply - multiplies two numbers
 *
 * @num1: the first number
 * @num2: the second number
 *
 * Return: the result of the multiplication
 */
int multiply(int num1, int num2)
	{
		return (num1 * num2);
	}

/**
 * main - multiplies two positive numbers
 *
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments passed to the program
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_digit_string(argv[1]) || !is_digit_string(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	int result = multiply(num1, num2);

	printf("%d\n", result);

	return (0);
}
