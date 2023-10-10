#include "main.h"

/**
 * array_range - create an array
 * @min: (int), minimum value
 * @max: (int), maximum value
 *
 * Description: This function creates an array
 * of integers. The array created should contain
 * all the values form min (included) to max(included),
 * ordered from min to max.
 * Return: A pointer on SUCCESS, NULL on FAILURE
 */

int *array_range(int min, int max)
{
	int *array = NULL, i, j = 0;

	if (min > max)
		return (NULL);

	array = malloc(((max - min) + 1) * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		array[j] = i;
		j++;
	}

	return (array);
}
