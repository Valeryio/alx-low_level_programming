#include <stdio.h>

/**
 * main - printing numbers
 *
 * Description: That is a function that prints numbers
 *
 * Return: 0;
 */

int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);

		if ((i + 1) < 10)
		{
			printf(", ");
		}
	}

	printf("\n");

	return (0);
}
