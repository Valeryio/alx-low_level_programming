#include "main.h"

/**
 * _calloc - allocate memory
 * @nmemb: (int), number of element
 * @size: (int), size of one element
 *
 * Description: This function allocates memory for
 * an arary using malloc.
 * Return: A pointer on success, NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, *ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmem * size; i++)
		ptr[i] = 0;

	return ((int *) ptr);
}
