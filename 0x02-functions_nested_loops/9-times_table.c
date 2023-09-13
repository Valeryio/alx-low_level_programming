#include "main.h"

/**
 * times_table - display a table
 *
 * Description: Display a time table
 *
 * Return: Nothing at all!
 */


void times_table(void)
{
	int i = 0, j = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%d", i * j);

			if (j != 9)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
