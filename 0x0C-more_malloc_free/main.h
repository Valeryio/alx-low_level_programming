#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int, unsigned int);

int *array_range(int, int);
void *_realloc(void*, unsigned int, unsigned int);
