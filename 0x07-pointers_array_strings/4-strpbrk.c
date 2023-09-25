#include "main.h"

/**
 * _strpbrk - search a string for any of set
 * of bytes
 * @s: (string), the string in which we make
 * the research
 * @accept: (string), the substring used
 *
 * Description: This function locates the first
 * occurrence in the string s of any of the bytes
 * in the string accept.
 * Return: A pointer to the bye in s that matches one of
 * the bytes in accept, or NULL, if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
	}

	return (NULL);
}
