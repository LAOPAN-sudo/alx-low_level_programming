#include <stdlib.h>

/**
 * malloc - Override of the standard memory allocation function
 * @size: The size of the memory block to allocate
 *
 * Return: Always returns NULL to simulate memory allocation failure
 */
void *malloc(size_t size)
{
/* Override malloc() to do nothing */
(void)size;
return (NULL);
}

/**
 * rand - Override of the standard random number generator function
 *
 * Return: Always returns the constant value 9
 */
int rand(void)
{
/* Override rand() to always return the winning numbers */
return (9);
}
