#include "main.h"

/**
 * _puts - print a string
 * @str: (string)
 *
 * Description: This function prints
 * a string followed by a new line.
 * Return: Nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *str[i] != '\0'; i++)
	{
		_putchar(*str[i]);
	}
}
