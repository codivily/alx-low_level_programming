#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0
 *
 *
 * Return: no return value
 */
void times_table(void)
{
	int number = 0;
	int multiplier = 0;
	int product = 0;

	for (multiplier = 0; multiplier < 10; multiplier++)
	{
		for (number = 0; number < 10; number++)
		{
			product = number * multiplier;

			if (number > 0)
			{
				printf(", ");
			}

			if (number == 0)
				printf("%d", product);
			else
				printf("%2d", product);
		}
		printf("\n");
	}
}
