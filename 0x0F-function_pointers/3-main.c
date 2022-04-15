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
	int a = 0, b = 0, i = 0;
	int (*op)(int, int) = NULL;

	if (argc < 4)
	{
		printf("Error\n");
		return (-1);
	}


	while ('0' <= argv[1][i] && argv[1][i] <= '9')
		i++;
	a = (int)argv[1][i];

	i = 0;
	while ('0' <= argv[3][i] && argv[3][i] <= '9')
		i++;
	b = (int)argv[3][i];

	if (a != (int)'\0' || b != (int)'\0')
	{
		printf("Error\n");
		return (-1);
	}
	
	a = atoi(argv[1]);
	op = get_op_func(argv[2]);
	b = atoi(argv[3]);

	if (op == NULL)
	{
		printf("Error\n");
		return (-1);
	}


	printf("%d\n", op(a, b));

	return (0);
}
