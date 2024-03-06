#include "function_pointers.h"
#include "calc.h"

/**
 * main - make calculation
 * @argc: (int)
 * @argv: (object)
 *
 * Description: This function make calculs
 * Return: Something
 */


char verifyOperator(char s);

int main(int argc, char *argv[])
{
	int a = 0, b = 0, result = 0/*, i = 0 , allowed = 0*/;

	/* Verifying if we have the good number of
	   arguments
	*/
	if (argc < 4)
	{
		printf("Error");
		exit(98);
	}

	/* Verifying if the operator is in the list*/
	if (verifyOperator(argv[2][0]) == ' ')
		exit(99);
	
	a = atoi(argv[1]);
	b = atoi(argv[3]);


	if ((b == 0) && ((argv[2][0] == '/') || (argv[2][0] == '%')))
		exit(100);

	result = get_op_func(argv[2])(a, b);

	printf("%d\n", result);

	return (1);
}


/**
 * verifyOperators - verify operators
 * @s: (char), the operator
 *
 * Description: This function verify if the
 * operator given is in the list of given
 * operators
 * Return: 1 on SUCCESS, 0 otherwise
 */

char verifyOperator(char s)
{
	char operators[] = "+-*/%";
	int i = 0;

	while (operators[i] != '\0')
	{
		if (operators[i] == s)
			return (s);
		i++;
	}
	return ' ';
}
