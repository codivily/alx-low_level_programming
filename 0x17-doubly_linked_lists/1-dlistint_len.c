#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: head of the list
 *
 * Return: The length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
