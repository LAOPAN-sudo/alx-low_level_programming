#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the memory block to be allocated
 *
 * Return: pointer to the allocated memory
 * If malloc fails, the malloc_checked function should cause normal
 * process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
