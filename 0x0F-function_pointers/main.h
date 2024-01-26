#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

char _putchar(char c);
void print_name(char*, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

