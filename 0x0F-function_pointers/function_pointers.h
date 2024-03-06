#ifndef __PROTOTYPE_H_
#define __PROTOTYPE_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>


char _putchar(char c);
void print_name(char*, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *, int, int (*cmp)(int));

#endif
