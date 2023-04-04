#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: initial segment
 * @accept: number of bytes
 * Return: number of bytes in s which
 * consists of only bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}
	return (bytes);
}
