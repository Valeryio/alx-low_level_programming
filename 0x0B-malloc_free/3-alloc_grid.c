#include "main.h"

/**
 * alloc_grid - create two dimensionnal array
 * @width: the number of columns
 * @height: the number of lines
 *
 * Description: This function return a pointer
 * to a 2 dimentionnal array of integers.
 * Return: A pointer on success and 0 on failure
 */

int **alloc_grid(int width, int height)
{

	int i, j;
	int **grid;

	if ((width < 0) || (width == 0) || (height == 0) || (height < 0))
	{
		return (NULL);
	}

	grid = (int **) malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			free(grid[i]);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
