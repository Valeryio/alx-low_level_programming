#include <stdio.h>
#include <stdlib.h>

/**
 * main - multipy two number
 *
 * @argc: (int)
 * @argv: (object)
 *
 * Description: This function multiply
 * two numbers given as parameters
 * Return: 1 on fail, 0  otherwise
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
