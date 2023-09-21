#include "main.h"

/**
 * cap-string - uppercase characters
 * @s: (string) the string
 *
 * Description: This function change all first
 * letters of a string to uppercase
 * Return: a pointer
 */


char *cap_string(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] == ',') || (s[i] == ';') || (s[i] == '.'))
		{
			s[i+1] -= 32;
		}


		if ((s[i] == '!') || (s[i] == '?') || (s[i] == '"'))
		{
			s[i+1] -= 32;
		}


		if ((s[i] == '(') || (s[i] == ')') || (s[i] == '{'))
		{
			s[i+1] -= 32;
		}


		if (s[i] == '}')
		{
			s[i+1] -= 32;
		}

	}

	return (s);
}
