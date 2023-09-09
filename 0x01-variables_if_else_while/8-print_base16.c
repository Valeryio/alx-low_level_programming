#include <stdio.h>

/**
 * main -  print alphabet
 *
 * Description: Print the alphabet in lowercase
 * Return: 0
 */

int main(void)
{

	int i = 97;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}

	putchar(10);

	return (0);
}
