#include <stdio.h> 


/**
 * print_array - prints n elements of an array of integers
 * @a: a pointer to an integer array
 * @n: number of element in the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != 0)
			printf(", ");

		printf("%d", a[i++]);
	}
	
	printf("\n");
}
