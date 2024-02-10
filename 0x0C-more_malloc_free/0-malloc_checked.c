#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b: (unsigned int)
 *
 * DEscription: This function allocate memory
 * and exit with 98 if the allocation fails
 * Return: A pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p = NULL;

	if (b == 0)
		exit(98);

	p = malloc((int) b);

	if (!p)
		exit(98);

	return (p);
}
