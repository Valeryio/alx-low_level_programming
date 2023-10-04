#include "main.h"

/**
 * _strdup - duplicate a string
 * @str: (string), the string we want to duplicate
 *
 * Description: This function returns a pointer to a
 * newly allocated space in memory, which contains a
 * copy of the string given as a param
 * Return: A pointer on success and NULL otherwise
 */

char *_strdup(char *str)
{
	int i, length = 0;
	char *cpy = NULL;


	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	cpy = malloc(sizeof(char) * length);

	if (cpy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		cpy[i] = str[i];
	}

	cpy[i] = '\0';

	return (cpy);
}
