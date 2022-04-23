#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: Head of the list
 * @str: A string
 *
 * Return:  Address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	list_t *tail = NULL;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	tail = *head;

	if (tail)
	{
		while (tail->next)
			tail = tail->next;

		tail->next = new_node;
	}
	else
		*head = new_node;

	new_node->next = NULL;
	new_node->str = NULL;
	new_node->len = 0;


	if (str)
	{
		new_node->str = strdup(str);

		while (str[i++])
			;

		new_node->len = i - 1;
	}

	return (new_node);
}
