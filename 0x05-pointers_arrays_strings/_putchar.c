#include "main.h"

/**
 * _putchar - print a char
 * @c: (character)
 *
 * Description: That is a function used to
 * print a char.
 * Return: Nothing
 */

void _putchar(char *c)
{
	write(1, c, sizeof(c));
}
