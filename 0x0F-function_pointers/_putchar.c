#include "main.h"

/**
 * _putchar - prints a character
 * @c: The caracter to print
 *
 * Description: This function prints
 * a character
 * Return: A character
 */

char _putchar(char c)
{
	return (write(1, &c, 1));
}
