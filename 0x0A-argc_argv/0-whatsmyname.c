#include <stdlib.h>
#include <stdio.h>


/**
 * main - A program that prints its name followed by a new line.
 * @argc: command line arugments count
 * @argv: an array of command arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{

	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
