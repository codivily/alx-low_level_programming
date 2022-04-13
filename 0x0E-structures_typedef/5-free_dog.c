#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: the dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		d->name = NULL;
		d->owner = NULL;
		free(d);
		d = NULL;
	}
}
