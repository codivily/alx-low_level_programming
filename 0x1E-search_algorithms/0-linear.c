#include <stddef.h>
#include <stdio.h>

/**
 * linear_search - A function that search for a value in a array of integers
 * @array: An array of integer
 * @size: size the array
 * @value: value to search for
 *
 * Return: First index where value is localed else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array)
	{
		while (i < size)
		{
			printf("Value checked array[%ld] = [%d]\n",
					i, array[i]);

			if (array[i] == value)
				return (i);
			i += 1;
		}
	}

	return (-1);
}
