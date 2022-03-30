#include "main.h"

/**
 * print_chessboard - print the chessboard
 * @a: the chessboard
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);

		_putchar('\n');
	}
}
