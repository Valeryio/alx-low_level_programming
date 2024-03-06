#ifndef _DOG_H_
#define _DOG_H_


#include <stdio.h>
#include <stdlib.h>

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
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
