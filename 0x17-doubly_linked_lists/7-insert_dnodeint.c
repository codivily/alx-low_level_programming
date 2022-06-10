#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the list
 * @idx: the insert index
 * @n: the new node value (An integer)
 *
 * Return: the new node if insert, NULL otherwise
 */
dlistint_t *
insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *cursor = NULL;
	dlistint_t *tmp = NULL;

	if (!h)
		return (NULL);

	cursor = *h;
	while (cursor && idx > 0)
	{
		idx--;
		tmp = cursor;
		cursor = cursor->next;
	}

	if (idx > 0)
		return (NULL);

	if (*h == cursor)
		return (add_dnodeint(h, n));

	if (!cursor)
		return (add_dnodeint_end(&tmp, n));

	new_node = malloc(sizeof(*new_node));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = cursor;
	new_node->prev = cursor->prev;

	cursor->prev->next = new_node;
	cursor->prev = new_node;

	return (new_node);
}
