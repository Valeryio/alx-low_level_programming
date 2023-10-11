#include "dog.h"



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
 * _strcpy - copy a string
 * @source: (string)
 * @dest: (string)
 *
 * Description: This function copy value from source to
 * destination
 * Return: A pointer on success or NULL
 */

char *_strcpy(char *dest, char *source)
{
	int i;

	if (source == NULL)
		return (NULL);

	for (i = 0; source[i] != '\0'; i++)
		dest[i] = source[i];

	return (dest);
}




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
	{
		free(my_dog);
		return (NULL);
	}


	my_dog->name = malloc(sizeof(_strlen(name)) + 1);
	if (!my_dog->name)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	my_dog->owner = malloc(sizeof(_strlen(owner)) + 1);
	if (!my_dog->owner)
	{
		free(my_dog->owner);
		free(my_dog);
		return (NULL);
	}

	_strcpy(my_dog->name, name);
	my_dog->age = age;
	_strcpy(my_dog->owner, owner);

	return (my_dog);
}
