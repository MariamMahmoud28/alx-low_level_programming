#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - function
 * @str: pointer
 * Return: value
 */
int _strlen(const char *str)
{
	int l = 0;

	while (*str++)
		l++;
	return (l);
}

/**
 * _strcopy - function
 * @src: pointer
 * @dest: string
 * Return: dest
 */
char *_strcopy(char *dest, char *src)
{
	int m;

	for (m = 0; src[m]; m++)
		dest[m] = '\0';

	return (dest);
}

/**
 * new_dog - function
 * @name: name
 * @age: age
 * @owner: owner
 * Return: struct pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	/* name and owner*/
	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}

