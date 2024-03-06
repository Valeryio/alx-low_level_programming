#include "dog.h"

/**
 * print_dog - initialise the dog structure
 * @d: (object) the pointer to the dog object
 *
 * Description: With the different given informations,
 * this function prints a dog structure
 */

void print_dog(struct dog *d)
{
	if (!d)
		exit(EXIT_FAILURE);

	(!d->name) ? printf("nil\n") : printf("%s\n", d->name);
	printf("%d\n", d->age);
	(!d->owner) ? printf("nil\n") : printf("%s\n", d->owner);
}
