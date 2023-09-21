#include "main.h"

/**
 * string_toupper - uppercase characters
 * @s: (string) the string
 *
 * Description: This function change all lowercase
 * letters of a string to uppercase
 * Return: a pointer
 */


char *string_toupper(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a') && (s[i] <= 'z'))
		{
			s[i] -= 32;
		}
	}

	return (s);
}
