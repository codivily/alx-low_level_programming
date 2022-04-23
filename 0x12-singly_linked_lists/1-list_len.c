
/**
 * list_len = return the number of elements in a linked list
 * @h: the head of list
 *
 * Return: The number of element
 */
size_t list_len(const list_t *h)
{
	int n = 0;
	list_t *nd = h;

	while (nd)
	{
		nd = nd->next;
		n++;
	}

	return (n);
}
