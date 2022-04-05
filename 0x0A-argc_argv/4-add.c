#include <stdlib.h>
#include <stdio.h>


/**
 * main - A program that adds positive numbers
 * @argc: arugment count
 * @argv: argument list
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{

	int sum = 0;

	while (argc > 1)
	{
		sum += atoi(argv[argc - 1]);
		argc--;
	}

	return (0);
}
