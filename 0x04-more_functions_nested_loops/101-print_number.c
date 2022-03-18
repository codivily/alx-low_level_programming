#include "main.h"

/**
 * print_number - Print a given an integer number to the stdout
 * @n: An integer to be displayed
 *
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int pwr_of_10 = 1;
	unsigned int first_digit = 0;
	unsigned int tmp = 0;
	unsigned int num = n;

	if (n < 0)
	{
		num = -num;
		_putchar('-');
	}

	pwr_of_10 = 1;
	tmp = num;
	while (tmp)
	{
		pwr_of_10 *= 10;
		tmp /= 10;
	}

	tmp = num;
	while (pwr_of_10)
	{
		pwr_of_10 /= 10;
		if (!pwr_of_10)
			pwr_of_10 = 1;

		first_digit = tmp / pwr_of_10;
		_putchar('0' + first_digit);
		tmp = tmp - (first_digit * pwr_of_10);

		if (tmp == 0)
			break;
	}
}
