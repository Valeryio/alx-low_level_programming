#include "dog.h"

/**
 * free_dog - free an object
 * @d: (object), a dog
 *
 * Description: This function frees a dog
 * object
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
