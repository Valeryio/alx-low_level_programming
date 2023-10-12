#include "function_pointers.h"

/**
 * array_iterator - execute on each element
 * @array: (int), an array
 * @size: (int), the size of the array
 * @action: (pointer), to the function
 *
 * Description: This function executes a function
 * given as parameter on each element of an array.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
		for (i = 0; i < (int) size; i++)
			action(array[i]);
}
