#include "3-calc.h"

/**
 * get_op_func - computes the calc
 * @a: (int)
 * @b: (int)
 *
 * Description: This function select the
 * correct function to perform the operation
 * asked by the user
 * Return: An integer
 */

op_t *get_op_func(char *s)
{

	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	for (i = 0; i < 5; i++)
		if (s[i] == ops[i].op)
			return (ops[i]);

	return (NULL);
}
