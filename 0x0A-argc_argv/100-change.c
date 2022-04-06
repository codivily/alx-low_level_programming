#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimun number of coins to make change for an amount
 * @argc: An integer
 * @argv: An array of string
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{

	int n = 0, num = 0, r = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	for (; num > 0 && i < 5; i++)
	{
		r = num / coins[i];
		n += r;
		num -= r * coins[i];
	}

	printf("%d\n", n);

	return (0);
}
