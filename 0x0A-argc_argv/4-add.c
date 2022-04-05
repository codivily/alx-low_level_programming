#include <stdlib.h>
#include <stdio.h>
#include <string.h>


char *number_to_string(int val, int base);

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

		if (num >= 0 && strlen(str) == strlen(number_to_string(num, 10)))
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

/**
 * number_to_string - convert int to string
 * @val: An integer
 * @base: An integer
 *
 * Return: A pointer to the buffer
 */
char *number_to_string(int val, int base)
{
	static char buffer[32] = {0};

	int i = 30;

	for (; val && i; --i, val /= base)
		buffer[i] = "0123456789abcdef"[val % base];

	return (buffer + i + 1);
}

