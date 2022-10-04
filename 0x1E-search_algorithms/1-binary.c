#include <stddef.h>
#include <stdio.h>


static void _print_array(int *array, size_t left, size_t right);

/**
* binary_search - A function that searches value in sorted array of integers
* @array: An array of integer
* @size: The size of the array
* @value: The value to search for
* Return: The first index where value is found else -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, middle = 0, right = size - 1;

	if (!array)
		return (-1);

	middle = (left + right) / 2;

	while (left <= right)
	{
		_print_array(array, left, right);

		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] != value)
			right = middle - 1;
		else
			return (middle);

		middle = (left + right) / 2;
	}

	return (-1);
}

/**
* _print_array - helper function to print the array whenever it changes
* @array: The array of integers
* @left: The first index to print from
* @right: The last index to print to
* Return: void
*/
static void _print_array(int *array, size_t left, size_t right)
{
	printf("Searching in array: ");
	while (left <= right)
	{
		printf("%d", array[left]);

		if (left != right)
			printf(", ");
		left += 1;
	}
	printf("\n");
}
