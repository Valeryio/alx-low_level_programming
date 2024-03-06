#ifndef __MY_STRUCT_H_
#define __MY_STRUCT_H_

#include <stdio.h>
#include <stdlib.h>

/** 
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */


 typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif
