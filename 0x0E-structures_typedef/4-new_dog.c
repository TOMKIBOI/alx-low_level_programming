#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - new dog.
 * @name:  dog name.
 * @age: dog age.
 * @owner: dog owner.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	newDog = malloc(sizeof(*newDog));
	if (newDog == NULL)
		return (NULL);

	newDog->name = strdup(name);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->age = age;

	newDog->owner = strdup(owner);
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	return (newDog);
}
