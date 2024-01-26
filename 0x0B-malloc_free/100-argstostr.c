#include "main.h"

/**
 * argstostr - concatenate strings
 * @ac: (int)
 * @av: (object)
 *
 * Description: This function concatenates
 * arg line string given
 * Return: a char
 */

char *argstostr(int ac, int **av)
{
	int i = 1, j = 0, k = 0, totalChar = 0;
	char *s = NULL;

	for (; i < ac; i++)
		totalChar = strlen(av[i]) + 1;

	s = malloc(sizeof(char) * totalChar);

	if (!s)
		free(s);
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]), k < totalChar; k++, j++)
		{
			s[k] = av[i][j];
		}
		s[k] = '\n';
		k++;
	}

	return (s);
}
