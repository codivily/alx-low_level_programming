#include "main.h"


/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: an integer
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		while (n--)
			_putchar('\\');
	}
	_putchar('\n');
}
