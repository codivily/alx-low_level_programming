#include "main.h"


/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: an integer
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int line = 0;
	int col = 0;
	int col_max = 0;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (col = 0; col < col_max; col++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			col_max++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
