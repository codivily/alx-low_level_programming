#include "main.h"

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
	int tmp = 0;

	if (n < 0)
	{
		n *= (-1);
		_putchar('-');
	}

	pwr_of_10 = 1;
	tmp = n;
	while (tmp)
	{
		pwr_of_10 *= 10;
		tmp /= 10;
	}

	tmp = n;
	while (pwr_of_10)
	{
		pwr_of_10 /= 10;
		if (!pwr_of_10 && n != 0)
			break;
		first_digit = tmp / (pwr_of_10 ? pwr_of_10 : 1);
		_putchar('0' + first_digit);
		tmp -= (first_digit * pwr_of_10);
	}
}
