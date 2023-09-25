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
	int i = 0, j = 0, k = 0, isEqual = 0, length = 0;
	char substring[50] = "";

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			k = i;

			for (j = 0; needle[j] != '\0'; j++)
			{
				substring[j] = haystack[k];
				k++;
			}

			for (j = 0; needle[j] != '\0'; j++)
			{
				length++;

				if (substring[j] == needle[j])
				{
					isEqual++;
				}
			}

			if (length == isEqual)
			{
				haystack = &haystack[i];
				return (haystack);
			}
		}
	}

	return (NULL);
}
