#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to the struct dog
 * @name: Pointer to a char representing the name of the dog
 * @age: Float representing the age of the dog
 * @owner: Pointer to a char representing the name of the owner of the dog
 *
 * Description: This function initializes the struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
