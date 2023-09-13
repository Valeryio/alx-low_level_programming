#include "main.h"

/**
 * print_alphabet - print the alphabet
 *
 * Description: That is a function that prints
 * the alphabet.
 *
 * Return: 0;
 */

void print_alphabet(void)
{
	char i = 'a', NL = '\n';

	while (i < 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar(NL);

}
