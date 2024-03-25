#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strncpy - Entry point
 * @dest: Pointer var 1
 * @src: Pointer var 2
 * @n: String count
 *
 * Description: Add question here
 * Return: 0 (success) and 1 (failure) to execute
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + i) || i < n)
	{
		if (*(src + i) && i < n)
			*(dest + i) = *(src + i);
		else if (i < n)
			dest[i] = '\0';
		i++;
	}

	while (*(dest + i))
	{
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}

