#include "main.h"


/**
 * _strchr - locate a char
 * @s: (string), the string we want to use
 * @c: (char), the char we want to use
 *
 * Description: This function locate a character in
 * a string.
 * Return: A pointer to the first occurence
*/


char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;

		if (i == c)
		{
			return (s - 1);
		}

		if (i == '\0')
		{
			return (NULL);
		}
	}
}
