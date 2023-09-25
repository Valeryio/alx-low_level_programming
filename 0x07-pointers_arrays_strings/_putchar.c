#include "main.h"

/**
 * _putchar - print a character
 * @c: (char), the character to print
 *
 * Description: this function write to the
 * standard output a char.
 */

void _putchar(char c)
{
	write(1, &c, sizeof(c));
}
