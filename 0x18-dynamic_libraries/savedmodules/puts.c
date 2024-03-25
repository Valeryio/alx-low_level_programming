#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _puts - Prints string
 * @str: The string to be printed
 *
 * Description: I do not fear computers. I fear the lack of them.
 * Return: 0 (success) and 1 (failure) to execute
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i++));
	}
	_putchar('\n');
}
