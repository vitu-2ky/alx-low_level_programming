#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: string to be allocated
 * @s2: concatenated string
 * @n: the number of bytes
 * Return: pointer to the string result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a, b, c;

	if (s1 == NULL)
	{
		a = 0;
	}
	else
	{
	for (a = 0; s1[a];)
		a++;
	}
	if (s2 == NULL)
	{
		b = 0;
	}
	else
	{
		for (b = 0; s2[b];)
			b++;
	}
	if (b > n)
		b = n;
	s = malloc(sizeof(char) * (a + b + 1));

	if (s == NULL)
		return (NULL);

	for (c = 0; c < a; c++)
		s[c] = s1[c];
	for (c = 0; c < b; c++)
		s[c + a] = s2[c];
	s[a + b] = '\0';

	return (s);
}
