#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: an integer
 *
 * Return: void
 */
void print_square(int size)
{
	int line = 0;
	int col = 0;

	for (; line < size; line++)
	{
		for (col = 0; col < size; col++)
			_putchar('#');
		_putchar('\n');
	}
}
