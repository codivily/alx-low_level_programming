#include "main.h"

void print_number(int);

/**
 *print_to_98 - prints all natural number from n to 98
 *@n: an integer
 *
 *Return: No return value
 */
void print_to_98(int n)
{
	int step = (n > 98 ? -1 : 1);
	int i = n;
	int stop = 98 + step;

	while (i != stop)
	{
		if (i != n)
		{
			_putchar(',');
			_putchar(' ');
		}

		print_number(i);
		i += step;
	}

	_putchar('\n');
}

/**
 * print_number - Print a given an integer number to the stdout
 * @n: An integer to be displayed
 *
 * Return: Nothing
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
