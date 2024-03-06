#include "function_pointers.h"

/**
 * main - make calculation
 * @argc: (int)
 * @argv: (object)
 *
 * Description: This function make calculs
 * Return: Something
 */

int main(int argc, char *argv[])
{
	int a = 0, b = 0, i = 0, allowed = 0;
	char operators[] = "+-*/%";

	if (argc < 4)
	{
		printf("Error");
		exit(98);
	}

	for (; i < 5; i++)
	{

		if ((operators[i] == '/' || operators[i] == '%') && atoi(argv[3]) == 0)
		{
			printf("Error");
			exit(100);
		}

		if (operators[i] == argv[2])
			allowed = 1;
	}


	if (allowed == 0)
	{
		printf("Error");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);


	get_op_func(argv[2])(a, b);

}
