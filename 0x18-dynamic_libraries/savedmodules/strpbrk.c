#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: search source
 * @accept: Values to search for
 *
 * Description: Add question here
 * Return: Number of matches
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
			{
				s += i;
				return (s);
			}
			j++;
		}
		i++;
	}
	return (0);
}
