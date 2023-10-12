#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: (string), the name to print
 * @f: (pointer to function)
 *
 * Description: This function is used to
 * print a name
 */


void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
