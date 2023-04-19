#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array elements
 * @size: number of elements in an array
 * @cmp: a pointer to the function to be used to compare values
 * Return: index of the first element or -1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int y  = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (y < size)
			{
				if (cmp(array[y]))
					return (y);
				y++;
			}
		}

	}
	return (-1);
}
