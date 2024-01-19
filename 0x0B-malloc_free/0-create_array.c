#include "main.h"

/**
 * create_array - create an array
 * @size: (int)
 * @c: (char)
 *
 * Description: This function clean
 * the memory
 * Return: A pointer
 */

char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *array = NULL;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * (int) size);

	if (!array)
		return (NULL);

	for (; i < (int) size; i++)
		array[i] = c;

	return (array);
}
