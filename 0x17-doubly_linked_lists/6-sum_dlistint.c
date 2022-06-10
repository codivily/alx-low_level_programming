#include "lists.h"

/**
 * sum_dlistint - return s the sum of all the data (n) of a dlistint_t
 * @head: the list
 *
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
