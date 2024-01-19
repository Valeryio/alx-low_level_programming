#include "main.h"

/**
 * _strdup - string reallocation
 * @str: (string)
 *
 * Description: This function reallocate
 * a new string.
 *
 * Return: A pointer
 */

char *_strdup(char *str)
{
	int size = strlen(str), i = 0;
	char *newStr = NULL;

	if (str == NULL)
		return (NULL);

	newStr = malloc(sizeof(char) * (size + 1));

	if (!newStr)
		return (NULL);

	for (; i < size; i++)
		newStr[i] = str[i];

	newStr[i] = '\0';

	return (newStr);
}
