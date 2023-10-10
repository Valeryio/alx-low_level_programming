#include "dog.h"
#include <string.h>

/**
 * _strlen - find the length of a string
 * @str: (string)
 *
 * Description: This function return the length
 * of a string
 * Return: An integer
 */

int _strlen(char *str)
{

	if (*str == '\0')
		return (0);

	str++;
	return (1 + _strlen(str));
}


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
	if (d == NULL)
		exit (98);

	d->age = age;

	d->name = malloc(_strlen(name) + 1);

	if (d->name == NULL)
		exit (98);


	d->owner = malloc(_strlen(owner) + 1);

	if (d->owner == NULL)
		exit (98);

	strcpy(d->name, name);
	strcpy(d->owner, owner);
}
