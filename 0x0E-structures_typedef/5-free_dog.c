#include "dog.h"

/**
 * free_dog - free a structure
 * @d: (object), a structure
 *
 * Description: This function frees a structure
 * dog given as arg
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
