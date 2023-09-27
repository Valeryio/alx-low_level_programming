#include "main.h"


/**
 * _strcmp - compares two strings
 * @s1: (string), the first string
 * @s2: (string), the second string
 *
 * Description: This function compares arithmethically two
 * strings.
 * Return: An integer
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	if (s1[i] == '\0' || s2[i] == '\0')
	{
		return (s1[i - 1] - s2[i - 1]);
	}

	return (0);
}
