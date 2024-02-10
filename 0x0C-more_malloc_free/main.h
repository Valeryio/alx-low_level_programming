#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char*, char*, unsigned int);
void *_calloc(unsigned int, unsigned int);
int *array_range(int, int);
void *_realloc(void*, unsigned int, unsigned int);
