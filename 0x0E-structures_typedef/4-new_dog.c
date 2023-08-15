#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - a new dog.
 * @name: the dog name.
 * @age: dog age.
 * @owner: the dog owner.
 *
 * Return: str dog.
 * if fails, call NULL.
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
