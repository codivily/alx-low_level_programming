#include <stdlib.h>


/**
 * alloc_grid - returns a ponter to a 2 dimentionnal array of integers
 * @width: An integer
 * @height: An integer
 *
 * Return: A pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **array = NULL;
	unsigned int x = 0;
	unsigned int y = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* allocate heigh */
	**array = malloc(sizeof(*array) * height);

	if (array != NULL)
	{
		/* allocate the height */
		for (y = 0; y < height; y++)
		{
			array[y] = malloc(sizeof(**array) * width);
		
			if (array[y] == NULL)
			{
				/* abort */
				while (y-- > 0)
					free(array[y]);
				free(array);
				return (NULL);
			}
			
			for (x = 0; x < width; x++)
				array[y][x] = 0;
		}
	}

	return (array);
}
