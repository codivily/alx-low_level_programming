#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: an array of integer
 * @size: the arra length
 * @cmp: predicate function
 *
 * Return: return the index of first match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}

	return (-1);
}
