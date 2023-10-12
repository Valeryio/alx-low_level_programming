#ifndef __MHEADER__
#define __MHEADER__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char _putchar(char);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
