#include "main.h"

/**
 * _putchar - print a character
 * @n: the character
 *
 * Description: This function print
 * just a character.
 */


void _putchar(char n)
{
	write(1, &n, sizeof(char));
}
