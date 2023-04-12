#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates array of size size assigned char c
 * @c: assigned char
 * @size: size of array
 * Description: create an array of size size and assign char c
 * Returns: a pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr == malloc(sizeof(char) * size);

	/* check malloc success */

	if (arr == NULL)
		return (NULL);
	
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
