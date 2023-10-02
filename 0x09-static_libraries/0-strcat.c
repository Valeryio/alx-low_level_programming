#include "main.h"

/**
 * _strcat - concatenates two string
 * @dest: (string), the destination string
 * @src: (string), the source string
 *
 * Description: This function concatenates two given strings.
 * Return: A pointer
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, length = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		length++;
	}



	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length] = src[i];
		length++;
	}

	dest[length] = '\0';

	return (dest);
}
