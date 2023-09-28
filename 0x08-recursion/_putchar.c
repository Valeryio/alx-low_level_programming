#include "main.h"

/**
 * _putchar - write to an output
 * @s: (char), the var to write
 *
 * Description: This function write to the
 * standard output a char.
 */

void _putchar(char s)
{
	write(1, &s, sizeof(s));
}
