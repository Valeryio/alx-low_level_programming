#include "main.h"

/**
 * free_grid - free a grid
 * @grid: (object)
 * @height: (int)
 *
 * Description: THis function frees a
 * grid
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);

	free(grid);
}
