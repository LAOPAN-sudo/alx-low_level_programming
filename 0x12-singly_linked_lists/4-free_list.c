#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: Pointer to the beginning of the list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
