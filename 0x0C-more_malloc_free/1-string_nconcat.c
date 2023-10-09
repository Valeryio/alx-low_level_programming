#include "main.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: (string), the first string
 * @s2: (string), the second string
 * @n: (int), the number of character to take in the
 * second string
 *
 * Description: This function concatenates two strings.
 * Return: A pointer on success, NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, k, lens1 = 0, lens2 = 0;
	char *ptr = NULL;

	if (s1 != NULL)
		lens1 = strlen(s1);

	if (s2 != NULL)
		lens2 = strlen(s2);

	if (n < lens2)
		lens2 = n;

	ptr = malloc(sizeof(char) * (lens1 + lens2 + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1 != NULL && s1[i] != '\0'; i++)
		ptr[i] = s1[i];


	for (k = 0; s2 != NULL && k < lens2; k++)
	{
		ptr[i] = s2[k];
		i++;
	}

	ptr[i] = '\0';

	return (ptr);
}
