#include "main.h"

/**
 * rev_string - reverse string
 * @s: (char) param
 *
 * Description: This function reverse a string.
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i = 0, j = 0, length = 0;
	char c;
	char chain[];

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}



	while ((j = length - 1); j >= 0; j--)
	{
		chain[i] = s[j];
		i++;
	}


	chain[length] = '\0';

	printf("%s\n", s);
	j = length;

	printf("length : %d et j : %d", length, j);
/*
	while (i < length/2)
	{
		c = s[i];
		s[i] = s[j - 1];
		s[j - 1] = c;

		i++;
		j--;
	}
*/
}
