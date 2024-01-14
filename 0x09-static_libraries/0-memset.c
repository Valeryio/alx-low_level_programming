#include "main.h"

/**
 * _memset - fill memory
 * @s: (char pointer), the pointer to the memory
 * @b: (constant byte), the constant value we have to use
 * @n: (int), the number of memory areas
 *
 * Description: This function fills the n bytes of the memory
 * area pointed to by s with the constannt byte b.
 * Return: A pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
