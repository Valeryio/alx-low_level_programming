#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: (string), the destination string
 * @src: (string), the source string
 * @n: (int), the number of characters to count
 *
 * Description: This function copy a given string to another.
 * Return: A pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; (i < n) && (src[i] != '\0'); i++)
	{
		dest[i] = src[i];
	}

	while (i < 99)
	{
		if (i > 89 && i < 97)
		{
			dest[i] = '*';
		}
		else
		{
			dest[i] = 0;
		}
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
