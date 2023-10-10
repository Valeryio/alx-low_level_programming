#include "dog.h"

/**
 * print_dog - print attributes of a dog
 * @d: (struct), the dog
 *
 * Description: This function prints a struct dog
 */

void print_dog(struct dog *d)
{

	if (d->name == NULL)
	{
		printf("Name: nil\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	printf("Age: %x\n", d->age);

	if (d->owner == NULL)
	{
		printf("Name: nil\n");
	}
	else
	{
		printf("Name: %s\n", d->owner);
	}
}
