#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet
 *
 * Description: That is a function that prints
 * the alphabet nine time.
 *
 * Return: 0;
 */

void print_alphabet_x10(void)
{
	char i = 'a', NL = '\n';
	int j = 0;

	for (j = 0; j < 10; j++)
	{
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		i = 'a';
		_putchar(NL);
	}
}
