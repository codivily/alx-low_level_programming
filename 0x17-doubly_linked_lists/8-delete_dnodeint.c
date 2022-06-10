#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * @head: the list
 * @index: the lookup index
 *
 * Return: 1 on success, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cursor = NULL;

	if (!head)
		return (-1);

	cursor = *head;
	while (cursor && index > 0)
	{
		index--;
		cursor = cursor->next;
	}

	if (index > 0 || !cursor)
		return (-1);

	if (*head == cursor)
		*head = cursor->next;

	if (cursor->prev)
		cursor->prev->next = cursor->next;

	if (cursor->next)
		cursor->next->prev = cursor->prev;

	free(cursor);

	return (1);
}
