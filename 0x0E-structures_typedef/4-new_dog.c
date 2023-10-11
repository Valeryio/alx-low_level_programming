#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: (string), the name of the new dog
 * @age: (int), the age of the new dog
 * @owner: (string), the owner of the new dog
 *
 * Description: That function creates a new dog
 * Return: A pointer on success, NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = NULL;

	my_dog = malloc(sizeof(dog_t));

	if (!my_dog)
		return (NULL);

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	return (my_dog);
}
