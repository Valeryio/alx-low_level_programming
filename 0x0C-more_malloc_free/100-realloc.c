#include "main.h"

/**
 * _realloc - reallocate memory
 * @ptr: (pointer), to the memory previously allocated
 * @old_size: (int), the old_size of the memory allocated to ptr
 * @new_size: (int), the new size of the new pointer for which we
 * want to make the allocation
 *
 * Description: This function reallocates a memory block  using
 * malloc and free.
 * Return: A pointer on success, NULL on failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
		return (NULL);

	if (ptr == NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (NULL);


