#include <stdlib.h>

/**
 * create_array - create an array of chars, and initializes it with a char
 * @size: size of the array
 * @c: A character
 *
 * Return: A pointer to the array, or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	if (size <= 0)
		return (NULL);
	char *array = malloc(sizeof(char) * size);

	if (array != NULL)
	{
		while (size > 0)
			array[--size] = c;
	}

	return (array);
}
