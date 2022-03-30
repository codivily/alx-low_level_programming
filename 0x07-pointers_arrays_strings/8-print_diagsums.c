#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: the mattrix
 * @size: the size of the mattrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{

	int **matrix = a;
	int x = 0;
	int major_diag_sum = 0;
	int minor_diag_sum = 0;

	for (x = 0; x < size; x++)
	{
		major_diag_sum += matrix[x][x];
		minor_diag_sum += matrix[x][size - x - 1];
	}

	printf("%d, %d\n", major_diag_sum, minor_diag_sum);

}
