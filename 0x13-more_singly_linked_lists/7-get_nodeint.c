#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node to return (starting at 0).
 *
 * Return: Pointer to the nth node, or NULL if it does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	node = head;
	for (i = 0; node != NULL && i < index; i++)
		node = node->next;

	return (node);
}
