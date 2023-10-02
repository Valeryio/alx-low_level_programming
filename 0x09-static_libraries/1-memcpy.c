#include "main.h"

/**
 * _memcpy - fill memory
 * @dest: (char pointer), the pointer to the memory
 * @src: (char pointer), the pointer to use
 * @n: (int), the number of memory areas
 *
 * Description: This function fills the n bytes of the memory
 * area pointed to by src.
 * Return: A pointer to the memory area s.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
