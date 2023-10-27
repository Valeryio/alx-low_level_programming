#include "main.h"

/**
 * _putchar - print a char
 * @c: the char
 *
 * Description: This function prints
 * a char
 * Return: An integer
 */

int _putchar(char c)
{
	return (write(1, &c, sizeof(char)));
}
