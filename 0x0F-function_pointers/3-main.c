#include "3-calc.h"

int main(int argc, char *argv[])
{
	int i, a, b, exist = 0;
	char operators[] = "+-*/%";

	/**
	 * verify if the number of args given is right
	 */
	
	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}


	/**
	 * Get out of the program if the operator is none of above
	 */
	
	for (i = 0; operators[i] != '\0'; i++)
		if (operators[i] == argv[2][0])
		{
			printf("%c\n", operators[i]);
			exist = 1;
		}
	
	if (exist == 0)
	{
		printf("Error\n");
		exit(99);
	}


	a = atoi(argv[1]);
	b = atoi(argv[3]);

	/**
	 * verifying that is not a division by null!
	 */

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	int (*get_op_func(argv[2]))(a, b);

	return (0);
}
