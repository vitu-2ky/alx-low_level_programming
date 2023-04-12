#include "main.h"
#include <stdlib.h>

/**
<<<<<<< HEAD
 * create_array - function that creates array of size size assigned char c
 * @c: assigned char
 * @size: size of array
 * Description: create an array of size size and assign char c
 * Returns: a pointer to the array or NULL if it fails
=======
 * create_array - function that creates an array of chars and assign char c
 * @size: size of an array
 * @c: assigned char
 * description: creates an array of unsigned int size and assign char c
 * Return: a pointer to the array or NULL if it fails
>>>>>>> 537dfa4fb30f488c8c76d37b45c95fb950d041b5
 */

char *create_array(unsigned int size, char c)
{
<<<<<<< HEAD
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
=======
	char *str;
	unsigned int y;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (y = 0; y < size; y++)
		str[y] = c;
	return (str);
>>>>>>> 537dfa4fb30f488c8c76d37b45c95fb950d041b5
}
