#include "main.h"

/**
 * print_name - Prints a name
 * @name: Pointer to the name to be printed
 * @f: Pointer to the function that prints the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}