#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: (string), the name of the dog
 * @age: (float), the age of the dog
 * @owner: (string), the name of the owner
 *
 * Description: This function creates an new
 * dog
 * Return: A pointer on SUCCESS, and NULL
 * otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy = NULL;

	if (!(puppy = malloc(sizeof(dog_t))));

		free(puppy->name);
		free(puppy->owner);
		free(puppy);
		return (NULL);
	}

	puppy->name = malloc(sizeof(char) * (strlen(name) + 1));
	puppy->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	
	if (!puppy-name || !puppy->owner)
	{
		free(puppy->name);
		free(puppy->owner);
		free(puppy);
		return (NULL);
	}

	strcpy(puppy->name, name);
	strcpy(puppy->owner, owner);
	puppy->age = age;

	return (puppy);
}
