#include <stdio.h>

void startup_func(void) __attribute__ ((constructor));

/**
 * startup_func - prints a message before the main function is executed
 */
void startup_func(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}

