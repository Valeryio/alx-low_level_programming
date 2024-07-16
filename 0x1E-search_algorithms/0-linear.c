#include "search_algos.h"

/**
 * linear_search - perform a linear search
 *
 * @array: (int) an array of integer
 * @size: (int) the size of the array
 * @value: (int) the value to search
 *
 * Description: This function makes a linear search on the
 * array to find the value
 *
 * Return: The value ON SUCCESS, and -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	for (i; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
