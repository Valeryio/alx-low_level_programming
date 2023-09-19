#include "main.h"

/**
 * puts_half - print half
 * @str: (string) param
 *
 * Description: This function allow us to print the
 * half of a string.
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i = 0, length = 0, half = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}


	if ((length % 2) == 0)
	{
		half = length / 2;
	}
	else
	{
		half = (length - 1) / 2;
	}


	for (i = half; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
