#include "main.h"

/**
 * puts2 - affichage de données
 * @str: (string) param
 *
 * Description: This function show a number of char.
 *
 * Return: Nothing
 */


void puts2(char *str)
{

	int i = 0, number = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		number = (int) str[i];

		if ((number % 2) == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar(10);
}
