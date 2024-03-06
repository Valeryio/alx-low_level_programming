#include "main.h"

/**
 * array_iterator - print array's elements
 * @array: (object)
 * @size: (int)
 * @action: pointer to function
 *
 * Description: This function print iteratively
 * the different elements of an array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || !action)
		return;

	for (; i < size; i++)
		action(array[i]);
}
