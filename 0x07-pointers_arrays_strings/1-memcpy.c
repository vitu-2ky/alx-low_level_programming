#include "main.h"

/**
 * _memcpy - function that copies n bytes from src  memory area
 * @n: function that copies bytes
 * @src: bytes from memory area
 * @dest: to memory area
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
