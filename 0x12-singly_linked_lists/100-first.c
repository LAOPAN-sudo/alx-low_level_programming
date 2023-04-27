#include <stdio.h>

void startup_func(void) __attribute__ ((constructor));

/**
 * startup_func - prints message before main
 */
void startup_func(void)
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
