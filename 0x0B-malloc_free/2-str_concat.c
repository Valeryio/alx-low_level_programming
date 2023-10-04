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
	char *str;
	int i, j, length = 0;

	if (s1 == NULL)
		s1 = "";
	for (i = 0; s1[i] != '\0'; i++)
		length++;

	if (s2 == NULL)
		s2 = "";
	for (i = 0; s2[i] != '\0'; i++)
		length++;
	str = malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);
	if (s1)
	{
		for (i = 0; s1[i] != '\0'; i++)
			str[i] = s1[i];
	}
	if (s2)
	{
		for (j = 0; i < length; i++, j++)
			str[i] = s2[j];
	}
	str[i] = '\0';
	return (str);
}
