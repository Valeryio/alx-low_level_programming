#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strlen - Measure string length
 * @s: String to be measured
 *
 * Description: Write a function that returns the length of a string.
 * Return: 0 (success) and 1 (failure) to execute
 */
int _strlen(char *s)
{
	int l = 0;
	char c = *s;

	while (c != '\0')
	{
		c = *(s + l);
		l++;
	}

	return (l == 0 ? l : --l);
}
