#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: String pointer
 * @src: Replacement byte
 * @n: Number of replacements
 *
 * Description: Add question here
 * Return: String pointer s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

