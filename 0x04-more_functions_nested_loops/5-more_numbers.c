#include "main.h"


/**
 *more_numbers - prints 10 times the numbers, from 0 to 14
 *
 *Return: void
 */
void more_numbers(void)
{
	int n = 0;
	int counter = 14;

	while (counter--)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
		}

		_putchar('\n');
	}
}
