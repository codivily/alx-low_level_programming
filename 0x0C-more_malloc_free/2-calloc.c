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
	if (nmemb == 0 || size == 0)
		return (NULL);

	return (malloc(sizeof(char) * nmemb * size));
}
