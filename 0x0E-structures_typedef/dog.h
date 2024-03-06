#ifndef _DOG_H_
#define _DOG_H_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - a dog
 * @name: (char*) the name of the dog
 * @owner: (char*)  the name of the owner of the dog
 * @age: (float) the age of the dog
 *
 * Description: That is an object that
 * defines a dog.
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *id);
dog_t *new_dog(char*, float, char*);
void free_dog(dog_t*);
#endif
