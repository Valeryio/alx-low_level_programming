#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: (char) source
 * @src: (char) the destination
 *
 * Description: This function copy a string
 * Return: a pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
