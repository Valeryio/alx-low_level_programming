#include "main.h"

/**
 * _strlen_recursion - give a length
 * @s: (string), the string to use
 *
 * Description: This function returns the length
 * of a string
 * Return: An int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (1 + _strlen_recursion(s));
}
