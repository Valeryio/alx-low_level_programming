#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strchr - Entry point
 * @s: string pointer
 * @c: Source character
 *
 * Description: Add question here
 * Return: c (success) and 0[NULL] (failure) to execute
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}

