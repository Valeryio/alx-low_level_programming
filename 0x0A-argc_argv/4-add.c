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
	int a, b;

	if (!argv[1] || !argv[2])
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a + b);

	return (0);
}
