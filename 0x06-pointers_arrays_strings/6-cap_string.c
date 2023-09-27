#include "main.h"

/**
 * cap_string - uppercase characters
 * @s: (string) the string
 *
 * Description: This function change all first
 * letters of a string to uppercase
 * Return: a pointer
 */


char *cap_string(char *s)
{
	int i, j;

	char separator[] = ",;.!?\"(){}\t\n ";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; separator[j] != '\0'; j++)
		{
			if (s[i] == separator[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
