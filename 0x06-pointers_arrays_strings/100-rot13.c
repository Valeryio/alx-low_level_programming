#include "main.h"

/**
 * rot13 - rot coding
 * @s: (string) the string
 *
 * Description: This function change all
 * letters of a string to rot13 code
 * Return: a pointer
 */


char *rot13(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a') && (s[i] <= 'r'))
		{
			s[i] += 13;


			while (s[i] > 'z')
			{
				s[i] -= 26;
			}

		}
		else if ((s[i] >= 's') && (s[i] <= 'z'))
		{
			s[i] -= 26;
			s[i] += 13;
		}

		if ((s[i] >= 'A') && (s[i] <= 'Z'))
		{
			s[i] += 13;

			while ((s[i] > 'Z'))
			{
				s[i] -= 26;
			}
		}


	}

	return (s);
}
