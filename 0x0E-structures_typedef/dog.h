#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - A struct that represent a dog
 * @name: the dog name
 * @age: the age
 * @owner: the owner name
 *
 * Description: A go structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif /* _DOG_H_ */
