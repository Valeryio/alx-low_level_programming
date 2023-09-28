#include "main.h"

/**
 * _print_rev_recursion - recursion writing
 * @s: (string), the string we want to output
 *
 * Description: This function prints a string
 * followed by a new line with recursion in reverse.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion((s + 1));
		_putchar(*s);
	}
}
