#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the sum of two number
 * @argc: (int), the lenght of argv
 * @argv: (string), an array of strings
 *
 * Description: This function add two
 * numbers.
 * Return: An integer
 */


int main(__attribute__((unused)) int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (argv[i][0] < '0' || argv[i][0] > '9')
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
