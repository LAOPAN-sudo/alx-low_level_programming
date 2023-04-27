#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 *
 * @h: head of the linked list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *tem;
	unsigned int i = 0, len;
	char *str;

	tem = h;
	if (h == NULL)
	return (0);
	while (tem != NULL)
	{
		if (tem->str == NULL)
		{
		len = 0;
		str = "(nil)";
		}
		else
		{
		len = tem->len;
		str = tem->str;
		}
		printf("[%d] %s\n", len, str);
		tem = tem->next;
		i++;
	}
	return (i);
}
