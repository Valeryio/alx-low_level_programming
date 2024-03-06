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

	(!d->name) ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	(!d->owner) ? printf("Owner: (nil)\n") : printf("Owner: %s\n", d->owner);
}
