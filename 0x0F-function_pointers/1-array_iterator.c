#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on elements
 * @array: an array of integer
 * @size: array length
 * @action: a pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
