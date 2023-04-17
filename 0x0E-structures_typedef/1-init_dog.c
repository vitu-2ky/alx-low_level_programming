#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initializes variable type of struct dog
 * @d: pointer to struck dog
 * @name: the name of the dog
 * @age: tthe age of the dog
 * @owner: the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
