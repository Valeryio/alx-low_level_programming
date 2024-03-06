#include "dog.h"

/**
 * init_dog - initialise the dog structure
 * @d: (object) the pointer to the dog object
 * @name: (string), the name of the dog
 * @age: (float), the age of the dog
 * @owner: (string), the owner of the dog
 *
 * Description: With the different given informations,
 * this function initialise a dog structure
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d || !name || !owner)
		exit(EXIT_FAILURE);

	d->name = name;
	d->age = age;
	d->owner = owner;
}
