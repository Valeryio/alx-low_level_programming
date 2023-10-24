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


int main(int argc, char *argv[])
{
	int i,  a = 0, sum = 0;

	for (i = 1; i < argc; i++)
	{
		a = atoi(argv[i]);

		printf("La variable : a [%d]\n", a);

		if ((char)a < '0' || (char)a > '9')
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
