#include "3-calc.h"
#include "function_pointers.h"

/**
 * get_op_func - return a pointer
 * @s: (string)
 *
 * Description: This function returns a pointer
 * to the function that corresponds to the operator
 * given as parameter.
 * Return: A pointer to a function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"*", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (i < 5)
	{
		if (!strcmp(ops[i].op, s))
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
