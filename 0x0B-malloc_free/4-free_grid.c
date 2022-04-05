#include <stdlib.h>


/**
 * free_grid - fress a 2 dimensional grid
 * @grid: the grid
 * @height: An integer
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{

	int y = 0;

	while (y < height)
	{
		free(grid[y]);
		grid[y] = NULL;
		y++;
	}

	free(grid);
	grid = NULL;
}
