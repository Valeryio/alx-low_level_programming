#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strncat - Entry point
 * @dest: Pointer var 1
 * @src: Pointer var 2
 * @n: Action counter
 *
 * Description: Add question here
 * Return: 0 (success) and 1 (failure) to execute
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int c;

	while (*(dest + i))
	{
		i++;
	}

	c = i;

	while (*(src + (i - c)) && (i - c) < n)
	{
		*(dest + i) = *(src + (i - c));
		i++;
	}

	*(dest + i) = '\0';
	return (dest);
}
