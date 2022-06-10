#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: The list
 * @n: the node value (an integer)
 *
 * Return: The new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(*new_node));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head)
		(*head)->prev = new_node;

	*head = new_node;
	return (new_node);

}
