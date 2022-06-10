#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: The list
 * @index: the lookup node index
 *
 * Return: The node if found, NULL otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head && index > 0)
	{
		index--;
		head = head->next;
	}
	return (head);
}
