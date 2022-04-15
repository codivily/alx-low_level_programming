#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Command line arguments count
 * @argv: Array of command line arguments
 *
 * Return: 0 on success, -1 otherwise
 */
int main(int argc, char **argv)
{
	int a = 0, b = 0;
	int (*op_func)(int, int) = NULL;

	if (argc != 4)
	{
		printf("Error\n");
		return (-1);
	}

	a = atoi(argv[1]);
	op_func = get_op_func(argv[2]);
	b = atoi(argv[3]);

	if (op_func == NULL)
	{
		printf("Error\n");
		return (-1);
	}


	printf("%d\n", op_func(a, b));

	return (0);
}
