#include <stdio.h>

/**
 * struct dog - a dog
 * @name: (char*) the name of the dog
 * @owner: (char*)  the name of the owner of the dog
 * @age: (float) the age of the dog
 *
 * Description: That is an object that 
 * defines a dog.
 */


typedef struct dog {
	char *name;
	char *owner;
	float age;
} dog;
