#include <stddef.h>
#include "lists.h"

/**
 * list_len = return the number of elements in a linked list
 * @h: the head of list
 *
 * Return: The number of element
 */
size_t list_len(const list_t *h)
{
	int n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}
