#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b: (int), number of memory that should be allocated
 *
 * Description: This function allocates memory using malloc
 * Return: A pointer on success, 98 on success
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
