#include "main.h"

/**
 * _calloc - allocate memory
 * @nmemb: (unsigned int)
 * @size: (unsigned int)
 *
 * Description: This function allocate
 * memory using malloc.
 * Return: A pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc((int) (nmemb + size));

	if (!p)
		return (NULL);

	for (i = 0; i < (nmemb + size); i++)
		p[i] = '\0';

	return (p);
}
