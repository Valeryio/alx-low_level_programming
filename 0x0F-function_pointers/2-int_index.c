#include "function_pointers.h"

/**
 * int_index - searches an index
 * @array: (int array)
 * @size: (int), the size of the array
 * @cmp: (int pointer)
 *
 * Description: This function searches for
 * an integer
 * Return: An int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp((int) array[i]) != 0)
			{
				return (i);
			}
		}
	}

	return (-1);
}
