#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Return: A pointer to a dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name_len = 0, owner_len = 0;
	char *name_ = NULL, *owner_ = NULL;
	dog_t *dog = NULL;

	/* determining lengths */
	while (*(name + name_len) != '\0')
		name_len++;

	while (*(owner + owner_len) != '\0')
		owner_len++;

	/* memory allocations */
	dog = malloc(sizeof(*dog));
	name_ = malloc(sizeof(*name_) * (name_len + 1));
	owner_ = malloc(sizeof(*owner_) * (owner_len + 1));

	if (dog == NULL || name_ == NULL || owner_ == NULL)
	{
		free(dog);
		free(name_);
		free(owner_);
		return (NULL);
	}

	/* copying */
	dog->age = age;
	dog->name = name_;
	dog->owner = owner_;

	while (*name != '\0')
		*(name_++) = *(name++);
	*name_ = '\0';

	while (*owner != '\0')
		*(owner_++) = *(owner++);
	*owner_ = '\0';

	return (dog);
}

