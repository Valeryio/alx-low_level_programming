#include <stdio.h>

/**
 * main -  print alphabet
 *
 * Description: Print the alphabet in lowercase
 * Return: 0
 */

int main(void)
{

	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);

	return (0);
}
