#include "main.h"


/**
 * print_triangle - Prints a triangle
 * @size: an integer
 *
 * Return: void
 */
void print_triangle(int size)
{
	int line = 0;
	int col = 0;
	int start_col = 0;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (; line < size; line++)
		{
			start_col = size - line - 1;

			for (col = 0; col < size; col++)
			{
				if (col < start_col)
					_putchar(' ');
				else
					_putchar('#');
			}

			_putchar('\n');
		}
	}
}
