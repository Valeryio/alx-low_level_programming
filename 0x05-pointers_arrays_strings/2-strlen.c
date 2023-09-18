#include "main.h"

/**
 * _strlen - lenght of a string
 * @s: a string param
 *
 * Description: This function send the length
 * of string given as parameter.
 * Return: (int) @lenght
 */

int _strlen(char *s)
{
	int i, length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length += 1;
	}

	return (length);
}
