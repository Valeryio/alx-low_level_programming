#include "function_pointers.h"

/**
 * printer - print a string
 * @s: (string), the string to print
 *
 * Description: This function print a
 * string
 */

void printer(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
}



/**
 * print_name - print a name
 * @name: (string), the name to print
 * @f: (pointer to function)
 *
 * Description: This function is used to
 * print a name
 */


void print_name(char *name, void (*f)(char *));
{
	f(name);
}
