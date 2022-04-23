#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *next = NULL;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
