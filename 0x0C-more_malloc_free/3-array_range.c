#include <stdlib.h>
#include "main.h"

/**
 * *array_range - function that creates an array of integers
 * @min: minimum values in an array
 * @max: maximumm values in an array
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int a, b;

	if (min > max)
		return (NULL);

	b = max - min + 1;
	ptr = malloc(sizeof(int) * b);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		ptr[a] = min++;

	return (ptr);
}
