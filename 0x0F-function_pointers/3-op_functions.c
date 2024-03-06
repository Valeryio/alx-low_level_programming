#include "function_pointers.h"

/**
 * op_add - addition
 * @a: (int)
 * @b: (int)
 *
 * Description: Make an addition
 * Return: A number
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - soustraction
 * @a: (int)
 * @b: (int)
 *
 * Description: Make a soustraction
 * Return: A number
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: (int)
 * @b: (int)
 *
 * Description: Make a multiplication
 * Return: A number
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - divivion
 * @a: (int)
 * @b: (int)
 *
 * Description: Make a division 
 * Return: A number
 */

int op_div(int a, int b)
{
	return (a / b);
}



/**
 * op_mod - modulo
 * @a: (int)
 * @b: (int)
 *
 * Description: Make a modulo 
 * Return: A number
 */

int op_mod(int a, int b)
{
	return (a % b);
}
