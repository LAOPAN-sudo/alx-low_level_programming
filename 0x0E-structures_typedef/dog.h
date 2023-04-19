#ifndef DOG_H
#define DOG_H

/**
*struct dog - struct that defines a dog
*@name: pointer to a character string containing the dog's name
*@age: float representing the dog's age
*@owner: pointer to a character string containing the owner's name
*Description: struct dog contains information about a dog,name,age, and owner.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
