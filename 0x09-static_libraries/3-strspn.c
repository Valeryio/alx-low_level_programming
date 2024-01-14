#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strspn - Entry point
 * @s: search source
 * @accept: Values to search for
 *
 * Description: Add question here
 * Return: Number of matches
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0, i = 0, j = 0, k;

	while (s[i])
	{
		k = n;
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
			{
				n++;
			}
			j++;
		}
		i++;
		if (k == n)
		{
			return (n);
		}
	}
	return (0);
}
