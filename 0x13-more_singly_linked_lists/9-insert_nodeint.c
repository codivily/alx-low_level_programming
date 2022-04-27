#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inerts a new node at a given position
 * @head: head of the list
 * @idx: index to insert to
 * @n: data of the new node
 *
 * Return: The address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL, *tmp = NULL;
	unsigned int size = 0;

	if (!head)
		return (NULL);

	tmp = *head;

	while (tmp)
	{
		size++;
		tmp = tmp->next;
	}

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = NULL;

	if (idx > size)
	{
		free(new_node);
		return (NULL);
	}
	else if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		tmp = *head;
		while (--idx)
			tmp = tmp->next;
		new_node = tmp->next;
		tmp->next = new_node;
	}
	return (new_node);
}
