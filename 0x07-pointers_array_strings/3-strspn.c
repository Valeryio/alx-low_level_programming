#include "main.h"

/**
 * _strspn - get the length of substring char
 * @s: (string), the string we want to use
 * @accept: the substring we want to use
 *
 * Description: This functiongets the length of a
 * prefix substring.
 * Return: The number of bytes in the initial segment
 * witch consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, isPresent = 0, length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				isPresent = 1;
				break;
			}
			else
			{
				isPresent = 0;
			}
		}

		if (isPresent == 1)
		{
			length++;
		}
		else
		{
			return (length);
		}
	}

	return (length);
}
