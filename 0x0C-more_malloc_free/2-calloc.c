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
	char *ptr = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
