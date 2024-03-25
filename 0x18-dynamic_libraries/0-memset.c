#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _memset - Entry point
 * @s: String pointer
 * @b: Replacement byte
 * @n: Number of replacements
 *
 * Description: Add question here
 * Return: String pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

