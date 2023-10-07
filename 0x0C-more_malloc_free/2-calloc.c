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
	void *ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
