#include "function_pointers.h"

/**
 * array_iterator - function that excutes function given as a,
 * parameter on each element of an array.
 * @array: an array to excute
 * @size: the size of an array
 * @action: a pointer to the functionneed to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t y;

	if (array && action)
	{
		y = 0;
		while (y < size)
		{
			action(array[y]);
			y++;
		}
	}
}
