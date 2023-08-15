#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - copies the string pointed
 * @dest: pointer to the buffer
 * @src: string to be copied
 *
 * Return: returns pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int lenght, i;

	lenght = 0;

	while (src[lenght] != '\0')
	{
		lenght++;
	}

	for (i = 0; i < lenght; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - new dog
 * @name: dog name
 * @age: the dog age
 * @owner: the dog owner
 *
 * Return: new dog (Success), else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lenght1, lenght2;

	lenght1 = _strlen(name);
	lenght2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (lenght1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (lenght2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
