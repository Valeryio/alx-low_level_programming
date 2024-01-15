#include <stdio.h>
#include <stdlib.h>

/**
 * main - give back money
 *
 * @argc: (int)
 * @argv: (object)
 *
 * Description: This function gives back money
 * Return: An integer
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	int i = 1, coins[] = { 25, 10, 5, 2, 1}, centimes = 0, money = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	money = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		centimes += money / coins[i];

		if (!(money % coins[i]))
			break;

		money %= coins[i];
	}

	printf("%d\n", centimes);

	return (0);
}
