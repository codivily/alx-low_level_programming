#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t
 * @h: head of the singly linked list
 *
 * Return: new size of the list
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	list_t *nd = h;

	while (nd)
	{
		if (nd->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", nd->len, nd->str);

		nd = nd->next;
		n++;
	}

	return (n);
}
