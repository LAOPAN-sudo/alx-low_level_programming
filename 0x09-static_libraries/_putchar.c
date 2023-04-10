#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 * Description: Use a function to print a word
 * Return: Always 0 (success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
