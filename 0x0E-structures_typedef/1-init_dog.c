#include "dog.h"


/**
 * init_dog - initialize a variable of type struct dog
 * @d: the dog struct
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner name
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
