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

	while (i < 123)
	{
		if ((i == 101) || (i == 113))
		{
			i++;
			continue;
		}

		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
