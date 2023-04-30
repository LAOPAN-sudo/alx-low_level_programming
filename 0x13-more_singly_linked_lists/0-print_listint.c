#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to head of list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		/* print value of current node */
		int num = h->n;
		int digits = 0;

		if (num == 0)
		{
			_putchar('0');
			digits++;
		}
		else if (num < 0)
		{
			_putchar('-');
			num = -num;
			digits++;
		}
		while (num != 0)
		{
			int digit = num % 10;

			_putchar(digit + '0');
			num /= 10;
			digits++;
		}
		/* move to next node */
		h = h->next;
		count++;
		/* print newline if not at end of list */
		if (h != NULL)
			_putchar('\n');
	}

	return (count);
}
