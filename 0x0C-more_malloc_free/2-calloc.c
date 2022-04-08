#include <stdlib.h>


/**
 * _calloc - allocates memory for an array
 * @nmemb: A integer, number of size to allocate
 * @size: An integer
 *
 * Return: Void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p = NULL;
	unsigned int i = 0;
	unsigned int len = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = nmemb * size;
	p = malloc(len);

	if (p != NULL)
	{
		while (i < len)
			p[i++] = 0;
	}

	return (p);
}
