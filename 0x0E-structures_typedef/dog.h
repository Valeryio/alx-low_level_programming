#ifndef __DOG__
#define __DOG__

#include <stdio.h>
#include <stdlib>

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

#endif
