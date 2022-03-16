#include "main.h"

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
				_putchar(',');
				_putchar(' ');
			}

			if (number == 0)
				_putchar('0');
			else
			{
				if (product / 10 == 0)
					_putchar(' ');
				else
					_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
		}
		_putchar('\n');
	}
}
