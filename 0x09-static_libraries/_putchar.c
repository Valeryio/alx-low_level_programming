#include "main.h"

/**
 * _putchar - write to an output
 * @s: (char), the var to write
 *
 * Description: This function write to the
 * standard output a char.
 */

int _putchar(char s)
{
	return (write(1, &s, sizeof(s)));
}
