#include "function_pointers.h"
#include "3-calc.h"

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
	int a = 0, b = 0, result = 0;

	/* Verifying if we have the good number of arguments */
	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Verifying if the operator is in the list*/
	if (((argv[2][0] != '+') && (argv[2][0] != '-') && (argv[2][0] != '*') && (argv[2][0] != '/') && (argv[2][0] != '%')) || (strlen(argv[2]) > 1))
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);


	if ((b == 0) && ((argv[2][0] == '/') || (argv[2][0] == '%')))
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(argv[2])(a, b);

	printf("%d\n", result);

	return (1);
}
