#include "main.h"

/**
 * print_rev - print the reverse
 * @s: (char) param
 *
 * Description: That is a function that prints the reverse of a string
 * Return: Nothing!
 */

void print_rev(char *s)
{
	int length = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	for (length += 0; length > 0; length--)
	{
		_putchar(s[length]);
	}

	_putchar(10);
}
