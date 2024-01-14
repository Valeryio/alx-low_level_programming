#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: String to search through
 * @needle: Keywords to search for
 *
 * Description: Add question here
 * Return: 0 (failure) index of the first match otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	int c = 0, l = 0, i = 0, m = 0;

	while (needle[l])
	{
		l++;
	}

	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			for (c = 0; c < l; c++)
			{
				if (haystack[i + c] == needle[c])
				{
					m++;
				}
			}
			if (m == l)
			{
				return (haystack += i);
			}
		}
		i++;
	}
	return (0);
}

