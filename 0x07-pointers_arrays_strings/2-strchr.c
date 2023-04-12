#include "main.h"

/**
<<<<<<< HEAD
 * _strchr - fuction that locates a character of a string
 * @s: a string
 * @c: occurance character
 * Return: c apointer to first occurance character and
=======
 * _strchr - function that locates a character in a string
 * @s: a string
 * @c: occurance character
 * Return: c a pointer to first occurance character and
>>>>>>> fb5bb99f02949051b8a55d9ba26c7eb01a90a700
 * NULL if c is not found
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
<<<<<<< HEAD
=======

>>>>>>> fb5bb99f02949051b8a55d9ba26c7eb01a90a700
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
