#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of size size and assign char c
 * @size: size of an array
 * @c: assigned char
 * description: creates an array of unsigned int size and assign char c
 * Return: a pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int y;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (y = 0; y < size; y++)
		str[y] = c;
	return (str);
}
