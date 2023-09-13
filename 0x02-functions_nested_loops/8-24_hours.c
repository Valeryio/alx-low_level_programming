#include "main.h"

/**
 * jack_bauer - display 24hours
 *
 * Description: Display a day time
 *
 * Return: Nothing at all!
 */


void jack_bauer(void)
{
	int i = 0, j = 0;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			if (j < 10)
			{
				if (i < 10)
				{
					printf("0%d:0%d", i, j);
				}
				else
				{
					printf("%d:0%d", i, j);
				}
			}
			else
			{
				if (i < 10)
				{
					printf("0%d:%d", i, j);
				}
				else
				{
					printf("%d:%d", i, j);
				}
			}

			printf("\n");
		}
	}
}
