#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * itoa - convert an integer to a string
 * @val: An integer
 * @base: An base
 *
 * Return: the converted string
 */
char *itao(int val, int base)
{
	static char buffer[32] = {0};

	int i = 30;

	for (; val && i; --i, val /= base)
		buffer[i] = "0123456789abcdef"[val % base];

	return (buffer + i + 1);
}
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
	int num = 0;
	char *str = NULL;

	while (argc >= 1)
	{
		str = argv[argc - 1];
		num = atoi(str);

		if (num >= 0 && strlen(str) == strlen(itao(num, 10)))
			sum += num;
		else
			break;

		argc--;
	}


	if (argc == 1)
		printf("%d\n", sum);
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);

}
