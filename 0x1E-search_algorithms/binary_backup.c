#include "search_algos.h"

/**
 * binary_search - perform a linear search
 *
 * @array: (int) an array of integer
 * @size: (int) the size of the array
 * @value: (int) the value to search
 *
 * Description: This function makes a binary search on the
 * array to find the value
 *
 * Return: The value ON SUCCESS, and -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, j;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Searching in the array: ");
		for (j = 0; j < size; j++)
		{
			printf("%d,", array[j]);
		}
		printf("\n");

		if (value < (int)(size / 2))
		{
			size = (size / 2);
		}
		else
		{
			if (size % 2 == 0)
			{
				i = size / 2;
			}
			else
			{
				i = size / 2 - 1;
			}
		}

		if (array[i] == value)
			return (i);
	}

	printf("Index not found");
	return (-1);
}
