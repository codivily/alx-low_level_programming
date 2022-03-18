#include "main.h"

/**
 * print_number - Print a given an integer number to the stdout
 * @n: An integer to be displayed
 *
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		num = -num;
		_putchar('-');
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}

