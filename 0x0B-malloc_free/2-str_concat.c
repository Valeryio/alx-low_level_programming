#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: (string), the first string
 * @s2: (string), the second string
 *
 * Description: This function concatenates two strings.
 * Return: A pointer on success and NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *str = NULL;
	int i, length = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		length++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		length++;
	}

	str = malloc(sizeof(char) * (length + 1));

	i = 0;

	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}

	length = 0;

	while (s2[length] != '\0')
	{
		str[i] = s2[length];
		i++;
		length++;
	}

	str[i] = '\0';

	return (str);
}
