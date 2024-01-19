#include "main.h"

/**
 * _strdup - string reallocation
 * @str: (string)
 *
 * Description: This function reallocate
 * a new string.
 * Return : A pointer
 */

char *_strdup(char *str)
{
	int size = strlen(str), i = 0;
	char *newStr = NULL;

	if (!str)
		return (NULL);

	newStr = malloc(sizeof(char) * size);

	if (!newStr)
		return (NULL);

	for (; i < size; i++)
		newStr[i] = str[i];

	return (newStr);
}