#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything passed as parameter.
 * @format: list of types of arguments passed to the function
 *
 * Description: The function prints the parameters passed to it based on
 * the format specified. The format is a list of types of arguments passed to
 * the function, where 'c' stands for char, 'i' stands for integer, 'f' stands
 * for float and 's' stands for char *. Any other char is ignored.
 * If the string is NULL, print (nil) instead.
 *
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *s;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (!s)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
