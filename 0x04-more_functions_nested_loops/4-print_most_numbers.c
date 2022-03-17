#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int n = 0;

	for (; n <= 9; n++)
	{
		if (n != 2 && n != 4)
			_putchar('0' + n);
	}
	_putchar('\n');
}

