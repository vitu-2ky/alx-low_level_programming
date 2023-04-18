#include <stdlib.h>
#include "main.h"

/**
 * _realloc - function that reallocates a memory block,
 * using malloc and free.
 * @ptr: pointer to the previous allocated memory
 * @old_size: size in bytes for allocated space of ptr
 * @new_size: new size in bytes of the new memory block
 * Return: pointer to new size memory or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	unsigned int b, c = new_size;
	char *olda = ptr;

	if (ptr == NULL)
	{
		a = malloc(new_size);
		return (a);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	a = malloc(new_size);
	if (a == NULL)
		return (NULL);
	if (new_size > old_size)
		b = old_size;
	for (b = 0; b < c; b++)
		a[b] = olda[b];
	free(ptr);
	return (a);
}
