#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: a string
 * @c: occurance character
 * Return: c a pointer to first occurance character and
 * NULL if c is not found
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)

	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
