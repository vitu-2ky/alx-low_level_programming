#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - function that returns the lenght of a string
 * @str: string to be measure
 * Return: lenght of a string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcpy - function that copies a string by src
 * including terminating NULL byte (\0) to a
 * buffer pointed dest.
 * @dest: buffer storing string copy
 * @src: the string source
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int index  = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: onwer of the dog
 * Return: new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);
	return (dog);
}
