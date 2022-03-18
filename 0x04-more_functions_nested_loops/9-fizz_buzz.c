#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Fizz-Buzz test from 1 to 100
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int n = 0;

	for (n = 1; n <= 100; n++)
	{
		if (n != 1)
			printf(" ");

		if (!(n % 3) || !(n % 5))
		{
			if (!(n % 3))
				printf("Fizz");

			if (!(n % 5))
				printf("Buzz");
		}
		else
			printf("%d", n);
	}

	printf("\n");

	return (0);
}
