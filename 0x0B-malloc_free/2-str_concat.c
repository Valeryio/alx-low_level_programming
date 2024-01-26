#include "main.h"

/**
 * str_concat - concatenate strings
 * @s1: (string)
 * @s2: (string)
 *
 * Description: This function concatenates
 * two strings.
 * Return: a pointer
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i = 0, j = 0;
	char *newStr = NULL;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	size1 = strlen(s1);
	size2 = strlen(s2);

	newStr = malloc(sizeof(char) * (size1 + size2 + 1));

	if (!newStr)
		return (NULL);

	for (; i < size1; i++)
		newStr[i] = s1[i];

	for (; i < size1 + size2; i++, j++)
		newStr[i] = s2[j];

	newStr[i] = '\0';

	return (newStr);
}
