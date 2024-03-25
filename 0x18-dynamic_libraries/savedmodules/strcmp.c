#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strcmp - Entry point
 * @s1: Var 1
 * @s2: Var 2
 *
 * Description: Add question here
 * Return: +ve if s1 is greater -ve if s2 is greater and 0 if equal.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, r = 0, c = 0, b = 0, l;

	while (s1[i])
	{
		i++;
	}

	while (s2[r])
	{
		r++;
	}

	if (i <= r)
	{
		l = i;
	}
	else
	{
		l = r;
	}

	while (b <= l)
	{
		if (s1[b] == s2[b])
		{
			b++;
			continue;
		}
		else
		{
			c = s1[b] - s2[b];
			break;
		}

		b++;
	}
	return (c);
}

