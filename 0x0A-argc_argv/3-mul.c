#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the sum of two number
 * @argc: (int), the lenght of argv
 * @argc: (string), an array of strings
 *
 * Description: This function multiplies two
 * numbers.
 * Return: An integer
 */


int main(int argc, int *argv[])
{
	int a, b;

	if (argv[2] == NULL)
	{
		printf("Error\n");
		return (1);
	}

	a = strtol(argv[1]);
	b = strtol(argv[2]);

	printf("%d\n", a * b);

	return (0);
}
