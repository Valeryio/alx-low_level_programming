#include "main.h"
#define LENGTH height

/**
 * alloc_grid - allow grid
 * @width: (int)
 * @height: (int)
 *
 * Description: This function allow
 * an allocation of two dimensionnal
 * array.
 * Return: A pointer
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0, **p = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (!p)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);

		if (!p)
		{
			for (j = 0; j < height; j++)
				free(p[j]);
			free(p);
		}
	}



	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			p[i][j] = 0;
		printf("\n");
	}

	return (p);
}
