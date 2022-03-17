#include "main.h"

void print_number(int);

/**
 *more_numbers - prints 10 times the numbers, from 0 to 14
 *
 *Return: void
 */
void more_numbers(void)
{
	int n = 0;
	int counter = 10;

	while (--counter)
	{
		for (n = 0; n <= 14; n++)
		{
			print_number(n);
		}

		_putchar('\n');
	}

	_putchar('\n');
}

/**
 *print_number - Print a given an integer number to the stdout
 *@n: An integer to be displayed
 *
 *Return: Nothing
 */
void print_number(int n)
{
	int pwr_of_10 = 1;
	int first_digit = 0;

	if (n < 0)
	{
		n *= (-1);
		_putchar('-');
	}

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		pwr_of_10 = 1;
		while (n / pwr_of_10)
			pwr_of_10 *= 10;

		while (pwr_of_10 != 1)
		{
			pwr_of_10 /= 10;
			first_digit = n / pwr_of_10;
			_putchar('0' + first_digit);
			n -= (first_digit * pwr_of_10);
		}
	}
}
