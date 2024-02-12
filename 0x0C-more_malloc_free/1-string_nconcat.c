#include "main.h"

/**
 * string_nconcat - concat two strings
 * @s1: (string)
 * @s2: (string)
 *
 * Description: This function allow us
 * to concat two strings.
 * Return: A pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int length = 0, i = 0, j = 0;
	char *p = NULL;

	if (((int) n) > ((int) strlen(s2)))
	{
		length = strlen(s1) + strlen(s2);
	}
	else
	{
		length = strlen(s1) + ((int) n);
	}

	if (length == 0)
		return (NULL);

	p = malloc(strlen(s1) + strlen(s2) + 1);

	if (!p)
		return (NULL);

	for (; i < ((int) strlen(s1)); i++)
		p[i] = s1[i];

	for (; i < length; j++, i++)
		p[i] = s2[j];

	p[i] = '\n';

	return (p);
}
