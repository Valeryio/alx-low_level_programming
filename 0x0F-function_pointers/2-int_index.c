#include "function_pointers.h"


/**
 * int_index - find an index
 * @array: (object)
 * @size: (int)
 * @cmp: function pointer
 *
 * Description: This function find an index
 * for a number in an array
 * Return: An integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	
	if (!array || !cmp)
		return;

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
