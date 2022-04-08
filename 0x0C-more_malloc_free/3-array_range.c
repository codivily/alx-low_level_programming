#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: An integer
 * @max: An integer
 *
 * Return: A pointer to an array of integer
 */
int *array_range(int min, int max)
{
	int *array = NULL;
	int i = 0, len = 0;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	array = malloc(sizeof(*array) * len);

	if (array != NULL)
	{
		for (i = 0; i < len; i++)
			array[i] = min + i;
	}

	return (array);
}
