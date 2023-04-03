#include "main.h"

/**
 * _memset - function tha fills memory with a constant
 * @s: memory area
 * @b: char to copy
 * @n: times number of copied b
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
