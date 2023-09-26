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
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			/*s = &s[i];*/
			return (s + i);
		}
	}
	return (NULL);
}
