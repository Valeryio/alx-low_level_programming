#include "main.h"

/**
 * array_range - create an array
 * @min: (integer)
 * @max: (integer)
 *
 * Description: This function creates
 * an array of integers.
 * Return: A pointer
 */

int *array_range(int min, int max)
{
	int i = 0, j = 0, *p = NULL;

	if (min < max)
		return (NULL);

	p = malloc(sizeof(int) * (max + 1));

	if (!p)
		return (NULL);


	for (i = min; i <= max; j++, i++)
		p[j] = i;

	return (p);
}
