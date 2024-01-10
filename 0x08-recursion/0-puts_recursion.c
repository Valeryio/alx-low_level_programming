#include "main.h"

/**
 * _puts_recursion - print characters
 * @s: (char)
 * 
 * Description: This function prints all
 * the characters of a sent string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;

	_putchar(*s);
	s++;

	_puts_recursion(s);

}
