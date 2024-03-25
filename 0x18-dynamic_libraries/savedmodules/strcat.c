#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * strln - Entry point
 * @dest: Pointer var 1
 * @src: Pointer var 2
 *
 * Description: Add question here
 * Return: 0 (success) and 1 (failure) to execute
 */
int strln(char *dest, char *src)
{
	int l = 0;
	char c = *src;
	int n = 0;

	while (c != 0)
	{
		c = *(src + l);
		l++;
	}

	l != 0 ? l-- : l;
	c = *dest;

	while (c != 0)
	{
		c = *(dest + n);
		l++;
		n++;
	}

	n != 0 ? l-- : l;

	return (l);
}

/**
 * _strcat - Entry point
 * @dest: Pointer var 1
 * @src: Pointer var 2
 *
 * Description: Add question here
 * Return: 0 (success) and 1 (failure) to execute
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int c;

	while (*(dest + i))
	{
		i++;
	}

	c = i;

	while (*(src + (i - c)))
	{
		*(dest + i) = *(src + (i - c));
		i++;
	}

	*(dest + i) = '\0';
	return (dest);
}
