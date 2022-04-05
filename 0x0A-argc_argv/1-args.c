#include <stdio.h>

/**
 * main - A program that prints the number of arguments passed to it
 * @argc: arugment count
 * @argv: argument list
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
