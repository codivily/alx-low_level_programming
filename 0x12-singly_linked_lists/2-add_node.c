#include <stddef.h>
#include <string.h>


/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: Head of the list
 * @str: A string
 *
 * Return:  Address of the new element
 */
list_t *add_node(list_t **head, const *str)
{
	list_t *new_node = NULL;
	unsigned int i = 0;

	if (!head || !(*head))
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->next = *head;
	new_node->str = NULL;
	new_node->len = 0;

	*head = new_node;

	if (str)
	{
		new_node->str = strdup(str);

		while (str[i++])
			;

		new_node->len = i;
	}

	return (new_node);
}
