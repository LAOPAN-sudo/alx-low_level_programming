#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t count;

	if (head == NULL)
		exit(98);

	tortoise = head;
	hare = head;
	count = 0;

	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		printf("[%p] %d\n", (void *)tortoise, tortoise->n);

		if (tortoise == hare)
		{
			count += loop_length(tortoise);
			break;
		}
		count++;
	}

	if (tortoise != hare)
		count += print_remaining_list(head);

	return (count);
}

/**
 * loop_length - Prints the length of a loop in a linked list.
 * @node: Pointer to a node in the loop.
 *
 * Return: The length of the loop.
 */
size_t loop_length(const listint_t *node)
{
	const listint_t *current = node;
	size_t length = 1;

	while (current->next != node)
	{
		length++;
		printf("[%p] %d\n", (void *)current->next, current->next->n);
		current = current->next;
	}

	printf("-> [%p] %d\n", (void *)node, node->n);

	return (length);
}

/**
 * print_remaining_list - Prints the remaining nodes in a linked list.
 * @node: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_remaining_list(const listint_t *node)
{
	size_t count = 0;

	while (node)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		count++;
		node = node->next;
	}

	return (count);
}
