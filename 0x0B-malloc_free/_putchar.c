#include "main.h"

/**
 * _putchar - print a char
 * @c: (char), the char to print
 *
 * Description: This function prints to the
 * standard output the char.
 * Return: An integer
 */


int _putchar(char c)
{
	return(write(1, &c, sizeof(char)));
}
