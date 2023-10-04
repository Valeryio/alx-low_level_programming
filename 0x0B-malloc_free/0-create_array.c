#include "main.h"

/**
 * create_array - create an array
 * @size: (int), size of the array
 * @c: (char), initialisation char
 *
 * Description: This functtion creates an array of
 * chars and initializes it with a specific char.
 * Return: A pointer to the array, or NULL if it fails
 */


char *create_array(unsigned int size, char c)
{
	char *str = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
