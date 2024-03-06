#include "main.h"

/**
 * print_name - print a name
 * @name: (string)
 * @f: (function to pointer)
 *
 * Description: This function prints
 * the name of people
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;

	f(name);
}
