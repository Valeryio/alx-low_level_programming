#ifndef __DOG__
#define __DOG__

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - represent a doc
 * @name: (string), the name of the dog
 * @age: (string), the age of the dog
 * @owner: (string), the owner of the dog
 *
 * Description: This function represents a dog
 * with its attributes.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);



#endif
