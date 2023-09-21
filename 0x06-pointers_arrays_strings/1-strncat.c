#include "main.h"

/**
 * _strncat - concatenates two string
 * @dest: (string), the destination string
 * @src: (string), the source string
 * @n: (int), the number of characters to count
 *
 * Description: This function concatenates two given strings.
 * Return: A pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, length = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		length++;
	}



	for (i = 0; (i < n) && (src[i] != '\0'); i++)
	{
		dest[length] = src[i];
		length++;
	}

	dest[length] = '\0';





	return (dest);
}
