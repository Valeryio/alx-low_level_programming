#include <stdio.h>
#include <stdlib.h>

/**
 * main - print digits on a line
 *
 * @argc: (int)
 * @argv: (object)
 *
 * Description: This functions prints
 * differents numbers given as argument
 * in the command line
 * Return: An int
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	int i = 1, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (; i < argc; i++)
	{
		if (!atoi(argv[i]) && argv[i] != "0")
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
