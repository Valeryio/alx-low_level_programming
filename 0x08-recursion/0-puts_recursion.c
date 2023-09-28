#include "main.h"

/**
 * _puts_recursion - recursion writing
 * @s: (string), the string we want to output
 *
 * Description: This function prints a string
 * followed by a new line with recursion
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(++s);
}
