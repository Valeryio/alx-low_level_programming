#include "main.h"

/**
 * free_grid - free a two dimentional array
 * @grid: (array), the two dimentionnal array
 * @height: (int), the number of lines
 *
 * Description: This function frees a two dimentional
 * grid previously created by alloc grid function
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
