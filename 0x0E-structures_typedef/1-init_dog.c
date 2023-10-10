#include "dog.h"
#include <string.h>

/**
 * init_dog - initialise a structure
 * @d: (object), the object used
 * @name: (string), the name of the object
 * @age: (int), the age of the object
 * @owner: (string), the string of the object
 *
 * Description: This function initialise a variable of type
 * struct dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->age = age;

	d->name = malloc(strlen(name) + 1);
	d->owner = malloc(strlen(owner) + 1);

	strcpy(d->name, name);
	strcpy(d->owner, owner);
}
