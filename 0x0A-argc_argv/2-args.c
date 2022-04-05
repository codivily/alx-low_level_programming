#include <stdlib.h>
#include <stdio.h>


/**
 * main - A program that prints all argumetns it receives
 * @argc: arguments count
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int pos = 0;

	while (pos < argc)
		printf("%s\n", argv[pos++]);

	return (0);
}
