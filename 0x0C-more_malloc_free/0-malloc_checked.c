#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the amount of memebor to allocate
 *
 * Return: A void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
