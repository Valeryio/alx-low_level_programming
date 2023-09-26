#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: (string), the string we use
 * @needle: (string), the substring to locate
 *
 * Description: This functionfinds the first
 * occurence of the substring needle in the string
 * harstack.
 * Return: A pointer to the beginning of the located
 * substring or NULL if the substring is not found.
 */


char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}

		if (!needle[j])
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
