#include <stdio.h> 
#include <stdlib.h>
#include <string.h>


char *create_array(unsigned int, char);
char *_strdup(char*);
char *str_concat(char*, char*);
int **alloc_grid(int, int);
void free_grid(int **, int);
char *argstostr(int , char **);
char **strtow(char *);
