#include "main.h"


/**
 * _strchr - locate a char
 * @s: (string), the string we want to use
 * @c: (char), the char we want to use
 *
 * Description: This funcitno locate a character in
 * a sring.
 * Return: A pointer to the first occurence of the
 * character c in the string s, or NULL, if the
 * character is not found.
 */


char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s = &s[i];
			return (s);
		}
	}

	return (NULL);
}
